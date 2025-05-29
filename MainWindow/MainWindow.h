#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MainWindow.h"
#include <string>
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindowClass; };
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void on_btnIniciar_clicked();
    void mostrarVentanaRegistro();
    void get_texto(string label, string& variable);

private:
    Ui::MainWindowClass *ui;
};

