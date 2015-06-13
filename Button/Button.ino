const int LED = 4, BUTTON = 12;
int state=0;

void setup()
{
  pinMode(LED,OUTPUT);
  pinMode(BUTTON,INPUT);
}

void loop()
{
  if(digitalRead(BUTTON))
  {
    state = 1 - state;
    digitalWrite(LED,state);
    delay(500);
  }
}
