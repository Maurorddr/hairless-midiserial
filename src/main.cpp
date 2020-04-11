#include <QtWidgets>
#include "ui/mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QCoreApplication::setOrganizationName("JxSolucoes");
    QCoreApplication::setOrganizationDomain("jxsolucoes.com.br");
    QCoreApplication::setApplicationName("Hairless MIDI Serial Bridge - Update");
    MainWindow w;
    w.show();
    return a.exec();
}
