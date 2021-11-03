void setup() 
{
  pinMode(15, OUTPUT); 
  pinMode(16, OUTPUT); 
  pinMode(17, OUTPUT);
}

void loop() 
{
  // 共陽極RGB LED：低電位是亮；高電位是暗

  // R = 紅光
  digitalWrite(15, LOW); 
  digitalWrite(16, HIGH);
  digitalWrite(17, HIGH);
  delay(1000);

  // R + G = 黃光
  digitalWrite(15, LOW);
  digitalWrite(16, LOW);
  digitalWrite(17, HIGH);
  delay(1000);

  // R + G + B= 白光
  digitalWrite(15, LOW);
  digitalWrite(16, LOW);
  digitalWrite(17, LOW);
  delay(1000);
}
