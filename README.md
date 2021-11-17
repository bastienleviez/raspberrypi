# raspberrypi

# Librairies

## Librairie "WiringPi" 

***

#### Récupération de la libirairie **WiringPi**

```
$ cd /tmp
$ wget https://project-downloads.drogon.net/wiringpi-latest.deb
$ sudo dpkg -i wiringpi-latest.deb
```

## Librairie pour MFRC522

***

#### Récupération de la librairie **MFRC522**

```
$ wget http://www.airspayce.com/mikem/bcm2835/bcm2835-1.50.tar.gz
$ tar zxvf bcm2835-1.xx.tar.gz
$ cd bcm2835-1.xx
$ ./configure
$ make
$ sudo make check
$ sudo make install
```

Pour build

```
$ g++ MFRC522.cpp Read.cpp -std=c++11 -lbcm2835
```
