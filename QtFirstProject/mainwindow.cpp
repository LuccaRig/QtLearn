#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton,SIGNAL(clicked()),
            this,SLOT(button()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::button()
{
    QString name[] = {"abc", "def", "ghi"};
    QString code[] = {"abc12", "def34", "ghi56"};

    QString userName = ui->lineEdit->text();
    QString userCode = ui->lineEdit_2->text();

    bool found = false;
    for (int i = 0; i < name->length(); ++i) {
        if(userName == name[i] && userCode == code[i]){
            QMessageBox::information(this,"Welcome Message",
                        "User: "+name[i]+"\n"
                        "Welcome to the system");
            found = true;
            break;
        }
    }
    if(!found){
        QMessageBox::information(this,"Error Box",
                                 "Invalid user name or password");
    }
}

