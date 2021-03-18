void setup()
{
  Serial.begin(115200);
  
  analogSetPinAttenuation(A0,ADC_11db);
  adcAttachPin(A0);
  adcStart(A0);
  while(analogread(A0)>600);
}

void loop()
{
  int alco;
  alco = analogRead(A0);
  Serial.println(alco);
}
