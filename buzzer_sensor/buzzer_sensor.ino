int buzzer = 7;
byte sensorPin = 3;
byte indicator = 13;
void setup()
{
  pinMode(buzzer, OUTPUT);
  pinMode(sensorPin, INPUT);
  pinMode(indicator, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  byte state = digitalRead(sensorPin);
  digitalWrite(indicator, state);
  if (state == 1)
  {
    digitalWrite(buzzer, HIGH);
    Serial.println("Somebody is in this area!");
  }
  else if (state == 0)
  {
    digitalWrite(buzzer, LOW);
    Serial.println("No one!");
  }
  delay(500);
}
