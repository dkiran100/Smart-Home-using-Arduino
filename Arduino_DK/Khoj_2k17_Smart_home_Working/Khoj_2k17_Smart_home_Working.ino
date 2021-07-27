//This is a working program for smart home system.
//This is for khoj 2k17.
//This program allows the user to switch on ONE led using the smartphone.


int led = 13;
int fan = 12;

char receive;

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(fan, OUTPUT);
}

void loop()
{
    if (Serial.available() > 0)
  {
    receive = Serial.read();
  }
  {
    if (receive == 'o')
    {
      digitalWrite(led, HIGH);
    }
    if (receive == 'f')
    {
      digitalWrite(led, LOW);
    }

    if(receive == 'O')
    {
      digitalWrite(fan, HIGH);
    }
    if(receive == 'F')
    {
      digitalWrite(fan, LOW);
    }
  }

}
