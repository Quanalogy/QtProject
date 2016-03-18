//
// Created by Minty - Munk on 18-03-2016.
//

#ifndef QTPROJECT_MAINWINDOW_H
#define QTPROJECT_MAINWINDOW_H

#include <QMainWindow>

namespace Ui{
    class MainWindow;
}

class MainWindow : public QMainWindow{
    Q_OBJECT //convert the class into a Q_Object
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};


#endif //QTPROJECT_MAINWINDOW_H
