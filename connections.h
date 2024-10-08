#ifndef CONNECTIONS_H
#define CONNECTIONS_H

#include <QDialog>

namespace Ui {
class Connections;
}

class Connections : public QDialog
{
    Q_OBJECT

public:
    explicit Connections(QWidget *parent = nullptr);
    ~Connections();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Connections *ui;
};

#endif // CONNECTIONS_H
