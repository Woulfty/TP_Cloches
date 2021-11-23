#include "TP3_cloches.h"
#include "qmessagebox.h"
#include <Windows.h>

TP3_cloches::TP3_cloches(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	ui.Disconnect->setDisabled(1);

	socket = new QTcpSocket(this);
}



// - Ferme l'application
void TP3_cloches::quit()
{
	exit(0);
}

void TP3_cloches::sendMessage(QString Msg)
{
	QMessageBox::information(this, "Médlusettes", "Médlusettes");
	QTableWidgetItem *msg = new QTableWidgetItem(Msg);
	ui.serverMessage->setItem(msgCount++, 0, msg);
}


// - établit la conexion au serveur
void TP3_cloches::connect()
{
	QString IP = ui.Server_Edit->text();
	QString QHost = ui.Port_Edit->text();
	int Host = QHost.toInt();

	socket->connectToHost(IP, Host);

	// Si le serveur a été démarré correctement
	ui.etatServeur->setText(tr("Connected !"));
	ui.etatServeur->setStyleSheet("QLabel { color : green; }");

	ui.Disconnect->setDisabled(0);
	ui.Connect->setDisabled(1);
}

// - déconnecte du serveur
void TP3_cloches::disconnect()
{
	// Si le serveur n'a pas été démarré correctement
	ui.etatServeur->setText(tr("Not Connected !"));
	ui.etatServeur->setStyleSheet("QLabel { color : red; }");
	socket->close();

	ui.Disconnect->setDisabled(1);
	ui.Connect->setDisabled(0);
}

// - reset le marteau des cloches
void TP3_cloches::reset()
{
}


// ----------------------------------------------------------- //


// - Fait sonner la cloche n°1
void TP3_cloches::Cloche1()
{
	QString msg = "Envoie de trame à la cloche n°1 ( grosse cloche )";
	sendMessage(msg);

	char trame[12];

	trame[0] = 0x00;
	trame[1] = 0x00;
	trame[2] = 0x00;
	trame[3] = 0x00;
	trame[4] = 0x00;
	trame[5] = 0x06;
	trame[6] = 0x00;
	trame[7] = 0x06;
	trame[8] = 0x00;
	trame[9] = 0x02;
	trame[10] = 0x00;
	trame[11] = 0x01;

	socket->write(trame, 12);


	Sleep(250);
	trame[0] = 0x00;
	trame[1] = 0x00;
	trame[2] = 0x00;
	trame[3] = 0x00;
	trame[4] = 0x00;
	trame[5] = 0x06;
	trame[6] = 0x00;
	trame[7] = 0x06;
	trame[8] = 0x00;
	trame[9] = 0x02;
	trame[10] = 0x00;
	trame[11] = 0x00;

	socket->write(trame, 12);
	//---------------------------------------------------------------------------
}


// - Fait sonner la cloche n°2
void TP3_cloches::Cloche2()
{
	QString msg = "Envoie de trame à la cloche n°2 ( moyenne cloche )";
	sendMessage(msg);

	char trame[12];

	trame[0] = 0x00;
	trame[1] = 0x00;
	trame[2] = 0x00;
	trame[3] = 0x00;
	trame[4] = 0x00;
	trame[5] = 0x06;
	trame[6] = 0x00;
	trame[7] = 0x06;
	trame[8] = 0x00;
	trame[9] = 0x02;
	trame[10] = 0x00;
	trame[11] = 0x02;

	socket->write(trame, 12);


	Sleep(250);
	trame[0] = 0x00;
	trame[1] = 0x00;
	trame[2] = 0x00;
	trame[3] = 0x00;
	trame[4] = 0x00;
	trame[5] = 0x06;
	trame[6] = 0x00;
	trame[7] = 0x06;
	trame[8] = 0x00;
	trame[9] = 0x02;
	trame[10] = 0x00;
	trame[11] = 0x00;

	socket->write(trame, 12);
	//---------------------------------------------------------------------------
}

// - Fait sonner la cloche n°3
void TP3_cloches::Cloche3()
{
	QString msg = "Envoie de trame à la cloche n°3 ( petite cloche )";
	sendMessage(msg);

	char trame[12];

	trame[0] = 0x00;
	trame[1] = 0x00;
	trame[2] = 0x00;
	trame[3] = 0x00;
	trame[4] = 0x00;
	trame[5] = 0x06;
	trame[6] = 0x00;
	trame[7] = 0x06;
	trame[8] = 0x00;
	trame[9] = 0x02;
	trame[10] = 0x00;
	trame[11] = 0x04;

	socket->write(trame, 12);


	Sleep(250);
	trame[0] = 0x00;
	trame[1] = 0x00;
	trame[2] = 0x00;
	trame[3] = 0x00;
	trame[4] = 0x00;
	trame[5] = 0x06;
	trame[6] = 0x00;
	trame[7] = 0x06;
	trame[8] = 0x00;
	trame[9] = 0x02;
	trame[10] = 0x00;
	trame[11] = 0x00;

	socket->write(trame, 12);
	//---------------------------------------------------------------------------
}


// - Fait sonner la cloche n°4
void TP3_cloches::Cloche4()
{
	QString msg = "Envoie de trame à la cloche n°4 ( Cloche intermédiaire )";
	sendMessage(msg);

	char trame[12];

	trame[0] = 0x00;
	trame[1] = 0x00;
	trame[2] = 0x00;
	trame[3] = 0x00;
	trame[4] = 0x00;
	trame[5] = 0x06;
	trame[6] = 0x00;
	trame[7] = 0x06;
	trame[8] = 0x00;
	trame[9] = 0x02;
	trame[10] = 0x00;
	trame[11] = 0x08;

	socket->write(trame, 12);
	
	
	Sleep(250);
	trame[0] = 0x00;
	trame[1] = 0x00;
	trame[2] = 0x00;
	trame[3] = 0x00;
	trame[4] = 0x00;
	trame[5] = 0x06;
	trame[6] = 0x00;
	trame[7] = 0x06;
	trame[8] = 0x00;
	trame[9] = 0x02;
	trame[10] = 0x00;
	trame[11] = 0x00;

	socket->write(trame, 12);
	//---------------------------------------------------------------------------
} 