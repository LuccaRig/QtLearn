#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Exemple of connecting signals and slots:
    // Connecting a horizontal slider in the ui with a progress bar
    // connect(ui->horizontalSlider, SIGNAL(valueChanged(int)),
    //         ui->progressBar, SLOT(setValue(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->lineEdit_2->setText("Hello button app");
}

