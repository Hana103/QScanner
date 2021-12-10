#include "scannergui.h"
#include "scannernet.h"
#include <QDebug>

ScannerGui::ScannerGui(QWidget *parent) :
    QWidget(parent)
{
    m_scan= new ScannerNet;
    setupUi(this);
}

void ScannerGui::on_startButton_clicked()
{
   QString host= portEntry->text();
   int port;
    qDebug() <<"hallo";
    m_scan->doScan() << portEntry->text()<< "    " << hostnameEntry->text();
}
