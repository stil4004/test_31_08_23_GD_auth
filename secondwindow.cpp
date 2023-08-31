#include "secondwindow.h"
#include "ui_secondwindow.h"

SecondWindow::SecondWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondWindow)
{
    ui->setupUi(this);

}

SecondWindow::~SecondWindow()
{

    delete ui;
}

void SecondWindow::setUserName(QString *name)
{
     ui->label_UserName->setText(*name);
}
