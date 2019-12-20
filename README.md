# T80 Robot car with Bluetooth control

[![Build Status](https://travis-ci.com/kreier/T80.svg?branch=master)](https://travis-ci.com/kreier/T80)
[![MIT license](https://img.shields.io/github/license/kreier/T80?color=brightgreen)](http://opensource.org/licenses/MIT)
[![HitCount](http://hits.dwyl.io/kreier/T80.svg)](http://hits.dwyl.io/kreier/T80)

This robot was build and programmed on March 6th, 2019. This is the finished sample:

![Robot](robotcar.jpg)

## Materials

All materials were ordered at [CỬA HÀNG IC ĐÂY RỒI](https://icdayroi.com/). This is the list:

1. [Arduino UNO R3 DIP](https://icdayroi.com/arduino-uno-r3-dip) 110.000₫
2. [Khung Xe Robot](https://icdayroi.com/khung-xe-robot) 68.000₫
3. [Driver motor L298N](https://icdayroi.com/driver-motor-l298n) 29.000₫
4. [Module thu phát bluetooth HC-05](https://icdayroi.com/module-thu-phat-bluetooth-hc-05) 80.000₫

## Software

Software was written from scratch on March 6th, 2019. For remote control you need the software "asdf" on your Android Smartphone. Once connected to the Bluetooth module you have to configure the the keys:
- "U" for the up key
- "D" for the down key
- "L" for the left key
- "R" for the right key

The software sends automatically a "0" if you release the key and the Arduino stops.

## Known issues

Initally the Arduino, Motor driver L298N and Bluetooth module HC-05 were driven by 4 AA batteries. The provided voltage of 5.8 Volt dropped to 4.3 Volt when the motors were started. This undervoltage for the linear regulator on the bluetooth board could not provide the needed 3.3V for the Bluetooth module and resetted the connection. Therefore the remote no longer worked.

### Solution

We upgraded the power supply to two Lithium batteries (8 Volt from two 18650) and had no more lost Bluetooth connections.

## Sciencefair 2019

This project was the winning project for grade 9 in the AIS Sciencefair 2019! Even the solar panel was provided and soldered by me. And on the morning of March 7th the power source was updated to two Lithium batteries (8 Volt from two 18650) instead of 4 AA batteries. The measurement showed that the 5 Volt from new batteries dropped to 4.3 Volt once the motors were started. This lead to a reset of the bluetooth module, lost connection - and the remote no longer worked.

Result of this project: I won! At least it got the most points from the judges against the other 18 projects. More about it [on this website](https://sites.google.com/ais.edu.vn/sciencefair2019/grade-9). Its project 14.

Details for the code can be found in the [Wiki](https://github.com/kreier/T80/wiki). 

