#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QHostInfo>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_Login_clicked();

    void on_LineEdit_ID_textEdited(const QString &arg1);

    void on_pushButton_Exit_clicked();

    void on_pushButton_calculate_clicked();

    void on_dial_actionTriggered(int action);

    void on_horizontalSlider_actionTriggered(int action);

    void on_comboBox_now_time_activated(int index);

    void time_display();


    void on_pushButton_get_host_information_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
