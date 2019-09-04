
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
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("ULTRASSONIC: "); // TRIGGER = 13 , ECHO = 12
  Serial.print(CM_ultrassonic(13,12));
  Serial.println("cm");
  delay(500);
}
