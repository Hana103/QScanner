#ifndef SCANNERGUI_H
#define SCANNERGUI_H

#include "ui_scannergui.h"
#include "scannernet.h"

class ScannerGui : public QWidget, private Ui::ScannerGui
{
    Q_OBJECT

public:
    explicit ScannerGui(QWidget *parent = nullptr);
private slots:
    void on_startButton_clicked();
private:
    ScannerNet* m_scan;
};

#endif // SCANNERGUI_H
