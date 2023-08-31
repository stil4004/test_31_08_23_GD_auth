#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "secondwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString *getUserName();
private slots:
    void on_pushButton_confirm_clicked();
private:
    bool checkForAccess(QString *login, QString *pass);
private:
    Ui::MainWindow *ui;
    SecondWindow *sWindow;
    QString *userName;
};
#endif // MAINWINDOW_H
