#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

}
QString slotStyleString(QPushButton button){
    return button.styleSheet();
}

void MainWindow::on_btnred_clicked()
{
    ui->slot1->setStyleSheet("QLabel { background-color:#ff0000; border-radius: 15px;}");
}

void MainWindow::on_btnblue_clicked()
{
    ui->slot2->setStyleSheet("QLabel{background-color : rgb(0, 170, 255); border-radius:15px;}");
}

void MainWindow::on_btnorg_clicked()
{
    ui->slot3->setStyleSheet("QLabel{background-color : rgb(0, 170, 255); border-radius:15px;}");
}

void MainWindow::on_btnyel_clicked()
{
     ui->slot4->setStyleSheet("QLabel{background-color : rgb(0, 170, 255); border-radius:15px;}");
}

void MainWindow::on_end_clicked()
{
    QApplication::quit();
}
