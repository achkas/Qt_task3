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
    QString login_2 = ui->login_2->text();
    QString password = ui->password->text();
    QString host_name_2 = ui->host_name_2->text();
    QString db_name_2 = ui->db_name_2->text();
    uint connection_port_2 = ui->connection_port_2->text().toInt();


//if(connection_port_2 == 123)
    if(password == "asd")

        {
         QMessageBox::information(this, "Connecting", "You connect!");
        }
        else
        {
         QMessageBox::warning(this, "Connecting", "You have not connect!");
        }




}

