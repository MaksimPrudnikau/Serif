#include "serif.h"
#include <QtWidgets/QApplication>
#include <qtextcodec.h>

int main(int argc, char *argv[])
{
    
    //QTextCodec* codec = QTextCodec::codecForName("UTF-8");//fix me
    //QTextCodec::setCodecForTr(codec);
    //QTextCodec::setCodecForCStrings(codec);
    //QTextCodec::setCodecForLocale(codec);
    QApplication a(argc, argv);
    Serif w;
    w.show();
    return a.exec();
}
