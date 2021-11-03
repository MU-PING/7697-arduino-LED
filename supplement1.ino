int led;
int fade;

void setup() 
{
  pinMode(2, OUTPUT); //指定Pin 2 當作輸出腳位
  led = 0;
  fade = 5;
  digitalWrite(2, LOW); //數位寫入高電位
  Serial.begin(9600);
  
  // Serial.begin()用來開啟 Arduino 與電腦之間的溝通模式，這個 S 記得使用大寫。
  // 括號中的 9600 是什麼東西呢？它有個專有名詞，叫做「Baud rate 鮑率」，是一種資料傳輸的速率單位。
  // 簡單來說，設定 9600，就代表 Arduino 與電腦之間，每一秒鐘能傳輸 9 千 6 百個位元的資料。
  // 設定115200，就代表 Arduino 與電腦之間，每一秒鐘能傳輸 11 萬 5 千 2 百個位元的資料。
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
