int ledPin = 13; // номер пина на котором расположен светодоид
int dotDelay = 200; // время длительности точки 



void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // == Буква S ==
  //Точка
  digitalWrite(ledPin, HIGH);
  delay(dotDelay);
  digitalWrite(ledPin, LOW);
  delay(dotDelay);
 
//Точка
  digitalWrite(ledPin, HIGH);
  delay(dotDelay);
  digitalWrite(ledPin, LOW);
  delay(dotDelay);
  
   //Точка
  digitalWrite(ledPin, HIGH);
  delay(dotDelay);
  digitalWrite(ledPin, LOW);
  
  
  //Окончание буквы
  delay(3*dotDelay);
  // == Буква O ==
  //Тире
  digitalWrite(ledPin, HIGH);
  delay(3*dotDelay);
  digitalWrite(ledPin, LOW);
  delay(dotDelay);
  
  //Тире
  digitalWrite(ledPin, HIGH);
  delay(3*dotDelay);
  digitalWrite(ledPin, LOW);
  delay(dotDelay);
  
  //Тире
  digitalWrite(ledPin, HIGH);
  delay(3*dotDelay);
  digitalWrite(ledPin, LOW);
  
  //Окончание буквы
  delay(3*dotDelay);

// == Буква S ==
  //Точка
  digitalWrite(ledPin, HIGH);
  delay(dotDelay);
  digitalWrite(ledPin, LOW);
  delay(dotDelay);
  
   //Точка
  digitalWrite(ledPin, HIGH);
  delay(dotDelay);
  digitalWrite(ledPin, LOW);
  delay(dotDelay);
  
   //Точка
  digitalWrite(ledPin, HIGH);
  delay(dotDelay);
  digitalWrite(ledPin, LOW);
  
  
  //Окончание слова
  delay(7*dotDelay);
}

