#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QDialog(parent)
{
    myList = new QLabel("My first project (List)");

    line = new QLineEdit;

    addButton = new QPushButton("Add element");
    deleteButton = new QPushButton("Delete top element");

    firstCheckBox = new QCheckBox("Change text");
    secondCheckBox = new QCheckBox("Check Box Two");

    firstCheckBox->setEnabled(false);

    QHBoxLayout *topHLayout = new QHBoxLayout;
    topHLayout->addWidget(myList);
    topHLayout->addWidget(line);

    QVBoxLayout *leftVLayout = new QVBoxLayout;
    leftVLayout->addLayout(topHLayout);
    leftVLayout->addWidget(firstCheckBox);
    leftVLayout->addWidget(secondCheckBox);

    QVBoxLayout *rightVLayout = new QVBoxLayout;
    rightVLayout->addWidget(addButton);
    rightVLayout->addWidget(deleteButton);

    QHBoxLayout *mainLayout = new QHBoxLayout;

    mainLayout->addLayout(leftVLayout);
    mainLayout->addLayout(rightVLayout);

    connect(line,SIGNAL(textChanged(QString)),this,SLOT(TextChanged(QString)));
    connect(firstCheckBox,SIGNAL(stateChanged(int)), this, SLOT(enabledCheckBox(int)));

    setLayout(mainLayout);
}

void MainWindow::TextChanged(QString str)
{
    firstCheckBox->setEnabled(!str.isEmpty());
}

void MainWindow::enabledCheckBox(int state)
{
    line->setEnabled(state);
}
MainWindow::~MainWindow()
{
}

