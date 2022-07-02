// C++ code
//
/*
  Botao para acionamento do semafaro
*/

int buttonState = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(6, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  // read the state of the pushbutton value

  buttonState = digitalRead(2);
  if (buttonState == HIGH) {
    // semafaro on
    digitalWrite(6, HIGH);
  } else {
    // semafaro off
    digitalWrite(6, LOW);
  }

  // check if pushbutton is pressed.  if it is, the
  // buttonState is HIGH

  digitalWrite(LED_BUILTIN, HIGH);

  // turn LED off

  digitalWrite(6, HIGH);

  digitalWrite(LED_BUILTIN, LOW);
  delay(10); // Delay a little bit to improve simulation performance
}