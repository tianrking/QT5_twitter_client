#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QTime>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(time_display()));
    timer->start(500);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Login_clicked()
{
    QString ID = ui ->lineEdit_ID->text();
    QString Token = ui ->lineEdit_Token->text();
    ui->label_Display->setText("Hi "+ ID);
//    ui ->lineEdit_ID->setText(" ");
//    ui ->lineEdit_Token->setText(" 2");

}


void MainWindow::on_pushButton_Exit_clicked()
{
    ui ->lineEdit_ID->setText(" ");
    ui ->lineEdit_Token->setText(" ");
}

const static double PI = 3.1415926;
void MainWindow::on_pushButton_clicked()
{

}


void MainWindow::on_pushButton_calculate_clicked()
{
    QString tempSTR;
    QString R =  ui ->lineEdit_R->text();
    double area = R.toDouble()*R.toDouble()*PI;
//    ui ->lineEdit_R->setText(" ");
    ui ->lineEdit_Area->setText(tempSTR.setNum(area));
    QString str;
    str=QString("%1 was born in %2.").arg("Bob").arg(1998);
}


void MainWindow::on_dial_actionTriggered(int action)
{
    QString dial_data;
    int dial_data_double = ui->dial->value();
//    double dial_data_double = ui->dial->
    ui->progressBar->setValue(dial_data_double);
}


void MainWindow::on_horizontalSlider_actionTriggered(int action)
{
    QString horizontalSlider_data;
    int horizontalSlider_data_int = ui->horizontalSlider->value();
    ui->lcdNumber->display(horizontalSlider_data_int);

}

//#include <QTime>
////#include <QTimer>

void MainWindow::time_display()
{
    QTime time = QTime::currentTime();
    QString time_string=time.toString("hh:mm:ss");
    ui->label_now_time->setText(time_string);
}


void MainWindow::on_pushButton_get_host_information_clicked()
{
    QString localHostName = QHostInfo::localDomainName();
    ui->label_hostname->setText(localHostName);

}

