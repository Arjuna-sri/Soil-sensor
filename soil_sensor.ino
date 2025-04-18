#define AOUT_PIN 26 
#define THRESHOLD 2800 

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(AOUT_PIN); 
  if (value > THRESHOLD)
  {
    Serial.println("The soil is DRY ");
  }
  else
  {
    Serial.println("The soil is WET ");
  }
 
  delay(500);
}
