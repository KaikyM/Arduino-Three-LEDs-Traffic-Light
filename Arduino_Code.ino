// C++ code
int time;
int timeR;
int timeG;
int timeY;
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  time = 500;
  timeR = 3000;
  timeY = 1000;
  timeG = 2000;
}

void loop()
{
  //Red
  digitalWrite(LED_BUILTIN, HIGH);
  delay(timeR); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(time); 
  //Green
  digitalWrite(11, HIGH);
  delay(timeG); 
  digitalWrite(11, LOW);
  delay(time); 
  //Yellow
  digitalWrite(12, HIGH);
  delay(timeY); 
  digitalWrite(12, LOW);
  delay(time); 
}
