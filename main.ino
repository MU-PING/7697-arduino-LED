boolean led;

void setup() 
{
  led = true;
  pinMode(2, OUTPUT); //指定Pin 2 當作輸出腳位
}

void loop() 
{    
  if(led)
  {
    led = false;
    digitalWrite(2, HIGH); //數位寫入高電位
    }
  else
  {
    led = true;
    digitalWrite(2, LOW); //數位寫入低電位
    }
   delay(1000);
}
