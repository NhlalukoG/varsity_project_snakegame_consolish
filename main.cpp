#include <QApplication>
#include "startscreen.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    StartScreen window;

    window.show();

    return a.exec();
}

