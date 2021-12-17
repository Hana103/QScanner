#include "scannernet.h"

ScannerNet::ScannerNet(QObject *parent) : QObject(parent)
{
    m_socket = new QTcpSocket(this);
}

void ScannerNet::doScan(const QString& hostname, int port) const
{
    m_socket->connectToHost(hostname, port);


    if(!m_socket->waitForConnected(1000))
    {
        qDebug()<< port << " not connected";

    }
    else
    {
        qDebug()<< port << " connected";
        m_socket->disconnectFromHost();
    }
}
