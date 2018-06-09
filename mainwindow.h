#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets>

#include "QMediaPlayer"
#include "QMediaPlaylist"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    bool isPlayerAvailable() const;

    void addToPlaylist(const QList<QUrl> &urls);

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QMediaPlayer* m_player = nullptr;
    QMediaPlaylist *m_playlist = nullptr;

};

#endif // MAINWINDOW_H
