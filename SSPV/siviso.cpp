#include "siviso.h"
#include "ui_siviso.h"

#include <QFile>
#include <QDebug>
#include <QtCore>
#include <QtGui>

//#define localdir QHostAddress("192.168.1.178")        //de donde nos comunicamos
#define puertolocal 5003

SIVISO::SIVISO(QWidget *parent) :
    QMainWindow(parent),
     ui( new Ui::siviso)
{
    ui->setupUi(this);

    myppi = new PPI();
    mysignal = new Signal();
    proceso1 = new QProcess(this);
    proceso2 = new QProcess(this);
    proceso3 = new QProcess(this);
    numCatchSend = 0;
    catchSend = "";
    compGraf = "";



    udpsocket = new QUdpSocket(this);
    //udpsocket->bind(localdir,puertolocal);
    udpsocket->bind(QHostAddress::LocalHost, puertolocal);
    //serialPortDB9 = new QSerialPort();
    //serialPortUSB = new QSerialPort();
    connect(udpsocket,SIGNAL(readyRead()),this,SLOT(leerSocket()));
    //connect(serialPortDB9, SIGNAL(readyRead()),this,SLOT(leerSerialDB9()));
    //connect(serialPortUSB, SIGNAL(readyRead()),this,SLOT(leerSerialUSB()));

    direccionSSF = "192.168.1.177";                   //direccion del SPP
    puertoSSF = 8888;                                 //puerto del SPP
    //direccionApp = "192.168.1.178";                   //direccion que usaran las aplicaciones
    direccionApp = "127.0.0.1";                   //direccion que usaran las aplicaciones
    //udpsocket->writeDatagram(ui->view->text().toLatin1(),direccionPar,puertoPar); //visualiza la direcion IP y puerto del que envia
    //pSocket->connectToHost("192.168.1.10",6001);

    ui->frecuencia->setValue(mysignal->get_frec());
    ui->bw->setValue(mysignal->get_bw());
    ui->it->setValue(mysignal->get_it());
    ui->dt->setValue(mysignal->get_dt());
    ui->gan_sen->setValue(mysignal->get_ganancia_sensor());
    ui->dt->setValue(mysignal->get_dt());
    ui->prob_falsa->setValue(mysignal->get_prob_falsa());
    ui->prob_deteccion->setValue(mysignal->get_prob_deteccion());
    ui->edo_mar->setValue(mysignal->get_edo_mar());
    ui->origenOmni->setChecked(true);
    ui->dial->setDisabled(true);
    ui->ang->setVisible(false);
    ui->nHidrof->setValue(mysignal->get_nHidrof());
    ui->nHidrof->setDisabled(true);
    ui->label_ang->setVisible(false);
    ui->frecP->setValue(mysignal->get_frecP());
    ui->nP->setValue(mysignal->get_nP());

    bToolButton=false;
    ui->textTestGrap->setVisible(false);
    ui->view->setVisible(false);
    ui->save->setVisible(false);
    ui->startCom->setVisible(false);
    ui->endCom->setVisible(false);
    ui->sensor0->setVisible(false);
    ui->sensor1->setVisible(false);
    ui->closeJars->setVisible(false);
    ui->openJars->setVisible(false);
    ui->textSend->setVisible(false);
    ui->send->setVisible(false);
    ui->infoSignal->setVisible(false);

    //serialPortUSB->write("GAIN 3\n");

    ui->frecuencia->setDisabled(true);
    ui->bw->setDisabled(true);
    ui->it->setDisabled(true);
    ui->dt->setDisabled(true);
    ui->ran_det->setDisabled(true);
    ui->tipo_norte->setDisabled(true);
    ui->origenBuque->setDisabled(true);
    ui->origenSensor->setDisabled(true);
    ui->origenBlanco->setDisabled(true);
    ui->origenAuto->setDisabled(true);
    //ui->rec->setDisabled(true);
    //ui->play->setDisabled(true);
    ui->et_blancos->setDisabled(true);
    ui->clas_blancos->setDisabled(true);
    ui->edo_mar->setDisabled(true);
    ui->prob_falsa->setDisabled(true);
    ui->prob_deteccion->setDisabled(true);
    ui->escala_ppi->setDisabled(true);
    ui->escala_desp->setDisabled(true);

    QFile file1("resource/colorUp.txt");
    if(file1.open(QIODevice::WriteOnly)){
        QTextStream stream(&file1);
        stream<<"255";
    } else {
        qDebug();
    }
    file1.close();
    colorUp = 255;

    QFile file2("resource/colorDw.txt");
    if(file2.open(QIODevice::WriteOnly)){
        QTextStream stream(&file2);
        stream<<"0";
    } else {
        qDebug();
    }
    file2.close();
    colorDw = 0;

    /*thread()->sleep(1);
    proceso5->startDetached("java -jar ConexionPV.jar");
    thread()->sleep(1);
    proceso1->startDetached("java -jar Lofar.jar");
    thread()->sleep(1);
    proceso2->startDetached("java -jar BTR.jar");
    thread()->sleep(1);
    /*proceso3->startDetached("java -jar PPI.jar");
    thread()->sleep(1);*/

    proceso3->startDetached("sudo ethtool -s eth0 speed 100 duplex  full");



//This use for TEST the class DBasePostgreSQL by Misael M Del Valle -- Status: Functional
//    myDB = new DBasePostgreSQL("172.16.1.3","PruebaQT",5432,"Administrador","nautilus");
//    myDB->executeSql("Select * from usuarios");

//Config Widget TEST -- Status: In construction and Functional
//   wConfig *w = new wConfig();
//   w->show();



}

