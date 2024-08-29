#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionQuit_triggered()
{
    QApplication::quit();
}


void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::information(this, "App info", "This app was made by Lucca");
}


void MainWindow::on_actionAbout_Qt_triggered()
{
    QApplication::aboutQt();
}


void MainWindow::on_actionprint_triggered()
{
    QPrinter printer;
    QPrintDialog dialog(&printer, this);

    dialog.setWindowTitle("Print Document");

    if(ui->textEdit->textCursor().hasSelection()) {
        dialog.setOption(QAbstractPrintDialog::PrintSelection);
    }
    if(dialog.exec() != QDialog::Accepted) {
        return;
    }

}


void MainWindow::on_actionFont_triggered()
{
    bool ok;

    QFont font = QFontDialog::getFont(&ok, QFont("Helvetica[Cronyx]"), this);

    if(ok) {
        ui->textEdit->setFont(font);
    }
}


void MainWindow::on_actionColor_triggered()
{
    bool ok;

    QColor color = QColorDialog::getColor(Qt::black, this);
    if(&ok) {
        ui->textEdit->setTextColor(color);
    }
}


void MainWindow::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this,"Open A File", "/home/");
    ui->textEdit->setText(fileName);

}

