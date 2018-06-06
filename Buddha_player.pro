#-------------------------------------------------
#
# Project created by QtCreator 2018-06-05T11:02:19
#
#-------------------------------------------------

QT       += core gui multimedia
QT += widgets

TARGET = Buddha_player
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

#unix:!macx: LIBS += -L$$PWD/../../Qt5.11.0/5.11.0/gcc_64/lib/ -lQt5Multimedia

#INCLUDEPATH += $$PWD/../../Qt5.11.0/5.11.0/gcc_64/lib
#DEPENDPATH += $$PWD/../../Qt5.11.0/5.11.0/gcc_64/lib

#unix:!macx: LIBS += -L$$PWD/../../Qt5.11.0/5.11.0/gcc_64/lib/ -lQt5MultimediaWidgets

INCLUDEPATH += $$PWD/../../Qt5.11.0/5.11.0/gcc_64/include
#DEPENDPATH += $$PWD/../../Qt5.11.0/5.11.0/gcc_64/include
#INCLUDEPATH += /usr/include/x86_64-linux-gnu/qt5
#DEPENDPATH += /usr/include/x86_64-linux-gnu/qt5
