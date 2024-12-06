void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  String text;
  if(Serial.available() > 0)
  {
    text = Serial.readStringUntil('\n');
    Serial.println(text);
  }
}
