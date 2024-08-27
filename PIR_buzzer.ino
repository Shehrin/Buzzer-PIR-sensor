int buzz= 8;
int pir= 3;
int state;

void setup() 
{
  pinMode(pir,INPUT);
  pinMode(buzz,OUTPUT);
}

void loop() 
{
  state= digitalRead(pir);
  if(state== HIGH)
  {
    digitalWrite(led,HIGH);
    delay(50);
  }
  else
  {
    digitalWrite(led,LOW);
    delay(50);
  }
}
