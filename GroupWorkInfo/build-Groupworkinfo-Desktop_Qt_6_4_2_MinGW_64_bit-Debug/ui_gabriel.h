/********************************************************************************
** Form generated from reading UI file 'gabriel.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GABRIEL_H
#define UI_GABRIEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Gabriel
{
public:
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_3;

    void setupUi(QDialog *Gabriel)
    {
        if (Gabriel->objectName().isEmpty())
            Gabriel->setObjectName("Gabriel");
        Gabriel->resize(857, 719);
        label_2 = new QLabel(Gabriel);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 400, 701, 101));
        pushButton = new QPushButton(Gabriel);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(310, 630, 211, 51));
        QFont font;
        font.setPointSize(14);
        pushButton->setFont(font);
        label = new QLabel(Gabriel);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 330, 551, 51));
        QFont font1;
        font1.setPointSize(28);
        label->setFont(font1);
        label_3 = new QLabel(Gabriel);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(270, 10, 321, 301));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/pics/PICTURES FOR GROUPWORK/332343800_688488226295910_2866560317758888520_n.png")));
        label_3->setScaledContents(true);
        label_3->setWordWrap(false);

        retranslateUi(Gabriel);

        QMetaObject::connectSlotsByName(Gabriel);
    } // setupUi

    void retranslateUi(QDialog *Gabriel)
    {
        Gabriel->setWindowTitle(QCoreApplication::translate("Gabriel", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("Gabriel", "Description", nullptr));
        pushButton->setText(QCoreApplication::translate("Gabriel", "Other Information", nullptr));
        label->setText(QCoreApplication::translate("Gabriel", "LUIS MAVERICK GABRIEL", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Gabriel: public Ui_Gabriel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GABRIEL_H
