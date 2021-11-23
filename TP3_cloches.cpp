#include "TP3_cloches.h"
#include "qmessagebox.h"

TP3_cloches::TP3_cloches(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	ui.Disconnect->setDisabled(1);

	_socket.connectToHost(QHostAddress("192.168.64.124"), 502);
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
	{
		// Si le serveur a été démarré correctement
		ui.etatServeur->setText(tr("Connected !"));
		ui.etatServeur->setStyleSheet("QLabel { color : green; }");

		ui.Disconnect->setDisabled(0);
		ui.Connect->setDisabled(1);
	}
}

// - déconnecte du serveur
void TP3_cloches::disconnect()
{
	// Si le serveur n'a pas été démarré correctement
	ui.etatServeur->setText(tr("Not Connected !"));
	ui.etatServeur->setStyleSheet("QLabel { color : red; }");
	_socket.close();

	ui.Disconnect->setDisabled(1);
	ui.Connect->setDisabled(0);
}

// - reset le marteau des cloches
void TP3_cloches::reset()
{
}

// - Fait sonner la cloche n°1
void TP3_cloches::Cloche1()
{
	QString msg = "Envoie de trame à la cloche n°1";
	sendMessage(msg);
}

// - Fait sonner la cloche n°2
void TP3_cloches::Cloche2()
{
	QString msg = "Envoie de trame à la cloche n°2";
	sendMessage(msg);
}

// - Fait sonner la cloche n°3
void TP3_cloches::Cloche3()
{
	QString msg = "Envoie de trame à la cloche n°3";
	sendMessage(msg);
}

// - Fait sonner la cloche n°4
void TP3_cloches::Cloche4()
{
	QString msg = "Envoie de trame à la cloche n°4";
	sendMessage(msg);
}