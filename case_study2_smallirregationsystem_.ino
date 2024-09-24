const int Motorpin = 13, Sensorpin=A5;
void setup()
{
  Serial.begin(9600);
  pinMode(Motorpin, OUTPUT);
}

void loop()
{
  int sensorValue = analogRead(Sensorpin);
  float voltage = sensorValue * (5.0/1023.0);
  if (voltage >= 2.5)
  {
    digitalWrite(Motorpin, LOW);
  }
  else
  {
    digitalWrite(Motorpin, HIGH);
  }
  Serial.print("Moisture Level:");
  Serial.println(voltage);

  delay(10);
}
