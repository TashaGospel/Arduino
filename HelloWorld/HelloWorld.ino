int LED1 = 4, LED2 = 6, LED3 = 8;

void setup() 
{
  pinMode(LED1,OUTPUT);  
  pinMode(LED2,OUTPUT);  
  pinMode(LED3,OUTPUT);  
}

void loop()
{
  digitalWrite(LED1,HIGH);
  delay(100);
  digitalWrite(LED1,LOW);
  delay(100);
  digitalWrite(LED2,HIGH);
  delay(100);
  digitalWrite(LED2,LOW);
  delay(100);
  digitalWrite(LED3,HIGH);
  delay(100);
  digitalWrite(LED3,LOW);
  delay(100);
}


