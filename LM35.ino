void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
   pinMode(4,OUTPUT); 
   pinMode(34,INPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  int c;
  int a=analogRead(34);
  c=a-273;
  Serial.println(c);
  if(c>=30)
  {
    digitalWrite(4,HIGH);
    delay(100);
  }
  else
  {
    digitalWrite(4,LOW);
    delay(100);
  }
}
