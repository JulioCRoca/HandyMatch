#pragma once

#include <QDialog>
#include "ui_Registro.h"

QT_BEGIN_NAMESPACE
namespace Ui { class RegistroClass; };
QT_END_NAMESPACE

class Registro : public QDialog
{
	Q_OBJECT

public:
	Registro(QWidget *parent = nullptr);
	~Registro();

private:
	Ui::RegistroClass *ui;
};

