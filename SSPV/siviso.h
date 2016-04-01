#ifndef SIVISO_H
#define SIVISO_H

#include <QMainWindow>

#define DAY_STYLE 0
#define DUSK_STYLE 1
#define NIGHT_STYLE 2

namespace Ui {
class SIVISO;
}

class SIVISO : public QMainWindow
{
    Q_OBJECT

public:
    explicit SIVISO(QWidget *parent = 0);
    ~SIVISO();

    QApplication *m_pApplication;

    void changeStyleSheet(int iStyle);

private:
    Ui::SIVISO *ui;
};

#endif // SIVISO_H
