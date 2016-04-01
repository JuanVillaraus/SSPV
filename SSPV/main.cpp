#include "siviso.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SIVISO w;

    w.m_pApplication = &a;
            w.changeStyleSheet(DAY_STYLE);

    w.show();

    return a.exec();
}
