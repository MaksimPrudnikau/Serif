#include "serif.h"
#include "stdafx.h"

Serif::Serif(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    ui.comboBox->addItem("�������� �������");
    ui.comboBox->addItem("���������� �������");
    ui.comboBox->addItem("������ �������� �������");
    ui.comboBox->addItem("�������� �������� �������");
    ui.comboBox->addItem("������ ������� �������");
    ui.comboBox->addItem("�������� ������� �������");
}
