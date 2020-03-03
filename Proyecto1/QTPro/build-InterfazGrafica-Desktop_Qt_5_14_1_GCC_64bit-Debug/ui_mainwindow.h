/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCargar_2;
    QAction *actionCargar_3;
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1059, 563);
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background: rgb(117, 80, 123)"));
        actionCargar_2 = new QAction(MainWindow);
        actionCargar_2->setObjectName(QString::fromUtf8("actionCargar_2"));
        actionCargar_3 = new QAction(MainWindow);
        actionCargar_3->setObjectName(QString::fromUtf8("actionCargar_3"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(20, 50, 761, 431));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 759, 429));
        scrollArea->setWidget(scrollAreaWidgetContents);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(800, 80, 141, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Navilu"));
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(800, 190, 141, 31));
        label_2->setFont(font);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(870, 120, 151, 21));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        lineEdit->setClearButtonEnabled(false);
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(870, 230, 151, 21));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        lineEdit_2->setClearButtonEnabled(false);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(830, 300, 171, 31));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(850, 380, 141, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("DejaVu Serif"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(840, 420, 161, 61));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 215, 207)"));
        label_4->setFrameShape(QFrame::Panel);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1059, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Algoritmo de Dijkstra", nullptr));
        actionCargar_2->setText(QCoreApplication::translate("MainWindow", "Cargar", nullptr));
        actionCargar_3->setText(QCoreApplication::translate("MainWindow", "Cargar", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Ingrese Origen:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Ingrese Destino:", nullptr));
        lineEdit->setText(QString());
        lineEdit_2->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", " Ruta m\303\241s corta", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
