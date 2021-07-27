//This is a trial program for smart home system.
//This is for khoj 2k17.
//This program allows the user to switch on ONE led using the smartphone.

int led = 13;
// int fan = 12;

char receive;

void setup()
{
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  // pinMode(fan, OUTPUT);
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
      digitalWrite(LED_BUILTIN, HIGH);
    }
    if (receive == 'f')
    {
      digitalWrite(LED_BUILTIN, LOW);
    }

    /*
    if(receive == 'O')
    {
      digitalWrite(fan, HIGH);
    }
    if(receive == 'F')
    {
      digitalWrite(fan, LOW);
    }
    */
  }

}
