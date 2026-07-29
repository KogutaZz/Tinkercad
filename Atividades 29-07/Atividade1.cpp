float tempC = 0;

int tempPin = 0;

void setup() {
  
  Serial.begin(9600);
  
}

void loop() {
  
  tempC = analogRead(tempPin);
  tempC = (5.0 * tempC * 100.0)/1024.0;


  Serial.println("Lendo temperatura... ");
  Serial.print((byte)tempC);
  Serial.println(" C");
  
  delay(1000);
  
}
