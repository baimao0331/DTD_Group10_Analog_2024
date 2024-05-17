// C++ code
//
int senservalue;
int sensorPin = A0;

void setup()
{
  pinMode(9, OUTPUT);

}

void loop()
{
  senservalue = analogRead(sensorPin);
  if(senservalue>=1000){
  	senservalue = 1000;
  }
  else if(senservalue <= 500){
  	senservalue =500;
  }
  int val = map(senservalue ,500,1023,0,255);

  analogWrite(9,val);

}