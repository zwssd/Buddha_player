#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_player = new QMediaPlayer;
    m_playlist = new QMediaPlaylist;

    this->setWindowTitle(tr("Buddha Player"));
    ui->musicList->setViewMode(QListView::ListMode);

    QListWidgetItem *item = new QListWidgetItem;
    item->setText("/home/zhangwei/Music/chengdu.mp3");                     //设置列表项的文本
    ui->musicList->addItem(item);        //加载列表项到列表框
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool isPlaylist(const QUrl &url) // Check for ".m3u" playlists.
{
    if (!url.isLocalFile())
        return false;
    const QFileInfo fileInfo(url.toLocalFile());
    return fileInfo.exists() && !fileInfo.suffix().compare(QLatin1String("m3u"), Qt::CaseInsensitive);
}

void MainWindow::addToPlaylist(const QList<QUrl> &urls)
{
    for (auto &url: urls) {
        if (isPlaylist(url))
            m_playlist->load(url);
        else
            m_playlist->addMedia(url);
    }
}


void MainWindow::on_pushButton_5_clicked()
{
    QFileDialog fileDialog(this);
    fileDialog.setAcceptMode(QFileDialog::AcceptOpen);
    fileDialog.setWindowTitle(tr("Open Files"));
    QStringList supportedMimeTypes = m_player->supportedMimeTypes();
    if (!supportedMimeTypes.isEmpty()) {
        supportedMimeTypes.append("audio/x-m3u"); // MP3 playlists
        fileDialog.setMimeTypeFilters(supportedMimeTypes);
    }
    fileDialog.setDirectory(QStandardPaths::standardLocations(QStandardPaths::MusicLocation).value(0, QDir::homePath()));
    if (fileDialog.exec() == QDialog::Accepted)
        addToPlaylist(fileDialog.selectedUrls());
}

void MainWindow::on_pushButton_clicked()
{
    m_player->setPlaylist(m_playlist);
    m_player->setVolume(80);
    m_player->play();
}
