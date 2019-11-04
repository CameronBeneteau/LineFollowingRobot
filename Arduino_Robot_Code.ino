 #include <Ultrasonic.h>
Ultrasonic ultrasonic(13, 12);

#include <Servo.h>
Servo Lservo;  // 90 - 180 (stop - full)
Servo Rservo;  // 0 - 90 (full - stop)

void setup() {
  
  pinMode(A0, INPUT); //Right QTR
  Serial.begin(9600);
  pinMode(A1, INPUT); //Left QTR
  Serial.begin(9600);
  
  Lservo.attach(9);
  Rservo.attach(10);

  pinMode(11, OUTPUT); //Left Brake light
  pinMode(4, OUTPUT); //Right Brake light
  pinMode(6, OUTPUT); //Left Turn Signal
  pinMode(5, OUTPUT); //Right Turn Signal
  
}

void loop() {

  int UltraDist = ultrasonic.read();
  int LeftQTR = analogRead(A1);
  int RightQTR = analogRead(A0);
  
  if (UltraDist <= 15){
    digitalWrite(11, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    Lservo.write(90);
    Rservo.write(90);
  }
  else{
    digitalWrite(11, LOW);
    digitalWrite(4, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    if (LeftQTR > 1000 && RightQTR < 1000){ //left QTR hits black
      digitalWrite(6, HIGH);
      digitalWrite(5, LOW);
      Lservo.write(90);
      Rservo.write(81);
      
    }
    else if (LeftQTR < 1000 && RightQTR > 1000){ //right QTR hits black
      digitalWrite(6, LOW);
      digitalWrite(5, HIGH);
      Lservo.write(100);
      Rservo.write(90);
      
      
    }
    else{
      digitalWrite(6, LOW);
      digitalWrite(5, LOW);
      Lservo.write(100);
      Rservo.write(81);
    }
  }
  Serial.print(LeftQTR);//RightQTR);
  Serial.print(" | ");
  Serial.println(RightQTR);
  
}
