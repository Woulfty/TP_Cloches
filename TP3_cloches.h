#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TP3_cloches.h"

class TP3_cloches : public QMainWindow
{
    Q_OBJECT

public:
    TP3_cloches(QWidget *parent = Q_NULLPTR);

public slots:
	void quit();
	void connect();
	void disconnect();

	void Cloche(int c);
	void reset();

private:
    Ui::TP3_clochesClass ui;
};
