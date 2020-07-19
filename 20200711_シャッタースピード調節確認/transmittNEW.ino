#define LED 11
#define H HIGH 
#define L LOW
int val =500;
void setup(){
  pinMode(LED,OUTPUT);
}

void loop(){
  digitalWrite(LED,L);
  delayMicroseconds(val);
   digitalWrite(LED,H);
  delayMicroseconds(val);  
}
