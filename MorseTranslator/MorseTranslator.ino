const int LED = 12, dotlen=200;
char* letters[] = {
".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", // A-I
".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", // J-R
"...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." // S-Z
};
char* numbers[] = {"-----", ".----", "..---", "...--", "....-", ".....", "-....",
"--...", "---..", "----."};

void setup() {
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
}

void flashsign(char si)
{
  digitalWrite(LED,HIGH);
  if (si == '.') delay(dotlen);
  else delay(dotlen*3);
  digitalWrite(LED,LOW);
}

void flashchar(char *ch)
{
  int i = 0;
  while (ch[i] != '\0') {flashsign(ch[i]);delay(dotlen);i++;}
  delay(dotlen*2);
}

void loop() {
  char ch;
  if (Serial.available())
  {
    ch = Serial.read();
    if ('a' <= ch && ch <= 'z') flashchar(letters[ch-'a']);
    else if ('A' <= ch && ch <= 'Z') flashchar(letters[ch-'A']);
    else if ('0' <= ch && ch <= '9') flashchar(numbers[ch-'0']);
    else if (ch == ' ') delay(dotlen*7);
  }
}
