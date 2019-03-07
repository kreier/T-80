// remote robot control with bluetooth
#include <SoftwareSerial.h>

SoftwareSerial BTSerial(2, 3);   // RX | TX

char BTinput = '0';

void setup() {
  Serial.begin(9600);
  BTSerial.begin(9600);  // HC-05 default speed in AT 38400
  
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  if (BTSerial.available()) 
  {
    BTinput = BTSerial.read();
    Serial.write(BTinput);
    if (BTinput == 'U') {
      digitalWrite(9, HIGH);
      digitalWrite(11, HIGH);
    }
    if (BTinput == 'D') {
      digitalWrite(10, HIGH);
      digitalWrite(12, HIGH);
    }
    if (BTinput == 'L') {
      digitalWrite(9, HIGH);
      digitalWrite(12, HIGH);
    }
    if (BTinput == 'R') {
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
    }
    if (BTinput == '0') {
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
    }
  }
}
