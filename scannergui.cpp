#include "scannergui.h"
#include "scannernet.h"
#include <QDebug>

ScannerGui::ScannerGui(QWidget *parent) :
    QWidget(parent)
{
    m_scan = new ScannerNet;
    setupUi(this);
}

void ScannerGui::on_startButton_clicked()
{
    const QString host = hostnameEntry->text();
    QString portString = portEntry->text();

    QStringList portList = portString.split(",");

    for(auto p : portList)
    {
        m_scan->doScan(host, p.toInt());
    }


}
