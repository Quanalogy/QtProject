//
// Created by Minty - Munk on 18-03-2016.
//

#include "MainWindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

