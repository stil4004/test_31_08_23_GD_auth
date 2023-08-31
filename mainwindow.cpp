#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    sWindow = new SecondWindow(this);
    ui->label_wrongAns->hide();

}

MainWindow::~MainWindow()
{
    delete ui;
}

QString *MainWindow::getUserName()
{
    if(userName){
        return userName;
    }
    return nullptr;

}


void MainWindow::on_pushButton_confirm_clicked()
{
    //sWindow = new SecondWindow(this);
    //sWindow.setModal(true);

    //sWindow.exec();
    //this->close();
    userName = new QString();
    *userName = ui->line_login->text();
    QString password_str = ui->line_password->text();
    if(checkForAccess(userName, &password_str)){
        sWindow->setUserName(userName);
        sWindow->show();
        this->hide();
    }
    else{
        ui->label_wrongAns->show();
    }

}

bool MainWindow::checkForAccess(QString *login, QString *pass)
{
    if((*login == "admin") && (*pass == "1109")){
        return true;
    }
    else{
        return false;
    }
}

