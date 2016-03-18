#include <iostream>
#include <QtWidgets/QApplication>
#include "MainWindow.h"

using namespace std;

int main(int argc, char* argv[]) {
    QApplication a(argc, argv);



    MainWindow widget;
    widget.show();
    return a.exec();
}