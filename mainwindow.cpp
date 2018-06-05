#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle(tr("Buddha Player"));
    ui->musicList->setViewMode(QListView::ListMode);

    QListWidgetItem *item = new QListWidgetItem;
    item->setText("/home/zhangwei/Music/chengdu.mp3");                     //设置列表项的文本
    ui->musicList->addItem(item);          //加载列表项到列表框
}

MainWindow::~MainWindow()
{
    delete ui;
}
