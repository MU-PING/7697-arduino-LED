int led;
int fade;

void setup() 
{
  pinMode(2, OUTPUT); //指定Pin 2 當作輸出腳位
  led = 0;
  fade = 5;
  digitalWrite(2, LOW); //數位寫入高電位
  Serial.begin(9600);
}

void loop() 
{
  analogWrite(2, led);    
  led = led + fade;
  
  if(led<=0)
  {
    fade = 5;
    }
  else if(led >= 255)
  {
    fade -= 5;
    }
  Serial.println(led);
  delay(20);
}
