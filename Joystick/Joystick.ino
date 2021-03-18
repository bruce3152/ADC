int sensorPin1 = A0;
int sensorPin2 = A3;
int sensorValue1 = 0;
int sensorValue2 = 0;
int sensorValue3 = 0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  sensorValue1 = analogRead(sensorPin1);
  Serial.print("VRx:");
  Serial.println(sensorValue1);
  sensorValue2 = analogRead(sensorPin2);
  Serial.print("VRy:");
  Serial.println(sensorValue2);
  int sensorValue3 = digitalRead(34);
  Serial.print("SW:");
  Serial.println(sensorValue3);
  delay(300);
}
