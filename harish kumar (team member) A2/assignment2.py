import random #importing random and time
import time
def temperature(temp):
        print(temp)
        if (temp > 70.0):
            print("Alarm detected temperature value",temp)
            time.sleep(0.75) #for slow run of code
        elif(temp >50.0):
            print("Normal temperature value",temp)
            time.sleep(0.75)
        else:
            print("safe  temperature value",temp)
            time.sleep(0.75)
def hum(humidity):
    print(humidity)
    if(humidity >20.0):
        print("Alarm detected humidity value",humidity)
        time.sleep(0.75)
    elif(humidity >10.0):
        print("Normal humidity value",humidity)
        time.sleep(0.75)
    else:
        print("safe humidity value",humidity)
        time.sleep(0.75)


while(1):
    temperature(temp= (random.random())*100)
    hum(humidity=(random.random())*100)
    


