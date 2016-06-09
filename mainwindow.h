#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_btnred_clicked();

    void on_btnblue_clicked();

    void on_btnorg_clicked();

    void on_btnyel_clicked();

    void on_end_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
