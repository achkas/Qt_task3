#include "connections.h"
#include "ui_connections.h"
#include "qmessagebox.h"

Connections::Connections(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Connections)
{
    ui->setupUi(this);
}

Connections::~Connections()
{
    delete ui;
}

void Connections::on_pushButton_clicked()
{
    QString login = ui->login->text();
    QString password = ui->password->text();
    QString host_name = ui->host_name->text();
    QString db_name = ui->db_name->text();
    uint connection_port = ui->connection_port->text().toInt();

QString loginR="asd";

    if(login == loginR)

        {
         QMessageBox::information(this, "Connecting", "You connect!");
        }
        else
        {
         QMessageBox::warning(this, "Connecting", "You have not connect!");
        }




}

