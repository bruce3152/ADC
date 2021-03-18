void setup()
{
  Serial.begin(115200);
  while(analogRead(A0)>600);
}

void loop()
{
  int alco;
  alco = analogRead(A0);
  Serial.println(alco);
}
