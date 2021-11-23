#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TP3_cloches.h"
#include <qtcpserver.h>
#include <qtcpsocket.h>

class TP3_cloches : public QMainWindow
{
    Q_OBJECT

public:
    TP3_cloches(QWidget *parent = Q_NULLPTR);

	void sendMessage(QString Msg);

public slots:
	void quit();
	void connect();
	void disconnect();

	void Cloche1();
	void Cloche2();
	void Cloche3();
	void Cloche4();
	void reset();

private:
    Ui::TP3_clochesClass ui;
	QTcpSocket _socket;


	bool serverConnected = 0;
	int msgCount = 0;
};
