int greenLedPin = 2;
int yellowLedPin = 3;
int redLedPin = 4;

int lightSensorPin = A0;
int analogValue = 0;


void setup() {
  pinMode(greenLedPin, OUTPUT);
  pinMode(yellowLedPin,OUTPUT);
  pinMode(redLedPin,OUTPUT);
  Serial.begin(9600);
}


void loop(){
  analogValue = analogRead(lightSensorPin);//INPUTS LIGHT
  if(analogValue < 50){            // IF LIGHT VALUE < 50
    digitalWrite(redLedPin, HIGH); // RED LED GLOWS HIGH RESISTANCE
  }
  else if(analogValue >= 50 && analogValue <= 100){ // IF LIGHT VALUE < 50 AND > 100
    digitalWrite(yellowLedPin, HIGH); // YELLOW LED GLOWS MEDIUM RESISTANCE
  }
  else{ 
    digitalWrite(greenLedPin, HIGH); // LOW RESISTANCE
  }
  delay(200);
  digitalWrite(greenLedPin, LOW);
  digitalWrite(yellowLedPin, LOW);
  digitalWrite(redLedPin, LOW);
  Serial.println(analogValue);
  delay(100);
  
}
