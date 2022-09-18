int motorpin1=5;
int redLed = 12;
int buzzer = 11;
int smoke = A5;
int motorpin=3;
int temp=A0;
int sensorThres = 85;
void setup() {
  Serial.begin(9600);
  pinMode(redLed, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(smoke, INPUT);
  pinMode(temp,INPUT);
  pinMode(motorpin,OUTPUT);
  pinMode(motorpin1,OUTPUT);
  digitalWrite(5,0);
  digitalWrite(3,0);
}
void loop() {
  //gas sensor 
  int analogSensor = analogRead(smoke);
  Serial.print("Pin A5: ");
  Serial.println(analogSensor);
  delay(1000);
  if (analogSensor > sensorThres)
  {
    digitalWrite(redLed, HIGH);
    tone(buzzer, 1000, 200);
    digitalWrite(motorpin,HIGH);
}
 else
  {
    digitalWrite(redLed, LOW);
    noTone(buzzer);
    digitalWrite(motorpin,LOW);
  }
  delay(1000);
  double a=analogRead(temp);
  double t=(((a/1024)*5)-0.5)*100;
  Serial.println(t);
  //temp sensor used as flame sensor as flame sensor not available
if(t>33)
{
    digitalWrite(redLed, HIGH);
    tone(buzzer, 1000, 200);
    digitalWrite(motorpin1,HIGH);
}
else{
    digitalWrite(redLed, LOW);
    noTone(buzzer);
    digitalWrite(motorpin1,LOW);
  }
  delay(1000);
}