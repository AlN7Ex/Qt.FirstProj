#include "mainwindow.h"

#include <QApplication>
//#include <QSpinBox>
//#include <QSlider>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow *window = new MainWindow;
    window->show();


    return a.exec();
}
