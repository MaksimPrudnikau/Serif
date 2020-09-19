#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_serif.h"

class Serif : public QMainWindow
{
    Q_OBJECT

public:
    Serif(QWidget *parent = Q_NULLPTR);

private:
    Ui::SerifClass ui;

};
