/********************************************************************************
** Form generated from reading UI file 'siviso.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIVISO_H
#define UI_SIVISO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_siviso
{
public:
    QWidget *centralWidget;
    QFrame *Alertas;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *Alert;
    QFrame *BarraHerramientas;
    QSlider *frecuencia;
    QLabel *label_7;
    QFrame *ControlRec;
    QPushButton *rec;
    QPushButton *play;
    QFrame *ControlVolumen;
    QPushButton *vol_dw;
    QPushButton *vol_up;
    QLabel *label_19;
    QDoubleSpinBox *bw;
    QLabel *label_8;
    QDoubleSpinBox *it;
    QDoubleSpinBox *dt;
    QLabel *label_11;
    QLabel *label_12;
    QFrame *PulsoActivo;
    QPushButton *cw;
    QSpinBox *frecP;
    QSpinBox *nP;
    QSpinBox *nHidrof;
    QDoubleSpinBox *ran_det;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QPushButton *tipo_norte;
    QLabel *label_18;
    QGroupBox *ControlOrigen;
    QRadioButton *origenBlanco;
    QRadioButton *origenSensor;
    QRadioButton *origenBuque;
    QFrame *ControlBlancos;
    QLabel *label_20;
    QPushButton *et_blancos;
    QComboBox *clas_blancos;
    QSpinBox *edo_mar;
    QLabel *label_21;
    QDoubleSpinBox *prob_falsa;
    QLabel *label_22;
    QDoubleSpinBox *prob_deteccion;
    QLabel *label_23;
    QLabel *label_24;
    QDoubleSpinBox *escala_ppi;
    QLabel *label_25;
    QDoubleSpinBox *escala_desp;
    QLabel *label_26;
    QDial *dial;
    QGroupBox *ControlEmisor;
    QRadioButton *origenManual;
    QRadioButton *origenAuto;
    QRadioButton *origenOmni;
    QPushButton *btOpenPort;
    QPushButton *lf;
    QPushButton *btr;
    QPushButton *ppi;
    QDoubleSpinBox *radio_boya;
    QLabel *label_58;
    QSpinBox *gan_sen;
    QSpinBox *ang;
    QLabel *label_ang;
    QFrame *Logos;
    QLabel *label_27;
    QLabel *label_9;
    QLabel *label_10;
    QFrame *CompGraf;
    QSlider *setColorDw;
    QSlider *setColorUp;
    QFrame *Desptact;
    QPlainTextEdit *view;
    QPlainTextEdit *textTestGrap;
    QPushButton *save;
    QPushButton *startCom;
    QPushButton *sensor0;
    QPushButton *openJars;
    QPushButton *closeJars;
    QPushButton *sensor1;
    QPushButton *endCom;
    QLineEdit *textSend;
    QPushButton *send;
    QPushButton *infoSignal;
    QFrame *MedioAmbiente;
    QLabel *label_49;
    QLabel *label_50;
    QLabel *label_52;
    QLabel *label_53;
    QLabel *label_54;
    QLabel *label_55;
    QLabel *label_56;
    QLabel *label_57;
    QToolButton *toolButton;
    QFrame *Plataforma;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *label_38;
    QLabel *label_39;
    QFrame *Blancos;
    QLabel *label_40;
    QLabel *label_41;
    QLabel *label_42;
    QLabel *label_43;
    QLabel *label_44;
    QLabel *label_45;
    QLabel *label_46;
    QLabel *label_47;
    QLabel *label_48;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *siviso)
    {
        if (siviso->objectName().isEmpty())
            siviso->setObjectName(QStringLiteral("siviso"));
        siviso->resize(1920, 1080);
        centralWidget = new QWidget(siviso);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Alertas = new QFrame(centralWidget);
        Alertas->setObjectName(QStringLiteral("Alertas"));
        Alertas->setGeometry(QRect(10, 9, 1591, 71));
        Alertas->setFrameShape(QFrame::StyledPanel);
        Alertas->setFrameShadow(QFrame::Raised);
        label = new QLabel(Alertas);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 67, 17));
        QFont font;
        font.setPointSize(8);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label_2 = new QLabel(Alertas);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 40, 67, 17));
        label_2->setFont(font);
        label_2->setTextFormat(Qt::AutoText);
        label_3 = new QLabel(Alertas);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 40, 111, 17));
        label_3->setFont(font);
        label_4 = new QLabel(Alertas);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(450, 40, 171, 17));
        label_4->setFont(font);
        label_5 = new QLabel(Alertas);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(890, 40, 201, 17));
        label_5->setFont(font);
        label_6 = new QLabel(Alertas);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(1270, 40, 191, 17));
        label_6->setFont(font);
        Alert = new QLabel(Alertas);
        Alert->setObjectName(QStringLiteral("Alert"));
        Alert->setGeometry(QRect(60, 10, 981, 21));
        BarraHerramientas = new QFrame(centralWidget);
        BarraHerramientas->setObjectName(QStringLiteral("BarraHerramientas"));
        BarraHerramientas->setGeometry(QRect(9, 89, 1591, 211));
        BarraHerramientas->setFrameShape(QFrame::StyledPanel);
        BarraHerramientas->setFrameShadow(QFrame::Raised);
        frecuencia = new QSlider(BarraHerramientas);
        frecuencia->setObjectName(QStringLiteral("frecuencia"));
        frecuencia->setGeometry(QRect(20, 40, 160, 29));
        frecuencia->setOrientation(Qt::Horizontal);
        label_7 = new QLabel(BarraHerramientas);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(60, 20, 91, 17));
        label_7->setFont(font);
        ControlRec = new QFrame(BarraHerramientas);
        ControlRec->setObjectName(QStringLiteral("ControlRec"));
        ControlRec->setGeometry(QRect(10, 119, 131, 81));
        ControlRec->setFrameShape(QFrame::StyledPanel);
        ControlRec->setFrameShadow(QFrame::Raised);
        rec = new QPushButton(ControlRec);
        rec->setObjectName(QStringLiteral("rec"));
        rec->setGeometry(QRect(10, 30, 51, 27));
        play = new QPushButton(ControlRec);
        play->setObjectName(QStringLiteral("play"));
        play->setGeometry(QRect(70, 30, 51, 27));
        ControlVolumen = new QFrame(BarraHerramientas);
        ControlVolumen->setObjectName(QStringLiteral("ControlVolumen"));
        ControlVolumen->setGeometry(QRect(150, 120, 131, 81));
        ControlVolumen->setFrameShape(QFrame::StyledPanel);
        ControlVolumen->setFrameShadow(QFrame::Raised);
        vol_dw = new QPushButton(ControlVolumen);
        vol_dw->setObjectName(QStringLiteral("vol_dw"));
        vol_dw->setGeometry(QRect(10, 30, 51, 27));
        vol_up = new QPushButton(ControlVolumen);
        vol_up->setObjectName(QStringLiteral("vol_up"));
        vol_up->setGeometry(QRect(70, 30, 51, 27));
        label_19 = new QLabel(ControlVolumen);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(30, 10, 67, 17));
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setWeight(50);
        label_19->setFont(font1);
        bw = new QDoubleSpinBox(BarraHerramientas);
        bw->setObjectName(QStringLiteral("bw"));
        bw->setGeometry(QRect(200, 40, 91, 41));
        label_8 = new QLabel(BarraHerramientas);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(210, 10, 81, 17));
        label_8->setFont(font);
        it = new QDoubleSpinBox(BarraHerramientas);
        it->setObjectName(QStringLiteral("it"));
        it->setGeometry(QRect(310, 40, 91, 41));
        dt = new QDoubleSpinBox(BarraHerramientas);
        dt->setObjectName(QStringLiteral("dt"));
        dt->setGeometry(QRect(420, 40, 91, 41));
        label_11 = new QLabel(BarraHerramientas);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(290, 10, 121, 17));
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(BarraHerramientas);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(420, 10, 91, 20));
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignCenter);
        PulsoActivo = new QFrame(BarraHerramientas);
        PulsoActivo->setObjectName(QStringLiteral("PulsoActivo"));
        PulsoActivo->setGeometry(QRect(520, 10, 531, 91));
        PulsoActivo->setFrameShape(QFrame::StyledPanel);
        PulsoActivo->setFrameShadow(QFrame::Raised);
        cw = new QPushButton(PulsoActivo);
        cw->setObjectName(QStringLiteral("cw"));
        cw->setGeometry(QRect(10, 40, 81, 41));
        frecP = new QSpinBox(PulsoActivo);
        frecP->setObjectName(QStringLiteral("frecP"));
        frecP->setGeometry(QRect(100, 40, 91, 41));
        frecP->setMinimum(5000);
        frecP->setMaximum(16000);
        frecP->setSingleStep(1000);
        nP = new QSpinBox(PulsoActivo);
        nP->setObjectName(QStringLiteral("nP"));
        nP->setGeometry(QRect(207, 40, 91, 41));
        nP->setMinimum(1);
        nP->setMaximum(65535);
        nHidrof = new QSpinBox(PulsoActivo);
        nHidrof->setObjectName(QStringLiteral("nHidrof"));
        nHidrof->setGeometry(QRect(322, 40, 91, 41));
        nHidrof->setMinimum(1);
        nHidrof->setMaximum(16);
        nHidrof->setSingleStep(2);
        nHidrof->setDisplayIntegerBase(10);
        ran_det = new QDoubleSpinBox(PulsoActivo);
        ran_det->setObjectName(QStringLiteral("ran_det"));
        ran_det->setGeometry(QRect(432, 40, 91, 41));
        label_13 = new QLabel(PulsoActivo);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 20, 91, 20));
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignCenter);
        label_14 = new QLabel(PulsoActivo);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(100, 20, 91, 20));
        label_14->setFont(font);
        label_14->setAlignment(Qt::AlignCenter);
        label_15 = new QLabel(PulsoActivo);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(206, 20, 91, 17));
        label_15->setFont(font);
        label_15->setAlignment(Qt::AlignCenter);
        label_16 = new QLabel(PulsoActivo);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(306, 20, 121, 20));
        label_16->setFont(font);
        label_16->setAlignment(Qt::AlignCenter);
        label_17 = new QLabel(PulsoActivo);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(430, 10, 91, 31));
        label_17->setFont(font);
        tipo_norte = new QPushButton(BarraHerramientas);
        tipo_norte->setObjectName(QStringLiteral("tipo_norte"));
        tipo_norte->setGeometry(QRect(1080, 56, 99, 51));
        tipo_norte->setFocusPolicy(Qt::WheelFocus);
        label_18 = new QLabel(BarraHerramientas);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(1080, 20, 101, 41));
        ControlOrigen = new QGroupBox(BarraHerramientas);
        ControlOrigen->setObjectName(QStringLiteral("ControlOrigen"));
        ControlOrigen->setGeometry(QRect(1200, 9, 81, 101));
        origenBlanco = new QRadioButton(ControlOrigen);
        origenBlanco->setObjectName(QStringLiteral("origenBlanco"));
        origenBlanco->setGeometry(QRect(10, 70, 81, 22));
        origenBlanco->setFont(font1);
        origenSensor = new QRadioButton(ControlOrigen);
        origenSensor->setObjectName(QStringLiteral("origenSensor"));
        origenSensor->setGeometry(QRect(10, 50, 81, 22));
        origenSensor->setFont(font1);
        origenBuque = new QRadioButton(ControlOrigen);
        origenBuque->setObjectName(QStringLiteral("origenBuque"));
        origenBuque->setGeometry(QRect(10, 30, 81, 22));
        origenBuque->setFont(font1);
        ControlBlancos = new QFrame(BarraHerramientas);
        ControlBlancos->setObjectName(QStringLiteral("ControlBlancos"));
        ControlBlancos->setGeometry(QRect(290, 120, 221, 80));
        ControlBlancos->setFrameShape(QFrame::StyledPanel);
        ControlBlancos->setFrameShadow(QFrame::Raised);
        label_20 = new QLabel(ControlBlancos);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(60, 10, 67, 17));
        et_blancos = new QPushButton(ControlBlancos);
        et_blancos->setObjectName(QStringLiteral("et_blancos"));
        et_blancos->setGeometry(QRect(10, 40, 99, 27));
        QFont font2;
        font2.setPointSize(8);
        et_blancos->setFont(font2);
        clas_blancos = new QComboBox(ControlBlancos);
        clas_blancos->setObjectName(QStringLiteral("clas_blancos"));
        clas_blancos->setGeometry(QRect(114, 40, 101, 27));
        clas_blancos->setFont(font2);
        edo_mar = new QSpinBox(BarraHerramientas);
        edo_mar->setObjectName(QStringLiteral("edo_mar"));
        edo_mar->setGeometry(QRect(530, 160, 48, 41));
        label_21 = new QLabel(BarraHerramientas);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(520, 120, 67, 31));
        prob_falsa = new QDoubleSpinBox(BarraHerramientas);
        prob_falsa->setObjectName(QStringLiteral("prob_falsa"));
        prob_falsa->setGeometry(QRect(718, 160, 69, 41));
        label_22 = new QLabel(BarraHerramientas);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(704, 120, 91, 41));
        prob_deteccion = new QDoubleSpinBox(BarraHerramientas);
        prob_deteccion->setObjectName(QStringLiteral("prob_deteccion"));
        prob_deteccion->setGeometry(QRect(815, 160, 69, 41));
        label_23 = new QLabel(BarraHerramientas);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(801, 120, 91, 41));
        label_24 = new QLabel(BarraHerramientas);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(893, 120, 91, 41));
        escala_ppi = new QDoubleSpinBox(BarraHerramientas);
        escala_ppi->setObjectName(QStringLiteral("escala_ppi"));
        escala_ppi->setGeometry(QRect(907, 160, 69, 41));
        label_25 = new QLabel(BarraHerramientas);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(983, 117, 91, 41));
        escala_desp = new QDoubleSpinBox(BarraHerramientas);
        escala_desp->setObjectName(QStringLiteral("escala_desp"));
        escala_desp->setGeometry(QRect(997, 161, 69, 41));
        label_26 = new QLabel(BarraHerramientas);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(1082, 137, 81, 21));
        dial = new QDial(BarraHerramientas);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setGeometry(QRect(1410, 0, 181, 211));
        dial->setMinimum(-179);
        dial->setMaximum(180);
        dial->setOrientation(Qt::Horizontal);
        ControlEmisor = new QGroupBox(BarraHerramientas);
        ControlEmisor->setObjectName(QStringLiteral("ControlEmisor"));
        ControlEmisor->setGeometry(QRect(1290, 10, 120, 101));
        origenManual = new QRadioButton(ControlEmisor);
        origenManual->setObjectName(QStringLiteral("origenManual"));
        origenManual->setGeometry(QRect(10, 70, 81, 22));
        origenManual->setFont(font1);
        origenAuto = new QRadioButton(ControlEmisor);
        origenAuto->setObjectName(QStringLiteral("origenAuto"));
        origenAuto->setGeometry(QRect(10, 50, 101, 22));
        origenAuto->setFont(font1);
        origenOmni = new QRadioButton(ControlEmisor);
        origenOmni->setObjectName(QStringLiteral("origenOmni"));
        origenOmni->setGeometry(QRect(10, 30, 121, 22));
        origenOmni->setFont(font1);
        btOpenPort = new QPushButton(BarraHerramientas);
        btOpenPort->setObjectName(QStringLiteral("btOpenPort"));
        btOpenPort->setGeometry(QRect(1200, 110, 61, 41));
        lf = new QPushButton(BarraHerramientas);
        lf->setObjectName(QStringLiteral("lf"));
        lf->setGeometry(QRect(1270, 110, 61, 41));
        btr = new QPushButton(BarraHerramientas);
        btr->setObjectName(QStringLiteral("btr"));
        btr->setGeometry(QRect(1200, 160, 61, 41));
        ppi = new QPushButton(BarraHerramientas);
        ppi->setObjectName(QStringLiteral("ppi"));
        ppi->setGeometry(QRect(1270, 160, 61, 41));
        radio_boya = new QDoubleSpinBox(BarraHerramientas);
        radio_boya->setObjectName(QStringLiteral("radio_boya"));
        radio_boya->setGeometry(QRect(613, 160, 69, 41));
        label_58 = new QLabel(BarraHerramientas);
        label_58->setObjectName(QStringLiteral("label_58"));
        label_58->setGeometry(QRect(593, 120, 101, 41));
        gan_sen = new QSpinBox(BarraHerramientas);
        gan_sen->setObjectName(QStringLiteral("gan_sen"));
        gan_sen->setGeometry(QRect(1092, 161, 61, 41));
        gan_sen->setMinimum(3);
        gan_sen->setMaximum(40);
        ang = new QSpinBox(BarraHerramientas);
        ang->setObjectName(QStringLiteral("ang"));
        ang->setGeometry(QRect(1350, 160, 71, 41));
        ang->setMinimum(-179);
        ang->setMaximum(359);
        ang->setValue(0);
        label_ang = new QLabel(BarraHerramientas);
        label_ang->setObjectName(QStringLiteral("label_ang"));
        label_ang->setGeometry(QRect(1350, 140, 67, 17));
        Logos = new QFrame(centralWidget);
        Logos->setObjectName(QStringLiteral("Logos"));
        Logos->setGeometry(QRect(1609, 10, 301, 71));
        Logos->setFrameShape(QFrame::StyledPanel);
        Logos->setFrameShadow(QFrame::Raised);
        label_27 = new QLabel(Logos);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(96, 10, 121, 51));
        label_9 = new QLabel(Logos);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(6, 0, 81, 71));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/resource/logo.png")));
        label_9->setScaledContents(true);
        label_10 = new QLabel(Logos);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(230, 0, 67, 71));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/resource/siviso.jpg")));
        label_10->setScaledContents(true);
        CompGraf = new QFrame(centralWidget);
        CompGraf->setObjectName(QStringLiteral("CompGraf"));
        CompGraf->setGeometry(QRect(10, 310, 791, 701));
        CompGraf->setFrameShape(QFrame::StyledPanel);
        CompGraf->setFrameShadow(QFrame::Raised);
        setColorDw = new QSlider(CompGraf);
        setColorDw->setObjectName(QStringLiteral("setColorDw"));
        setColorDw->setGeometry(QRect(0, 359, 29, 331));
        setColorDw->setMaximum(255);
        setColorDw->setOrientation(Qt::Vertical);
        setColorUp = new QSlider(CompGraf);
        setColorUp->setObjectName(QStringLiteral("setColorUp"));
        setColorUp->setGeometry(QRect(0, 10, 29, 331));
        setColorUp->setMaximum(255);
        setColorUp->setValue(255);
        setColorUp->setOrientation(Qt::Vertical);
        Desptact = new QFrame(centralWidget);
        Desptact->setObjectName(QStringLiteral("Desptact"));
        Desptact->setGeometry(QRect(810, 310, 791, 701));
        Desptact->setFrameShape(QFrame::StyledPanel);
        Desptact->setFrameShadow(QFrame::Raised);
        view = new QPlainTextEdit(Desptact);
        view->setObjectName(QStringLiteral("view"));
        view->setGeometry(QRect(10, 10, 381, 531));
        textTestGrap = new QPlainTextEdit(Desptact);
        textTestGrap->setObjectName(QStringLiteral("textTestGrap"));
        textTestGrap->setGeometry(QRect(400, 10, 381, 531));
        save = new QPushButton(Desptact);
        save->setObjectName(QStringLiteral("save"));
        save->setGeometry(QRect(20, 660, 81, 27));
        startCom = new QPushButton(Desptact);
        startCom->setObjectName(QStringLiteral("startCom"));
        startCom->setGeometry(QRect(20, 595, 81, 27));
        sensor0 = new QPushButton(Desptact);
        sensor0->setObjectName(QStringLiteral("sensor0"));
        sensor0->setGeometry(QRect(20, 626, 81, 31));
        openJars = new QPushButton(Desptact);
        openJars->setObjectName(QStringLiteral("openJars"));
        openJars->setGeometry(QRect(20, 560, 81, 31));
        QFont font3;
        font3.setPointSize(12);
        openJars->setFont(font3);
        closeJars = new QPushButton(Desptact);
        closeJars->setObjectName(QStringLiteral("closeJars"));
        closeJars->setGeometry(QRect(110, 560, 81, 31));
        closeJars->setFont(font3);
        sensor1 = new QPushButton(Desptact);
        sensor1->setObjectName(QStringLiteral("sensor1"));
        sensor1->setGeometry(QRect(110, 626, 81, 31));
        endCom = new QPushButton(Desptact);
        endCom->setObjectName(QStringLiteral("endCom"));
        endCom->setGeometry(QRect(110, 596, 81, 27));
        textSend = new QLineEdit(Desptact);
        textSend->setObjectName(QStringLiteral("textSend"));
        textSend->setGeometry(QRect(402, 550, 371, 27));
        send = new QPushButton(Desptact);
        send->setObjectName(QStringLiteral("send"));
        send->setGeometry(QRect(698, 580, 71, 27));
        infoSignal = new QPushButton(Desptact);
        infoSignal->setObjectName(QStringLiteral("infoSignal"));
        infoSignal->setGeometry(QRect(110, 660, 81, 27));
        MedioAmbiente = new QFrame(centralWidget);
        MedioAmbiente->setObjectName(QStringLiteral("MedioAmbiente"));
        MedioAmbiente->setGeometry(QRect(1610, 710, 301, 301));
        MedioAmbiente->setFrameShape(QFrame::StyledPanel);
        MedioAmbiente->setFrameShadow(QFrame::Raised);
        label_49 = new QLabel(MedioAmbiente);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setGeometry(QRect(30, 195, 111, 20));
        label_49->setFont(font2);
        label_50 = new QLabel(MedioAmbiente);
        label_50->setObjectName(QStringLiteral("label_50"));
        label_50->setGeometry(QRect(30, 125, 121, 20));
        label_50->setFont(font2);
        label_52 = new QLabel(MedioAmbiente);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setGeometry(QRect(30, 261, 111, 20));
        label_52->setFont(font2);
        label_53 = new QLabel(MedioAmbiente);
        label_53->setObjectName(QStringLiteral("label_53"));
        label_53->setGeometry(QRect(30, 90, 71, 17));
        label_53->setFont(font2);
        label_54 = new QLabel(MedioAmbiente);
        label_54->setObjectName(QStringLiteral("label_54"));
        label_54->setGeometry(QRect(30, 50, 101, 17));
        label_54->setFont(font2);
        label_55 = new QLabel(MedioAmbiente);
        label_55->setObjectName(QStringLiteral("label_55"));
        label_55->setGeometry(QRect(30, 160, 111, 20));
        label_55->setFont(font2);
        label_56 = new QLabel(MedioAmbiente);
        label_56->setObjectName(QStringLiteral("label_56"));
        label_56->setGeometry(QRect(120, 10, 101, 20));
        label_57 = new QLabel(MedioAmbiente);
        label_57->setObjectName(QStringLiteral("label_57"));
        label_57->setGeometry(QRect(30, 228, 101, 20));
        label_57->setFont(font2);
        toolButton = new QToolButton(centralWidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(1570, 980, 24, 25));
        Plataforma = new QFrame(centralWidget);
        Plataforma->setObjectName(QStringLiteral("Plataforma"));
        Plataforma->setGeometry(QRect(1610, 90, 301, 381));
        Plataforma->setFrameShape(QFrame::StyledPanel);
        Plataforma->setFrameShadow(QFrame::Raised);
        label_28 = new QLabel(Plataforma);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(110, 10, 101, 20));
        label_29 = new QLabel(Plataforma);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(20, 30, 67, 17));
        label_29->setFont(font2);
        label_30 = new QLabel(Plataforma);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(20, 70, 71, 17));
        label_30->setFont(font2);
        label_31 = new QLabel(Plataforma);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(20, 110, 67, 17));
        label_31->setFont(font2);
        label_32 = new QLabel(Plataforma);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(20, 150, 67, 17));
        label_32->setFont(font2);
        label_33 = new QLabel(Plataforma);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(20, 190, 111, 17));
        label_33->setFont(font2);
        label_34 = new QLabel(Plataforma);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(20, 230, 67, 17));
        label_34->setFont(font2);
        label_35 = new QLabel(Plataforma);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(20, 270, 67, 17));
        label_35->setFont(font2);
        label_36 = new QLabel(Plataforma);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(20, 310, 91, 17));
        label_36->setFont(font2);
        label_37 = new QLabel(Plataforma);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(20, 350, 101, 17));
        label_37->setFont(font2);
        label_38 = new QLabel(Plataforma);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setGeometry(QRect(170, 110, 67, 17));
        label_38->setFont(font2);
        label_39 = new QLabel(Plataforma);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setGeometry(QRect(170, 150, 67, 17));
        label_39->setFont(font2);
        Blancos = new QFrame(centralWidget);
        Blancos->setObjectName(QStringLiteral("Blancos"));
        Blancos->setGeometry(QRect(1610, 480, 301, 221));
        Blancos->setFrameShape(QFrame::StyledPanel);
        Blancos->setFrameShadow(QFrame::Raised);
        label_40 = new QLabel(Blancos);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setGeometry(QRect(30, 180, 67, 17));
        label_40->setFont(font2);
        label_41 = new QLabel(Blancos);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setGeometry(QRect(30, 60, 91, 17));
        label_41->setFont(font2);
        label_42 = new QLabel(Blancos);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setGeometry(QRect(30, 150, 67, 17));
        label_42->setFont(font2);
        label_43 = new QLabel(Blancos);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setGeometry(QRect(180, 150, 67, 17));
        label_43->setFont(font2);
        label_44 = new QLabel(Blancos);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setGeometry(QRect(30, 30, 67, 17));
        label_44->setFont(font2);
        label_45 = new QLabel(Blancos);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setGeometry(QRect(120, 10, 101, 20));
        label_46 = new QLabel(Blancos);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setGeometry(QRect(180, 180, 67, 17));
        label_46->setFont(font2);
        label_47 = new QLabel(Blancos);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setGeometry(QRect(30, 90, 91, 17));
        label_47->setFont(font2);
        label_48 = new QLabel(Blancos);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setGeometry(QRect(30, 120, 121, 17));
        label_48->setFont(font2);
        siviso->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(siviso);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1920, 25));
        siviso->setMenuBar(menuBar);
        mainToolBar = new QToolBar(siviso);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        siviso->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(siviso);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        siviso->setStatusBar(statusBar);

        retranslateUi(siviso);

        QMetaObject::connectSlotsByName(siviso);
    } // setupUi

    void retranslateUi(QMainWindow *siviso)
    {
        siviso->setWindowTitle(QApplication::translate("siviso", "siviso", 0));
        label->setText(QApplication::translate("siviso", "Alertas", 0));
        label_2->setText(QApplication::translate("siviso", "id Alerta:", 0));
        label_3->setText(QApplication::translate("siviso", "Nombre Alerta:", 0));
        label_4->setText(QApplication::translate("siviso", "Parametro de la Alerta:", 0));
        label_5->setText(QApplication::translate("siviso", "Probabilidad de falsa alarma:", 0));
        label_6->setText(QApplication::translate("siviso", "Probabilidad de detecci\303\263n:", 0));
        Alert->setText(QApplication::translate("siviso", "<html><head/><body><p><br/></p></body></html>", 0));
        label_7->setText(QApplication::translate("siviso", "Frecuiencia", 0));
        rec->setText(QApplication::translate("siviso", "Rec", 0));
        play->setText(QApplication::translate("siviso", "Play", 0));
        vol_dw->setText(QApplication::translate("siviso", "-", 0));
        vol_up->setText(QApplication::translate("siviso", "+", 0));
        label_19->setText(QApplication::translate("siviso", "<html><head/><body><p align=\"center\">volumen</p></body></html>", 0));
        label_8->setText(QApplication::translate("siviso", "Bandwidth", 0));
        label_11->setText(QApplication::translate("siviso", "Integration time", 0));
        label_12->setText(QApplication::translate("siviso", "Display time", 0));
        cw->setText(QApplication::translate("siviso", "CW", 0));
        label_13->setText(QApplication::translate("siviso", "Enviar Pulso", 0));
        label_14->setText(QApplication::translate("siviso", "Frecuencia", 0));
        label_15->setText(QApplication::translate("siviso", "Numero de Pulsos", 0));
        label_16->setText(QApplication::translate("siviso", "<html><head/><body><p align=\"center\">Numero de Hidrofonos</p></body></html>", 0));
        label_17->setText(QApplication::translate("siviso", "<html><head/><body><p align=\"center\">Rango de <br/>detecci\303\263n</p></body></html>", 0));
        tipo_norte->setText(QApplication::translate("siviso", "Norte \n"
"Verdadero", 0));
        label_18->setText(QApplication::translate("siviso", "<html><head/><body><p align=\"center\"><span style=\" font-size:8pt;\">altertar Norte<br/>Verdadero/Relativo </span></p></body></html>", 0));
        ControlOrigen->setTitle(QApplication::translate("siviso", "Origen", 0));
        origenBlanco->setText(QApplication::translate("siviso", "Blanco", 0));
        origenSensor->setText(QApplication::translate("siviso", "Sensor", 0));
        origenBuque->setText(QApplication::translate("siviso", "Buque", 0));
        label_20->setText(QApplication::translate("siviso", "<html><head/><body><p align=\"center\"><span style=\" font-size:8pt;\">Blancos</span></p></body></html>", 0));
        et_blancos->setText(QApplication::translate("siviso", "Etiquetar blanco", 0));
        clas_blancos->clear();
        clas_blancos->insertItems(0, QStringList()
         << QApplication::translate("siviso", "Desconocido", 0)
         << QApplication::translate("siviso", "Amigo", 0)
         << QApplication::translate("siviso", "Neutral", 0)
         << QApplication::translate("siviso", "Enemigo", 0)
        );
        label_21->setText(QApplication::translate("siviso", "<html><head/><body><p align=\"center\"><span style=\" font-size:8pt;\">Estado<br/>de la mar</span></p></body></html>", 0));
        label_22->setText(QApplication::translate("siviso", "<html><head/><body><p align=\"center\"><span style=\" font-size:8pt;\">Probabilidad<br/>de falsa alarma</span></p></body></html>", 0));
        label_23->setText(QApplication::translate("siviso", "<html><head/><body><p align=\"center\"><span style=\" font-size:8pt;\">Probabilidad<br/>de detecci\303\263n</span></p></body></html>", 0));
        label_24->setText(QApplication::translate("siviso", "<html><head/><body><p align=\"center\"><span style=\" font-size:8pt;\">Escala<br/>PPI</span></p></body></html>", 0));
        label_25->setText(QApplication::translate("siviso", "<html><head/><body><p align=\"center\"><span style=\" font-size:8pt;\">Escala<br/>despliegue<br/>t\303\241ctico</span></p></body></html>", 0));
        label_26->setText(QApplication::translate("siviso", "<html><head/><body><p align=\"center\"><span style=\" font-size:8pt;\">Ganancia</span></p></body></html>", 0));
        ControlEmisor->setTitle(QApplication::translate("siviso", "Origen", 0));
        origenManual->setText(QApplication::translate("siviso", "Manual", 0));
        origenAuto->setText(QApplication::translate("siviso", "Automatico", 0));
        origenOmni->setText(QApplication::translate("siviso", "Omnidireccional", 0));
        btOpenPort->setText(QApplication::translate("siviso", "Open", 0));
        lf->setText(QApplication::translate("siviso", "LF", 0));
        btr->setText(QApplication::translate("siviso", "BTR", 0));
        ppi->setText(QApplication::translate("siviso", "PPI", 0));
        label_58->setText(QApplication::translate("siviso", "<html><head/><body><p align=\"center\"><span style=\" font-size:8pt;\">Radio de seguridad<br/>de la Boya</span></p></body></html>", 0));
        label_ang->setText(QApplication::translate("siviso", "<html><head/><body><p align=\"center\">Angulo</p></body></html>", 0));
        label_27->setText(QApplication::translate("siviso", "<html><head/><body><p align=\"center\"><span style=\" font-size:8pt;\">SIVISO</span></p><p align=\"center\"><span style=\" font-size:8pt;\">ARMADA DE M\303\211XICO</span></p></body></html>", 0));
        label_9->setText(QString());
        label_10->setText(QString());
        save->setText(QApplication::translate("siviso", "Guardar", 0));
        startCom->setText(QApplication::translate("siviso", "start com", 0));
        sensor0->setText(QApplication::translate("siviso", "sensor P", 0));
        openJars->setText(QApplication::translate("siviso", "openJars", 0));
        closeJars->setText(QApplication::translate("siviso", "close Jars", 0));
        sensor1->setText(QApplication::translate("siviso", "sensor A", 0));
        endCom->setText(QApplication::translate("siviso", "end com", 0));
        send->setText(QApplication::translate("siviso", "Enviar", 0));
        infoSignal->setText(QApplication::translate("siviso", "info signal", 0));
        label_49->setText(QApplication::translate("siviso", "Direcci\303\263n del viento:", 0));
        label_50->setText(QApplication::translate("siviso", "Profundidad del fondo:", 0));
        label_52->setText(QApplication::translate("siviso", "Velocidad del sonido:", 0));
        label_53->setText(QApplication::translate("siviso", "Tipo fondo:", 0));
        label_54->setText(QApplication::translate("siviso", "Salinidad del agua:", 0));
        label_55->setText(QApplication::translate("siviso", "Audio ambiente:", 0));
        label_56->setText(QApplication::translate("siviso", "<html><head/><body><p align=\"center\"><span style=\" font-size:8pt;\">Medio ambiente</span></p></body></html>", 0));
        label_57->setText(QApplication::translate("siviso", "Fuerza del viento:", 0));
        toolButton->setText(QApplication::translate("siviso", "...", 0));
        label_28->setText(QApplication::translate("siviso", "<html><head/><body><p align=\"center\"><span style=\" font-size:8pt;\">Plataforma</span></p></body></html>", 0));
        label_29->setText(QApplication::translate("siviso", "Nombre:", 0));
        label_30->setText(QApplication::translate("siviso", "Profundidad:", 0));
        label_31->setText(QApplication::translate("siviso", "Latitud:", 0));
        label_32->setText(QApplication::translate("siviso", "COG:", 0));
        label_33->setText(QApplication::translate("siviso", "Orientaci\303\263n relativa:", 0));
        label_34->setText(QApplication::translate("siviso", "cable total:", 0));
        label_35->setText(QApplication::translate("siviso", "cable usado:", 0));
        label_36->setText(QApplication::translate("siviso", "cable disponible:", 0));
        label_37->setText(QApplication::translate("siviso", "temsion del cable:", 0));
        label_38->setText(QApplication::translate("siviso", "Longitud:", 0));
        label_39->setText(QApplication::translate("siviso", "SOG:", 0));
        label_40->setText(QApplication::translate("siviso", "COG:", 0));
        label_41->setText(QApplication::translate("siviso", "Etiqueta blanco:", 0));
        label_42->setText(QApplication::translate("siviso", "Latitud:", 0));
        label_43->setText(QApplication::translate("siviso", "Longitud:", 0));
        label_44->setText(QApplication::translate("siviso", "id blanco:", 0));
        label_45->setText(QApplication::translate("siviso", "<html><head/><body><p align=\"center\"><span style=\" font-size:8pt;\">Blancos</span></p></body></html>", 0));
        label_46->setText(QApplication::translate("siviso", "SOG:", 0));
        label_47->setText(QApplication::translate("siviso", "Tipo blanco:", 0));
        label_48->setText(QApplication::translate("siviso", "Clasificaci\303\263n de blanco:", 0));
    } // retranslateUi

};

namespace Ui {
    class siviso: public Ui_siviso {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIVISO_H
