//This is a working program for smart home system.
//This is for khoj 2k17.
//This program allows the user to switch on TWO lights and ONE fan using the smartphone.


int led = 13; // Main light 
int ext_led = 11; // Night light  
int fan = 12;

char receive; 

void setup()
{
  Serial.begin(9600); // sends data rate in bits per second (bauds).
  // In this case 9600 baud

  // setting light and fan as output
  pinMode(led, OUTPUT); 
  pinMode(fan, OUTPUT);
  pinMode(ext_led , OUTPUT);
}

void loop()
{
    if (Serial.available() > 0)
    // gets number of bytes available for reading from bluetooth chip.
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
    if(receive == 'a')
    {
      digitalWrite(ext_led , HIGH);
    }
    if(receive == 'b')
    {
      digitalWrite(ext_led , LOW);
    }
  }

}
