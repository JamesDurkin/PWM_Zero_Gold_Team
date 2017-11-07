

int analogPin = A0;

int pot_ratio;
int pot;


void setup() {
  // put your setup code here, to run once:
  
  pinMode(analogPin, INPUT);
  analogReadResolution(10);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(LED_BUILTIN, pot_scale);
pot = analogRead(A0);
delay(100);

pot_ratio= pot / 8;


}
