#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QWidget>
#include <QLabel>
#include <QPixmap>
#include <QHoverEvent>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QWidget::setWindowTitle("Movie Recommender");
    QWidget::setMinimumSize(1100, 600);
    QWidget::showMaximized();
    QWidget::setStyleSheet("background-color: #1C1C1C");

    QPixmap cine("C:/Users/Kaique Ryan/Documents/Movie-Recommender/pictures/popcorn-icon.png");

    ui->cineImage->setPixmap(cine.scaled(400, 400, Qt::KeepAspectRatio));

    QPixmap logo("C:/Users/Kaique Ryan/Documents/Movie-Recommender/pictures/logo.png");
    ui->logo->setPixmap(logo);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnStart_clicked()
{
    ui->btnStart->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgba(255, 255, 255, 0); border-radius: 25px; font-size: 22px; font-family: Franklin Gothic Heavy;");
}


void MainWindow::on_btnContribute_clicked()
{

}

