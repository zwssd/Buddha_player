#include "mainwindow.h"
#include <QApplication>

#include <QMediaPlayer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    /*2.创建QMediaPlayer对象指针，通过指针设置文件路径、音量、播放*/

    /*QMediaPlayer *musicPlayer = new QMediaPlayer();
        musicPlayer->setMedia(QUrl::fromLocalFile("/home/zhangwei/Music/chengdu.mp3"));

        musicPlayer->setVolume(80);

        musicPlayer->play();*/

    return a.exec();
}
