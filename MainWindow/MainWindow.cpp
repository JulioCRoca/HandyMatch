#include "MainWindow.h"
#include "Registro.h"
#include <string.h> // Ensure the correct header is included
#include <iostream>
using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindowClass())
{
    ui->setupUi(this);
    connect(ui->pushButtonLogin, &QPushButton::clicked, this, &MainWindow::on_btnIniciar_clicked);
    connect(ui->pushButtonRegistro, &QPushButton::clicked, this, &MainWindow::mostrarVentanaRegistro);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_btnIniciar_clicked() {
    QString correo = ui->lineEditEmail->text();
    QString contrasena = ui->lineEditContrasena->text();
    string correoStd = correo.toStdString();
    string contrasenaStd = contrasena.toStdString();
    qDebug() << "Correo:" << correo;
    qDebug() << "Contrasena:" << contrasena;
    cout << "Correo:" << correoStd << endl;
    cout << "Contrasena:" << contrasenaStd << endl;


}
void MainWindow::get_texto(string label,string &variable) {
	QString variable_q = ui->label->text();
    variable = variable_q.toStdString(); // Convertimos de QString a std::string
    qDebug() << "Texto del label:" << variable_q; // Imprimimos el texto del label
	cout << "Texto del label:" << variable << endl; // Imprimimos en consola
}
void MainWindow::mostrarVentanaRegistro() {
    Registro ventanaRegistro(this);  // Se pasa this para que quede sobre MainWindow
    ventanaRegistro.setModal(true);  // Esto hace que sea una ventana modal (bloquea la principal)
    ventanaRegistro.exec();          // Muestra la ventana emergente de forma modal
}