SIVISO::~SIVISO()
{
    QString s = "EXIT";
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoBTR);
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoLF);
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoPPI);
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoComPV);

    /*serialPortUSB->write("END COMMUNICATION\n");
    serialPortDB9->close();
    serialPortUSB->close();
    delete serialPortDB9;
    delete serialPortUSB;*/
    delete ui;
    proceso1->close();
    proceso2->close();
    proceso3->close();
    proceso5->close();
}

void SIVISO::changeStyleSheet(int iStyle)
{
    QDir dir;

    if(m_pApplication != NULL)
        {

        //Change directory of the file
        QString strFilePath(dir.absolutePath()+"/");

            if(iStyle == DAY_STYLE)
                strFilePath.append("siviso_day.css");

            if(iStyle == DUSK_STYLE)
                strFilePath.append("siviso_dusk.css");

            if(iStyle == NIGHT_STYLE)
                strFilePath.append("siviso_night.css");

            QFile file(strFilePath);

            if(!file.open( QIODevice::ReadOnly | QIODevice::Text ))
            {
                qDebug() << "SIVISO: Failed to open- Copy the CSS File under the folder build...";
            }
            else
            {
                m_pApplication->setStyleSheet(QString(file.readAll()));
                file.close();
            }
    }
}

void SIVISO::leerSocket()
{
    while(udpsocket->hasPendingDatagrams())
    {
        QByteArray datagram;
        datagram.resize(udpsocket->pendingDatagramSize());
        QHostAddress sender;
        quint16 senderPort;
        udpsocket->readDatagram(datagram.data(),datagram.size(), &sender, &senderPort);
        QString info = datagram.data();
        ui->view->appendPlainText(" port-> " + QString("%1").arg(senderPort));
        ui->view->appendPlainText(info);
        //s = " ";

        QString s;
        if(info == "runPPI"){
            s = "EXIT";
            udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoPPI);
            puertoPPI = senderPort;
            s = "RUN";
            udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoPPI);
        } else if(info == "runBTR"){
            s = "EXIT";
            udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoBTR);
            puertoBTR = senderPort;
            s = "RUN";
            udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoBTR);
        } else if(info == "runLF"){
            s = "EXIT";
            udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoLF);
            puertoLF = senderPort;
            s = "RUN";
            udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoLF);
        } else if(info == "runConxPV"){
            s = "EXIT";
            udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoComPV);
            puertoComPV = senderPort;
            s = "RUN";
            udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoComPV);
        } else if(info == "runREC"){
            deshabilitado(false);
        } else if(info == "PPI OK"){
            deshabilitado(false);
        } else if(info == "PLAY OK"){
            deshabilitado(false);
        } else if(puertoSSF == senderPort){
             udpsocket->writeDatagram(info.toLatin1(),direccionApp,puertoBTR);
             udpsocket->writeDatagram(info.toLatin1(),direccionApp,puertoLF);
        } else if(info == "BTR"){
            //serialPortUSB->write("BTR\n");
        } else if(info == "LOFAR"){
            //serialPortUSB->write("LOFAR\n");
        }
    }
}

