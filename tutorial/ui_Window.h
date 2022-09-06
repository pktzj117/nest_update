/********************************************************************************
** Form generated from reading UI file 'Window.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Window
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *installedVersion;
    QLabel *label;
    QCheckBox *customAppcast;
    QCheckBox *showUpdateNotifications;
    QCheckBox *showAllNotifcations;
    QCheckBox *enableDownloader;
    QCheckBox *mandatoryUpdate;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *changelogText;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *resetButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeButton;
    QPushButton *checkButton;

    void setupUi(QMainWindow *Window)
    {
        if (Window->objectName().isEmpty())
            Window->setObjectName(QStringLiteral("Window"));
        Window->resize(483, 494);
        centralwidget = new QWidget(Window);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/icons/update.png")));

        horizontalLayout_2->addWidget(label_2);

        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        label_4 = new QLabel(frame_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_3->addWidget(label_4);


        horizontalLayout_2->addWidget(frame_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(frame_2);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        installedVersion = new QLineEdit(groupBox);
        installedVersion->setObjectName(QStringLiteral("installedVersion"));

        gridLayout->addWidget(installedVersion, 2, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        customAppcast = new QCheckBox(groupBox);
        customAppcast->setObjectName(QStringLiteral("customAppcast"));

        gridLayout->addWidget(customAppcast, 6, 0, 1, 1);

        showUpdateNotifications = new QCheckBox(groupBox);
        showUpdateNotifications->setObjectName(QStringLiteral("showUpdateNotifications"));
        showUpdateNotifications->setChecked(true);

        gridLayout->addWidget(showUpdateNotifications, 4, 0, 1, 1);

        showAllNotifcations = new QCheckBox(groupBox);
        showAllNotifcations->setObjectName(QStringLiteral("showAllNotifcations"));

        gridLayout->addWidget(showAllNotifcations, 3, 0, 1, 1);

        enableDownloader = new QCheckBox(groupBox);
        enableDownloader->setObjectName(QStringLiteral("enableDownloader"));
        enableDownloader->setChecked(true);

        gridLayout->addWidget(enableDownloader, 5, 0, 1, 1);

        mandatoryUpdate = new QCheckBox(groupBox);
        mandatoryUpdate->setObjectName(QStringLiteral("mandatoryUpdate"));

        gridLayout->addWidget(mandatoryUpdate, 7, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        changelogText = new QTextBrowser(groupBox_2);
        changelogText->setObjectName(QStringLiteral("changelogText"));
        changelogText->setReadOnly(true);

        verticalLayout_2->addWidget(changelogText);


        verticalLayout->addWidget(groupBox_2);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        resetButton = new QPushButton(frame);
        resetButton->setObjectName(QStringLiteral("resetButton"));

        horizontalLayout->addWidget(resetButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closeButton = new QPushButton(frame);
        closeButton->setObjectName(QStringLiteral("closeButton"));

        horizontalLayout->addWidget(closeButton);

        checkButton = new QPushButton(frame);
        checkButton->setObjectName(QStringLiteral("checkButton"));

        horizontalLayout->addWidget(checkButton);


        verticalLayout->addWidget(frame);

        Window->setCentralWidget(centralwidget);

        retranslateUi(Window);

        QMetaObject::connectSlotsByName(Window);
    } // setupUi

    void retranslateUi(QMainWindow *Window)
    {
        Window->setWindowTitle(QApplication::translate("Window", "QSimpleUpdater Example", 0));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("Window", "<h1><i>QSimpleUpdater</i></h1>", 0));
        label_4->setText(QApplication::translate("Window", "<i>A simpler way to update your Qt applications...</i>", 0));
        groupBox->setTitle(QApplication::translate("Window", "Updater Options", 0));
        installedVersion->setText(QApplication::translate("Window", "0.1", 0));
        installedVersion->setPlaceholderText(QApplication::translate("Window", "Write a version string...", 0));
        label->setText(QApplication::translate("Window", "Set installed version (latest version is 1.0)", 0));
        customAppcast->setText(QApplication::translate("Window", "Do not use the QSU library to read the appcast", 0));
        showUpdateNotifications->setText(QApplication::translate("Window", "Notify me when an update is available", 0));
        showAllNotifcations->setText(QApplication::translate("Window", "Show all notifications", 0));
        enableDownloader->setText(QApplication::translate("Window", "Enable integrated downloader", 0));
        mandatoryUpdate->setText(QApplication::translate("Window", "Mandatory Update", 0));
        groupBox_2->setTitle(QApplication::translate("Window", "Changelog", 0));
        changelogText->setHtml(QApplication::translate("Window", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt;\">Click &quot;Check for Updates&quot; to update this field...</span></p></body></html>", 0));
        resetButton->setText(QApplication::translate("Window", "Reset Fields", 0));
        closeButton->setText(QApplication::translate("Window", "Close", 0));
        checkButton->setText(QApplication::translate("Window", "Check for Updates", 0));
    } // retranslateUi

};

namespace Ui {
    class Window: public Ui_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
