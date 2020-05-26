#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


class QTimer;
class LangRetriever;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
    LangRetriever * l;
    QTimer * timer;
    QStringList list_english;
    QStringList list_german;
    QStringList getTwoWords(QStringList listA, QStringList listB, int i);



public slots:
    void getNextWord();

};
#endif // MAINWINDOW_H
