#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QCheckBox>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>

class MainWindow : public QDialog
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    QLineEdit *line;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QCheckBox *firstCheckBox;
    QCheckBox *secondCheckBox;
    QLabel *myList;
private slots:
    void TextChanged(QString str);
    void enabledCheckBox(int state);

};
#endif // MAINWINDOW_H
