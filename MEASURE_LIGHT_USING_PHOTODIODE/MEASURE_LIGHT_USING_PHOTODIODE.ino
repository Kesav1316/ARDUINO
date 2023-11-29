#define inPin0 0

void setup(void) {

  Serial.begin(9600);
  Serial.println();
    
}

void loop(void) {
  
  int pinRead0 = analogRead(inPin0);
  float pVolt0 = pinRead0;
  Serial.print(pVolt0);
  Serial.println();
  
  delay(100);
  
}


/* 



PRINT VOLT
int sensorPin = A0;
int sensorValue = 0;

void setup(void) {
   Serial.begin(9600);
   //pinMode(sensorPin, INPUT); 
}
 
void loop(void) {
   sensorValue = analogRead(sensorPin);
   Serial.println(sensorValue);
} */
