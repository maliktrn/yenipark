int trigPin = 3;
int echoPin = 4;
int ledPin1y = 8;
int ledPin2s = 9;
int ledPin3k = 10;
int buzzerPin = 12;

long sure;
long mesafe;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop()
{
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);

  sure = pulseIn(echoPin, HIGH);
  mesafe = (sure/2)/29.1;

  if(mesafe <= 10)
  {
    digitalWrite(ledPin3k,HIGH);
    digitalWrite(buzzerPin,HIGH);
    delay(100);
    digitalWrite(ledPin2s,LOW);
    digitalWrite(ledPin1y,LOW);
  }
  else if(mesafe <= 15)
  {
    digitalWrite(ledPin3k,HIGH);
    digitalWrite(buzzerPin,HIGH);
    delay(100);
    digitalWrite(ledPin3k,LOW);
    digitalWrite(buzzerPin,LOW);
    delay(100);
        
    digitalWrite(ledPin2s,LOW);
    digitalWrite(ledPin1y,LOW);
  }
  else if(mesafe <= 20)
  {
    digitalWrite(ledPin2s,HIGH);
    digitalWrite(buzzerPin,HIGH);
    delay(100);
    digitalWrite(ledPin2s,LOW);
    digitalWrite(buzzerPin,LOW);
    delay(100);
        
    digitalWrite(ledPin3k,LOW);
    digitalWrite(ledPin1y,LOW);
  }
  else if(mesafe <= 25)
  {
    digitalWrite(ledPin1y,HIGH);
    digitalWrite(buzzerPin,HIGH);
    delay(100);
    digitalWrite(ledPin1y,LOW);
    digitalWrite(buzzerPin,LOW);
    delay(100);
        
    digitalWrite(ledPin2s,LOW);
    digitalWrite(ledPin3k,LOW);
  }
  else
  {
    digitalWrite(buzzerPin,HIGH);
    delay(1000);
    digitalWrite(buzzerPin,LOW);
    delay(1000);
  }
}
