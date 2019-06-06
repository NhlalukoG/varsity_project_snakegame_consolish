QT += core
QT += widgets
QT += gui

CONFIG += c++11

TARGET = Snake
#CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    snake.cpp \
    startscreen.cpp \
    about.cpp \
    paused.cpp \
    timer.cpp \
    help.cpp \
    highscore.cpp \
    gameover.cpp

RESOURCES += \
    images.qrc

HEADERS += \
    snake.h \
    startscreen.h \
    about.h \
    paused.h \
    timer.h \
    help.h \
    highscore.h \
    gameover.h

FORMS += \
    startscreen.ui \
    about.ui \
    paused.ui \
    timer.ui \
    help.ui \
    highscore.ui \
    gameover.ui