void SIVISO::on_tipo_norte_clicked()
{
    //PPI *myppi = new PPI();
    if(myppi->get_tipo_norte())
    {
        ui->tipo_norte->setText("Norte\nRelativo");
        myppi->set_tipo_norte(false);
    }
    else
    {
        ui->tipo_norte->setText("Norte\nVerdadero");
        myppi->set_tipo_norte(true);
    }
}

void SIVISO::on_lf_clicked()
{
    QString s;
    s = "OFF";
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoBTR);
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoPPI);
    s = "ON";
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoLF);
    compGraf="LF";
    s = "RP";
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoLF);

    ui->origenManual->setChecked(true);
    ui->nHidrof->setDisabled(false);
    ui->dial->setDisabled(false);
    ui->ang->setVisible(true);
    ui->label_ang->setVisible(true);
}

void SIVISO::on_btr_clicked()
{
    QString s;
    s = "OFF";
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoLF);
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoPPI);
    s = "ON";
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoBTR);
    compGraf="BTR";
    /*s = "RP";
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoBTR);*/
}


void SIVISO::on_ppi_clicked()
{
    QString s;
    s = "OFF";
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoBTR);
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoLF);
    s = "ON";
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoPPI);
    compGraf="PPI";
    s = "RP";
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoPPI);
}

void SIVISO::on_origen_buque_clicked()
{
    ui->textTestGrap->appendPlainText("se cambio el origen a buque");
}

void SIVISO::on_origen_target_clicked()
{
    ui->textTestGrap->appendPlainText("se cambio el origen a blanco");
}

void SIVISO::on_frecuencia_valueChanged(int value)
{
    mysignal->set_frec(value);

    ui->view->appendPlainText("frec: ");
    QString s = QString::number(value);
    ui->view->appendPlainText(s);
}

void SIVISO::on_bw_valueChanged(double arg1)
{
    mysignal->set_bw(arg1);

    ui->view->appendPlainText("bw: ");
    QString s = QString::number(arg1);
    ui->view->appendPlainText(s);
}

void SIVISO::on_edo_mar_valueChanged(int arg1)
{
    mysignal->set_edo_mar(arg1);

    ui->view->appendPlainText("edo_mar: ");
    QString s = QString::number(arg1);
    ui->view->appendPlainText(s);
}

void SIVISO::on_prob_falsa_valueChanged(double arg1)
{
    mysignal->set_prob_falsa(arg1);

    ui->view->appendPlainText("prob_falsa: ");
    QString s = QString::number(arg1);
    ui->view->appendPlainText(s);
}

void SIVISO::on_prob_deteccion_valueChanged(double arg1)
{
    mysignal->set_prob_deteccion(arg1);

    ui->view->appendPlainText("prob_deteccion: ");
    QString s = QString::number(arg1);
    ui->view->appendPlainText(s);
}

void SIVISO::on_escala_ppi_valueChanged(double arg1)
{
    ui->textTestGrap->appendPlainText("escala PPI: ");
    QString s = QString::number(arg1);
    ui->textTestGrap->appendPlainText(s);
}

void SIVISO::on_escala_despliegue_tactico_valueChanged(double arg1)
{
    ui->textTestGrap->appendPlainText("desp_tact: ");
    QString s = QString::number(arg1);
    ui->textTestGrap->appendPlainText(s);\
}

