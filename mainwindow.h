#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    //void on_pushButton_clicked();

    void on_actionOpenFile_triggered();

private:
    Ui::MainWindow *ui;
protected:
   // void paintEvent(QPaintEvent *event);
    //void mouseMoveEvent(QMouseEvent *event);


};

#endif // MAINWINDOW_H
