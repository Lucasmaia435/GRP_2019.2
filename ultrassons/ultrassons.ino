
long CM_ultrassonic(int trigger, int echo){ // Trigger = Output , Echo = Input
  pinMode(trigger, OUTPUT);
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);
  
  /*
  velocidade = espaço/tempo
  velocidade*tempo = espaco

  tempo = val
  velocidade = velocidade do som em micro-segundos = 0.0343

  então 
  
  espaco = (velocidade*tempo)/2 , já que a onda vai e volta.
 */ 
  pinMode(echo, INPUT);
  long val = (pulseIn(echo, HIGH)*0.0343)/2;
  return val;
  
}
  int verde = 6;
  int azul = 5;
  int vermelha = 4;
void setup() {
  pinMode(10,OUTPUT);
  pinMode(verde,OUTPUT);
  pinMode(azul,OUTPUT);
  pinMode(vermelha,OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  int trigger = 13;
  int echo = 12;
  int dist =  CM_ultrassonic(trigger,echo);
  if(dist < 10){
    digitalWrite(verde,HIGH);
    digitalWrite(azul,LOW);
    digitalWrite(vermelha,LOW); 
    digitalWrite(10,HIGH);
    delay(100);
    digitalWrite(10,LOW);    
  }else if( dist >= 10  && dist < 20){
    digitalWrite(verde,LOW);
    digitalWrite(azul,HIGH);
    digitalWrite(vermelha,LOW);
    digitalWrite(10,HIGH);
    delay(100);
    digitalWrite(10,LOW);
  }else if(dist >= 20){
    digitalWrite(verde,LOW);
    digitalWrite(azul,LOW);
    digitalWrite(vermelha,HIGH);
  }
}