void SIVISO::on_gan_sen_valueChanged(int arg1)
{
    mysignal->set_ganancia_sensor(arg1);
    QString s = "G";
    if(arg1<10){
        s += "0";
    }
    s += QString::number(arg1);
    ui->view->appendPlainText(s);
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoComPV);
}

void SIVISO::on_it_valueChanged(int arg1)
{
    mysignal->set_it(arg1);

    ui->view->appendPlainText("It: ");
    QString s = QString::number(arg1);
    ui->view->appendPlainText(s);
}

void SIVISO::on_rec_clicked()
{
    QString s;

    s = "OFF";
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoPPI);
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoBTR);
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoLF);
    if(compGraf=="BTR"){
        compGraf = "BAUDIO";
    }else if(compGraf=="LF"){
        compGraf = "LAUDIO";
    }else if(compGraf=="PPI"){
        compGraf = "PAUDIO";
    }else{
        compGraf = "AUDIO";
    }
    s = "REC";
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoComPV);
    deshabilitado(true);
}

void SIVISO::on_play_clicked()
{
    QString s;
    s = "PLAY";
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoComPV);
}

void SIVISO::on_toolButton_clicked()
{
    if(bToolButton){
        bToolButton=false;
        ui->textTestGrap->setVisible(false);
        ui->view->setVisible(false);
        ui->save->setVisible(false);
        ui->startCom->setVisible(false);
        ui->endCom->setVisible(false);
        ui->sensor0->setVisible(false);
        ui->sensor1->setVisible(false);
        ui->closeJars->setVisible(false);
        ui->openJars->setVisible(false);
        ui->textSend->setVisible(false);
        ui->send->setVisible(false);
        ui->infoSignal->setVisible(false);
    }else{
        bToolButton=true;
        ui->textTestGrap->setVisible(true);
        ui->view->setVisible(true);
        ui->save->setVisible(true);
        ui->startCom->setVisible(true);
        ui->endCom->setVisible(true);
        ui->sensor0->setVisible(true);
        ui->sensor1->setVisible(true);
        ui->closeJars->setVisible(true);
        ui->openJars->setVisible(true);
        ui->textSend->setVisible(true);
        ui->send->setVisible(true);
        ui->infoSignal->setVisible(true);
    }
}

void SIVISO::on_save_clicked()
{
    QString s;
    s = "SAVE";
    if(compGraf=="BTR")
        udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoBTR);
    if(compGraf=="LF")
        udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoLF);
    if(compGraf=="PPI")
        udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoPPI);
}

void SIVISO::on_setColorUp_valueChanged(int value)
{
    colorUp = value;
    if(colorUp <= colorDw){
        colorDw = colorUp-1;
        ui->setColorDw->setValue(colorDw);
    }

    QFile file("resource/colorUp.txt");
    if(file.open(QIODevice::WriteOnly)){
        QTextStream stream(&file);
        stream<<value;
    } else {
        qDebug();
    }
    file.close();

    QString s;
    s = "RP";
    if(compGraf=="BTR")
        udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoBTR);
    if(compGraf=="LF")
        udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoLF);
    if(compGraf=="PPI")
        udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoPPI);
}

void SIVISO::on_setColorDw_valueChanged(int value)
{
    colorDw = value;
    if(colorDw >= colorUp){
        colorUp = colorDw+1;
        ui->setColorUp->setValue(colorUp);
    }

    QFile file("resource/colorDw.txt");
    if(file.open(QIODevice::WriteOnly)){
        QTextStream stream(&file);
        stream<<value;
    } else {
        qDebug();
    }
    file.close();

    QString s;
    s = "RP";
    if(compGraf=="BTR")
        udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoBTR);
    if(compGraf=="LF")
        udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoLF);
    if(compGraf=="PPI")
        udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoPPI);
}

void SIVISO::on_frecP_valueChanged(int arg1)
{
    mysignal->set_frecP(arg1);
}

void SIVISO::on_nP_valueChanged(int arg1)
{
    mysignal->set_nP(arg1);
}

