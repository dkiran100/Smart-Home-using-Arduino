//This is a trial program for smart home system.
//This is for khoj 2k17.
//This program allows the user to switch on ONE led using the smartphone.

int led = 13;

char recieve;

void setup()
{
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop()
{
  Serial.println("Hello");
  if (Serial.available() > 0)
  {
    recieve = Serial.read();
  }
  {
    if (recieve == 'o')
    {
      digitalWrite(led, HIGH);
      Serial.println("Led on");
    }
    if (recieve == 'f')
    {
      digitalWrite(led, LOW);
      Serial.println("Led off");
    }
  }

}
