#include <iostream>
#include <QtWidgets/QApplication>
#include <QDebug>
#include "MainWindow.h"
//#include "widget.h"

using namespace std;

int main(int argc, char* argv[]) {
    QApplication a(argc, argv);
    QString helloStr = "Hello World!";
    qDebug() << helloStr;


    MainWindow widget;
    widget.show();
    return a.exec();
}