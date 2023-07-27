// C++ code
//
int led1 = 4;
int led2 = 6;
int led3 = 7;
int led4 = 9;
int led5 = 11;
int led6 = 12;
int switch1 = 3;
int switch2 = 2;
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(switch1, INPUT);
  pinMode(switch2, INPUT);
  
  Serial.begin(9600); 
}

void loop()
{
  if (digitalRead(switch1)){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
  } else {
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);   
  }
   if (digitalRead(switch2)){
    digitalWrite(led4,HIGH);
    digitalWrite(led6,HIGH);
  } else {
    digitalWrite(led4,LOW);
    digitalWrite(led6,LOW);   
  }
  
  
}