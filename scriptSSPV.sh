#!/bin/bash
echo SSPV
echo ..iniciando software de consola para el sonar de profundidad variable
sleep 1s
sudo ethtool -s eth0 speed 100 duplex  full
cd /home/siviso/repositorio/SSPV/build-SSPV-Desktop_Qt_5_6_0_GCC_64bit-Debug
./SSPV
