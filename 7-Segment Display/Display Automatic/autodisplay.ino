#define pinA 10
#define pinB 9
#define pinC 6
#define pinD 7
#define pinE 8
#define pinF 11
#define pinG 12
#define pinPD 5
#define pinBotao 2

int numero = 10;

void setup() {
  // put your setup code here, to run once:

  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(pinPD, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

     digitalWrite(pinA, LOW);
     digitalWrite(pinB, LOW);
     digitalWrite(pinC, LOW);
     digitalWrite(pinD, LOW);
     digitalWrite(pinE, LOW);
     digitalWrite(pinF, LOW);
     digitalWrite(pinG, HIGH);
     delay(300); 

     digitalWrite(pinA, HIGH);
     digitalWrite(pinB, LOW);
     digitalWrite(pinC, LOW);
     digitalWrite(pinD, HIGH);
     digitalWrite(pinE, HIGH);
     digitalWrite(pinF, HIGH);
     digitalWrite(pinG, HIGH);
     delay(300);
          
     digitalWrite(pinA, LOW);
     digitalWrite(pinB, LOW);
     digitalWrite(pinC, HIGH);
     digitalWrite(pinD, LOW);
     digitalWrite(pinE, LOW);
     digitalWrite(pinF, HIGH);
     digitalWrite(pinG, LOW);
     delay(300);
     
     digitalWrite(pinA, LOW);
     digitalWrite(pinB, LOW);
     digitalWrite(pinC, LOW);
     digitalWrite(pinD, LOW);
     digitalWrite(pinE, HIGH);
     digitalWrite(pinF, HIGH);
     digitalWrite(pinG, LOW);
     delay(300);
    
     digitalWrite(pinA, HIGH);
     digitalWrite(pinB, LOW);
     digitalWrite(pinC, LOW);
     digitalWrite(pinD, HIGH);
     digitalWrite(pinE, HIGH);
     digitalWrite(pinF, LOW);
     digitalWrite(pinG, LOW);
     delay(300);
     
     digitalWrite(pinA, LOW);
     digitalWrite(pinB, HIGH);
     digitalWrite(pinC, LOW);
     digitalWrite(pinD, LOW);
     digitalWrite(pinE, HIGH);
     digitalWrite(pinF, LOW);
     digitalWrite(pinG, LOW);
     delay(300);
     
     digitalWrite(pinA, LOW);
     digitalWrite(pinB, HIGH);
     digitalWrite(pinC, LOW);
     digitalWrite(pinD, LOW);
     digitalWrite(pinE, LOW);
     digitalWrite(pinF, LOW);
     digitalWrite(pinG, LOW);
     delay(300);
     
     digitalWrite(pinA, LOW);
     digitalWrite(pinB, LOW);
     digitalWrite(pinC, LOW);
     digitalWrite(pinD, HIGH);
     digitalWrite(pinE, HIGH);
     digitalWrite(pinF, HIGH);
     digitalWrite(pinG, HIGH);
     delay(300);
      
     digitalWrite(pinA, LOW);
     digitalWrite(pinB, LOW);
     digitalWrite(pinC, LOW);
     digitalWrite(pinD, LOW);
     digitalWrite(pinE, LOW);
     digitalWrite(pinF, LOW);
     digitalWrite(pinG, LOW);
     delay(300);
     
     digitalWrite(pinA, LOW);
     digitalWrite(pinB, LOW);
     digitalWrite(pinC, LOW);
     digitalWrite(pinD, LOW);
     digitalWrite(pinE, HIGH);
     digitalWrite(pinF, LOW);
     digitalWrite(pinG, LOW);
     delay(300);
     
     digitalWrite(pinA, HIGH);
     digitalWrite(pinB, HIGH);
     digitalWrite(pinC, HIGH);
     digitalWrite(pinD, HIGH);
     digitalWrite(pinE, HIGH);
     digitalWrite(pinF, HIGH);
     digitalWrite(pinG, HIGH);
     delay(300);
}
