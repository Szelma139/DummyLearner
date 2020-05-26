#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <langretriever.h>
#include <QDebug>
#include <QTimer>
#include <QApplication>
#include <QDesktopWidget>
#include <QDateTime>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    l = new LangRetriever;
    timer = new QTimer;
    timer->setInterval(50000);
    timer->start();


    connect(timer, &QTimer::timeout, this, &MainWindow::getNextWord);
    //connect signal logic with this
    list_german = l->retrieveArrayFromJson("german");
    list_english = l->retrieveArrayFromJson("english");
}



void MainWindow::getNextWord()
{


    qsrand(QDateTime::currentMSecsSinceEpoch() / 1000);
    int i = rand()%((list_german.length()-1));



    qDebug()<<list_german.at(i);
    qDebug()<<list_english.at(i);
    ui->lineEdit->setText(list_german.at(i));
    ui->lineEdit_2->setText(list_english.at(i));
    raise();

}

QStringList MainWindow::getTwoWords(QStringList listA, QStringList listB, int i){
    QStringList list;



    return list;
}

MainWindow::~MainWindow()
{
    delete ui;
}