void SIVISO::on_nHidrof_valueChanged(int arg1)
{
    if(arg1 == 16)
    {
        ui->origenOmni->setChecked(true);
        ui->nHidrof->setDisabled(true);
        ui->dial->setDisabled(true);
        ui->ang->setVisible(false);
        ui->label_ang->setVisible(false);
        ui->nHidrof->setValue(16);
    }
    if((arg1%2)==0 && arg1!=16)
    {
        ui->nHidrof->setValue(arg1-1);
        mysignal->set_nHidrof(arg1-1);
    } else {
        mysignal->set_nHidrof(arg1);
    }

}

void SIVISO::on_cw_clicked()
{
    deshabilitado(true);
    QString s;
    s = "OFF";
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoBTR);
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoLF);
    s = "ON";
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoPPI);
    compGraf="PPI";
    s = "RP";
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoPPI);
    //s = mysignal->datosPulso();
    //ui->view->appendPlainText(s);
    s = "PULSO";
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoPPI);
}

void SIVISO::on_startCom_clicked()
{
    //serialPortUSB->write("START COMMUNICATION P\n");
    //serialPortUSB->write("START COMMUNICATION A\n");
}

void SIVISO::on_endCom_clicked()
{
    //serialPortUSB->write("END COMMUNICATION\n");
}

void SIVISO::on_sensor0_clicked()
{
    //serialPortUSB->write("SENSORES P\n");
}

void SIVISO::on_sensor1_clicked()
{
    //serialPortUSB->write("SENSORES A\n");
}

void SIVISO::on_closeJars_clicked()
{
    QString s;
    s = "EXIT";
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoBTR);
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoLF);
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoPPI);
}

void SIVISO::on_openJars_clicked()
{
    QString s;
    s = "EXIT";
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoBTR);
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoLF);
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoPPI);

    proceso1->startDetached("java -jar Lofar.jar");
    proceso2->startDetached("java -jar BTR.jar");
    proceso3->startDetached("java -jar PPI.jar");
    //proceso5->startDetached("java -jar ConexionPV.jar");
}


void SIVISO::on_dial_valueChanged(int value)
{
    /*if((value*4.5)!=0){
        value-=(value%4.5);
        ui->dial->setValue(value);
    }*/
    ui->ang->setValue(value);
    /*QString s;
    s = "EXIT";
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoBTR);*/
}

void SIVISO::on_ang_valueChanged(int arg1)
{
    if(arg1<=180)
        ui->dial->setValue(arg1);
    else{
        int n = arg1-360;
        ui->dial->setValue(n);
    }
}

void SIVISO::on_origenOmni_clicked()
{
    //serialPortUSB->write("SET HIDROFONO\n");
    //serialPortUSB->write("5 \n");
    ui->ang->setVisible(false);
    ui->dial->setDisabled(true);
    ui->nHidrof->setDisabled(true);
    ui->nHidrof->setValue(16);
    ui->label_ang->setVisible(false);
    QString s;
    s = "M_OFF";
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoBTR);

}

void SIVISO::on_origenManual_clicked()
{
    //serialPortUSB->write("SET HIDROFONO\n");
    //serialPortUSB->write("0 \n");
    ui->ang->setVisible(true);
    ui->dial->setDisabled(false);
    ui->nHidrof->setDisabled(false);
    ui->nHidrof->setValue(15);
    ui->label_ang->setVisible(true);
    QString s;
    s = "M_ON";
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoBTR);
}

void SIVISO::on_dial_sliderReleased()
{
    //serialPortUSB->write("SET ANGLE A\n");
    ui->textTestGrap->appendPlainText("SET ANGLE A\n");
    int n = ui->ang->value();
    QString s = QString::number(n);
    //serialPortUSB->write(s.toLatin1() + "\n");
    ui->textTestGrap->appendPlainText(s);

    QFile file("resource/marcacion.txt");
    if(file.open(QIODevice::WriteOnly)){
        QTextStream stream(&file);
        int value = ui->ang->value();
        if(value<0){
            value += 360;
        }
        stream<<value;
    } else {
        qDebug();
    }
    file.close();
    s = "RP";
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoBTR);
}

