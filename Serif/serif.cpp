#include "serif.h"
#include "stdafx.h"

Serif::Serif(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    ui.comboBox->addItem("Полярная засечка");
    ui.comboBox->addItem("Биполярная засечка");
    ui.comboBox->addItem("Прямая линейная засечка");
    ui.comboBox->addItem("Обратная линейная засечка");
    ui.comboBox->addItem("Прямая угловая засечка");
    ui.comboBox->addItem("Обратная угловая засечка");
}
