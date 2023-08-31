#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QDialog>


namespace Ui {
class SecondWindow;
}

class SecondWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SecondWindow(QWidget *parent = nullptr);
    ~SecondWindow();

    void setUserName(QString *name);
private:
    Ui::SecondWindow *ui;
};

#endif // SECONDWINDOW_H
