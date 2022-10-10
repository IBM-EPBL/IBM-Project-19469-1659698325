from machine import Pin
from time import sleep

#red_led 
red_led = Pin(17, Pin.OUT)

#yellow_led
yellow_led = Pin(18, Pin.OUT)

#green_led 
green_led = Pin(19, Pin.OUT)

while True:

  #stop signal - red glows
  print("Stop")
  red_led.value(1)
  yellow_led.value(0)
  green_led.value(0)
  sleep(4)

  #Alert signal - yellow glows
  print("Alert")
  red_led.value(0)
  yellow_led.value(1)
  green_led.value(0)
  sleep(2)

  #Go signal - green glows
  print("Go")
  red_led.value(0)
  yellow_led.value(0)
  green_led.value(1)
  sleep(4)