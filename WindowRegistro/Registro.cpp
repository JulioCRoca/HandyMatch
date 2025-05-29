#include "Registro.h"

Registro::Registro(QWidget *parent)
	: QDialog(parent)
	, ui(new Ui::RegistroClass())
{
	ui->setupUi(this);
}

Registro::~Registro()
{
	delete ui;
}