void SIVISO::on_ang_editingFinished()
{
    //serialPortUSB->write("SET ANGLE A\n");
    ui->textTestGrap->appendPlainText("SET ANGLE A\n");
    int n = ui->ang->value();
    QString s = QString::number(n);
    //serialPortUSB->write(s.toLatin1() + "\n");
    ui->textTestGrap->appendPlainText(s);

    QFile file("resource/marcacion.txt");
    if(file.open(QIODevice::WriteOnly)){
        QTextStream stream(&file);
        int value = ui->ang->value();
        /*if ((value%4.5)!=0)
        {
            value = value-(value%4.5);
        }*/
        if(value<0){
            value += 360;
        }
        stream<<value;
    } else {
        qDebug();
    }
    file.close();
    s = "RP";
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoBTR);
}

void SIVISO::on_send_clicked()
{
    QString s;
    s = ui->textSend->text();

   /* QByteArray data = "prueba"; // <-- fill with data
    data = "ui->textSend->text()";

        pSocket = new QTcpSocket( this ); // <-- needs to be a member variable: QTcpSocket * pSocket;
        connect( pSocket, SIGNAL(readyRead()), SLOT(readTcpData()) );

        pSocket->connectToHost("192.168.1.10", 6001);
        if( pSocket->waitForConnected() ) {
            pSocket->write( data );
        }*/

    //serialPortUSB->write(s.toLatin1()+"\n");
    ui->textSend->clear();
}

void SIVISO::on_infoSignal_clicked()
{
    ui->view->appendPlainText("info: ");
    QString s = mysignal->get_info_signal();
    ui->view->appendPlainText(s);
    ui->view->appendPlainText("portSSF " + QString("%1").arg(puertoSSF));
    ui->view->appendPlainText("portBTR " + QString("%1").arg(puertoBTR));
    ui->view->appendPlainText("portLF " + QString("%1").arg(puertoLF));
    ui->view->appendPlainText("portPPI " + QString("%1").arg(puertoPPI));
}

void SIVISO::deshabilitado(bool value){
    ui->frecuencia->setDisabled(value);
    ui->bw->setDisabled(value);
    ui->it->setDisabled(value);
    ui->dt->setDisabled(value);
    ui->cw->setDisabled(value);
    ui->frecP->setDisabled(value);
    ui->nP->setDisabled(value);
    ui->ran_det->setDisabled(value);
    ui->tipo_norte->setDisabled(value);
    ui->origenBuque->setDisabled(value);
    ui->origenSensor->setDisabled(value);
    ui->origenBlanco->setDisabled(value);
    ui->origenOmni->setDisabled(value);
    ui->origenAuto->setDisabled(value);
    ui->origenManual->setDisabled(value);
    ui->ang->setDisabled(value);
    ui->dial->setDisabled(value);
    ui->rec->setDisabled(value);
    ui->play->setDisabled(value);
    ui->et_blancos->setDisabled(value);
    ui->clas_blancos->setDisabled(value);
    ui->edo_mar->setDisabled(value);
    ui->prob_falsa->setDisabled(value);
    ui->prob_deteccion->setDisabled(value);
    ui->escala_ppi->setDisabled(value);
    ui->escala_desp->setDisabled(value);
    ui->gan_sen->setDisabled(value);
    ui->enlazar->setDisabled(value);
    ui->lf->setDisabled(value);
    ui->btr->setDisabled(value);
    ui->ppi->setDisabled(value);
}


void SIVISO::on_vol_dw_clicked()
{
    proceso3->startDetached("amixer sset Master 5%-");
}


void SIVISO::on_vol_up_clicked()
{
    proceso3->startDetached("amixer sset Master 5%+");
}

void SIVISO::on_enlazar_clicked()
{
    thread()->sleep(1);
    proceso5->startDetached("java -jar ConexionPV.jar");
    thread()->sleep(1);
    proceso1->startDetached("java -jar Lofar.jar");
    thread()->sleep(1);
    proceso2->startDetached("java -jar BTR.jar");
    thread()->sleep(1);
}
