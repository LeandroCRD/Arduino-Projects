int pinPedestreVermelho = 2;
int pinPedestreVerde = 3;
int pinBotao = 4;
int pinVermelho = 5;
int pinAmarelo = 6;
int pinVerde = 7;

int pinA = 8;
int pinB = 9;
int pinC = 10;
int pinD = 11;
int pinE = 12;
int pinF = 13;
int pinG = 1;

boolean ligado = false;

unsigned long delay1 = 0;

boolean estadoAnteriorBotao = true;
boolean estadoBotao = true;

void setup() {
  // put your setup code here, to run once:
  
  pinMode(pinVerde, OUTPUT);
  pinMode(pinAmarelo, OUTPUT);
  pinMode(pinVermelho, OUTPUT);
  pinMode(pinBotao, INPUT);
  pinMode(pinPedestreVerde, OUTPUT);
  pinMode(pinPedestreVermelho, OUTPUT);
  
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(pinA, HIGH);
    digitalWrite(pinB, HIGH);
    digitalWrite(pinC, HIGH);
    digitalWrite(pinD, HIGH);
    digitalWrite(pinE, HIGH);
    digitalWrite(pinF, HIGH);
    digitalWrite(pinG, HIGH);
  
  //delay1 = millis();
  estadoBotao = digitalRead(pinBotao);

  if (estadoBotao && !estadoAnteriorBotao) {

    ligado = !ligado;
    delay1 = millis();
  }

  estadoAnteriorBotao = estadoBotao;

  if ((millis() - delay1) > 18800) {
    delay1 = millis();
  }
  
  if (ligado == true) {
  
    
    if(((millis() - delay1) > 0) && ((millis() - delay1) < 5000)){ 
        digitalWrite(pinVerde, HIGH);
        digitalWrite(pinAmarelo, LOW);
        digitalWrite(pinVermelho, LOW);
    
        digitalWrite(pinPedestreVerde, LOW);
        digitalWrite(pinPedestreVermelho, HIGH);

        
     }else if (((millis() - delay1) > 5000) && ((millis() - delay1) < 6500)) {
        digitalWrite(pinVerde, LOW);
        digitalWrite(pinAmarelo, HIGH);
        digitalWrite(pinVermelho, LOW);
    
        digitalWrite(pinPedestreVerde, LOW);
        digitalWrite(pinPedestreVermelho, HIGH);     

     }else if (((millis() - delay1) > 6500) && ((millis() - delay1) < 7500)) {
        digitalWrite(pinVerde, LOW);
        digitalWrite(pinAmarelo, LOW);
        digitalWrite(pinVermelho, HIGH);
    
        digitalWrite(pinPedestreVerde, HIGH);
        digitalWrite(pinPedestreVermelho, LOW);     

     }else if (((millis() - delay1) > 7500) && ((millis() - delay1) < 8500)) {
        digitalWrite(pinA, LOW);
        digitalWrite(pinB, LOW);
        digitalWrite(pinC, LOW);
        digitalWrite(pinD, HIGH);
        digitalWrite(pinE, LOW);
        digitalWrite(pinF, LOW);
        digitalWrite(pinG, LOW);
        
        digitalWrite(pinVerde, LOW);
        digitalWrite(pinAmarelo, LOW);
        digitalWrite(pinVermelho, HIGH);
    
        digitalWrite(pinPedestreVerde, HIGH);
        digitalWrite(pinPedestreVermelho, LOW);     

     }else if (((millis() - delay1) > 8500) && ((millis() - delay1) < 9500)) {
        digitalWrite(pinA, LOW);
        digitalWrite(pinB, LOW);
        digitalWrite(pinC, LOW);
        digitalWrite(pinD, LOW);
        digitalWrite(pinE, LOW);
        digitalWrite(pinF, LOW);
        digitalWrite(pinG, LOW);
        
        digitalWrite(pinVerde, LOW);
        digitalWrite(pinAmarelo, LOW);
        digitalWrite(pinVermelho, HIGH);
    
        digitalWrite(pinPedestreVerde, HIGH);
        digitalWrite(pinPedestreVermelho, LOW);  

     }else if (((millis() - delay1) > 9500) && ((millis() - delay1) < 10500)) {
        digitalWrite(pinA, LOW);
        digitalWrite(pinB, HIGH);
        digitalWrite(pinC, LOW);
        digitalWrite(pinD, HIGH);
        digitalWrite(pinE, LOW);
        digitalWrite(pinF, HIGH);
        digitalWrite(pinG, HIGH);
        
        digitalWrite(pinVerde, LOW);
        digitalWrite(pinAmarelo, LOW);
        digitalWrite(pinVermelho, HIGH);
    
        digitalWrite(pinPedestreVerde, HIGH);
        digitalWrite(pinPedestreVermelho, LOW);    

     }else if (((millis() - delay1) > 10500) && ((millis() - delay1) < 11500)) {
        digitalWrite(pinA, HIGH);
        digitalWrite(pinB, LOW);
        digitalWrite(pinC, LOW);
        digitalWrite(pinD, LOW);
        digitalWrite(pinE, LOW);
        digitalWrite(pinF, LOW);
        digitalWrite(pinG, LOW);
        
        digitalWrite(pinVerde, LOW);
        digitalWrite(pinAmarelo, LOW);
        digitalWrite(pinVermelho, HIGH);
    
        digitalWrite(pinPedestreVerde, HIGH);
        digitalWrite(pinPedestreVermelho, LOW);

     }else if (((millis() - delay1) > 11500) && ((millis() - delay1) < 12500)) {
        digitalWrite(pinA, HIGH);
        digitalWrite(pinB, LOW);
        digitalWrite(pinC, LOW);
        digitalWrite(pinD, HIGH);
        digitalWrite(pinE, LOW);
        digitalWrite(pinF, LOW);
        digitalWrite(pinG, LOW);  
        
        digitalWrite(pinVerde, LOW);
        digitalWrite(pinAmarelo, LOW);
        digitalWrite(pinVermelho, HIGH);
    
        digitalWrite(pinPedestreVerde, HIGH);
        digitalWrite(pinPedestreVermelho, LOW);

     }else if (((millis() - delay1) > 12500) && ((millis() - delay1) < 13500)) {
        digitalWrite(pinA, LOW);
        digitalWrite(pinB, HIGH);
        digitalWrite(pinC, LOW);
        digitalWrite(pinD, HIGH);
        digitalWrite(pinE, HIGH);
        digitalWrite(pinF, LOW);
        digitalWrite(pinG, LOW);  
        
        digitalWrite(pinVerde, LOW);
        digitalWrite(pinAmarelo, LOW);
        digitalWrite(pinVermelho, HIGH);
    
        digitalWrite(pinPedestreVerde, HIGH);
        digitalWrite(pinPedestreVermelho, LOW);

     }else if (((millis() - delay1) > 13500) && ((millis() - delay1) < 14500)) {
        digitalWrite(pinA, LOW);
        digitalWrite(pinB, LOW);
        digitalWrite(pinC, LOW);
        digitalWrite(pinD, HIGH);
        digitalWrite(pinE, LOW);
        digitalWrite(pinF, HIGH);
        digitalWrite(pinG, LOW); 
        
        digitalWrite(pinVerde, LOW);
        digitalWrite(pinAmarelo, LOW);
        digitalWrite(pinVermelho, HIGH);
    
        digitalWrite(pinPedestreVerde, HIGH);
        digitalWrite(pinPedestreVermelho, LOW);

     }else if (((millis() - delay1) > 14500) && ((millis() - delay1) < 15500)) {
        digitalWrite(pinA, LOW);
        digitalWrite(pinB, LOW);
        digitalWrite(pinC, HIGH);
        digitalWrite(pinD, LOW);
        digitalWrite(pinE, LOW);
        digitalWrite(pinF, HIGH);
        digitalWrite(pinG, LOW); 
        
        digitalWrite(pinVerde, LOW);
        digitalWrite(pinAmarelo, LOW);
        digitalWrite(pinVermelho, HIGH);
    
        digitalWrite(pinPedestreVerde, HIGH);
        digitalWrite(pinPedestreVermelho, LOW);

     }else if (((millis() - delay1) > 15500) && ((millis() - delay1) < 16500)) {
        digitalWrite(pinA, LOW);
        digitalWrite(pinB, HIGH);
        digitalWrite(pinC, LOW);
        digitalWrite(pinD, HIGH);
        digitalWrite(pinE, HIGH);
        digitalWrite(pinF, HIGH);
        digitalWrite(pinG, HIGH);
        
        digitalWrite(pinVerde, LOW);
        digitalWrite(pinAmarelo, LOW);
        digitalWrite(pinVermelho, HIGH);
    
        digitalWrite(pinPedestreVerde, HIGH);
        digitalWrite(pinPedestreVermelho, LOW);

     }else if (((millis() - delay1) > 16500) && ((millis() - delay1) < 17500)) {
        digitalWrite(pinA, LOW);
        digitalWrite(pinB, LOW);
        digitalWrite(pinC, LOW);
        digitalWrite(pinD, LOW);
        digitalWrite(pinE, LOW);
        digitalWrite(pinF, LOW);
        digitalWrite(pinG, HIGH);
        
        digitalWrite(pinVerde, LOW);
        digitalWrite(pinAmarelo, LOW);
        digitalWrite(pinVermelho, HIGH);
    
        digitalWrite(pinPedestreVerde, HIGH);
        digitalWrite(pinPedestreVermelho, LOW);

     }else if (((millis() - delay1) > 17500) && ((millis() - delay1) < 17800)) {
        digitalWrite(pinA, HIGH);
        digitalWrite(pinB, HIGH);
        digitalWrite(pinC, HIGH);
        digitalWrite(pinD, HIGH);
        digitalWrite(pinE, HIGH);
        digitalWrite(pinF, HIGH);
        digitalWrite(pinG, HIGH);

        digitalWrite(pinVerde, LOW);
        digitalWrite(pinAmarelo, LOW);
        digitalWrite(pinVermelho, HIGH);
    
        digitalWrite(pinPedestreVerde, HIGH);
        digitalWrite(pinPedestreVermelho, LOW);

     }else if (((millis() - delay1) > 17800) && ((millis() - delay1) < 18100)) {
        digitalWrite(pinA, LOW);
        digitalWrite(pinB, LOW);
        digitalWrite(pinC, LOW);
        digitalWrite(pinD, LOW);
        digitalWrite(pinE, LOW);
        digitalWrite(pinF, LOW);
        digitalWrite(pinG, HIGH);
        
        digitalWrite(pinVerde, LOW);
        digitalWrite(pinAmarelo, LOW);
        digitalWrite(pinVermelho, HIGH);
    
        digitalWrite(pinPedestreVerde, HIGH);
        digitalWrite(pinPedestreVermelho, LOW);


     }else if (((millis() - delay1) > 18100) && ((millis() - delay1) < 18400)) {
        digitalWrite(pinA, HIGH);
        digitalWrite(pinB, HIGH);
        digitalWrite(pinC, HIGH);
        digitalWrite(pinD, HIGH);
        digitalWrite(pinE, HIGH);
        digitalWrite(pinF, HIGH);
        digitalWrite(pinG, HIGH);
        
        digitalWrite(pinVerde, LOW);
        digitalWrite(pinAmarelo, LOW);
        digitalWrite(pinVermelho, HIGH);
    
        digitalWrite(pinPedestreVerde, HIGH);
        digitalWrite(pinPedestreVermelho, LOW);

     }else if (((millis() - delay1) > 18400) && ((millis() - delay1) < 18700)) {
        digitalWrite(pinA, LOW);
        digitalWrite(pinB, LOW);
        digitalWrite(pinC, LOW);
        digitalWrite(pinD, LOW);
        digitalWrite(pinE, LOW);
        digitalWrite(pinF, LOW);
        digitalWrite(pinG, HIGH);    
        
        digitalWrite(pinVerde, LOW);
        digitalWrite(pinAmarelo, LOW);
        digitalWrite(pinVermelho, HIGH);
    
        digitalWrite(pinPedestreVerde, HIGH);
        digitalWrite(pinPedestreVermelho, LOW);

     }else if (((millis() - delay1) > 18700) && ((millis() - delay1) < 19000)) {
        digitalWrite(pinA, HIGH);
        digitalWrite(pinB, HIGH);
        digitalWrite(pinC, HIGH);
        digitalWrite(pinD, HIGH);
        digitalWrite(pinE, HIGH);
        digitalWrite(pinF, HIGH);
        digitalWrite(pinG, HIGH);
 
        digitalWrite(pinVerde, LOW);
        digitalWrite(pinAmarelo, LOW);
        digitalWrite(pinVermelho, HIGH);
    
        digitalWrite(pinPedestreVerde, HIGH);
        digitalWrite(pinPedestreVermelho, LOW);
                              
     }else {
        digitalWrite(pinA, HIGH);
        digitalWrite(pinB, HIGH);
        digitalWrite(pinC, HIGH);
        digitalWrite(pinD, HIGH);
        digitalWrite(pinE, HIGH);
        digitalWrite(pinF, HIGH);
        digitalWrite(pinG, HIGH);
        
        digitalWrite(pinAmarelo, LOW);
        digitalWrite(pinVermelho, LOW);
    
        digitalWrite(pinPedestreVerde, LOW);
        digitalWrite(pinPedestreVermelho, LOW);
        
        
     }
   

    
    


   
  } else {

        digitalWrite(pinVerde, LOW);
        digitalWrite(pinAmarelo, LOW);
        digitalWrite(pinVermelho, LOW);
    
        digitalWrite(pinPedestreVerde, LOW);
        digitalWrite(pinPedestreVermelho, LOW);


      
  }  

}
