#!/usr/bin/env python
import time
import requests
import serial

ser = serial.Serial("/dev/ttyS0",9600)
ser.flushInput()
while 1:
        x=ser.readline()
        print x
        URL="http://192.168.43.171/hack/api.php"
        PARAMS={'number':x}
        r=requests.get(url=URL,params=PARAMS)