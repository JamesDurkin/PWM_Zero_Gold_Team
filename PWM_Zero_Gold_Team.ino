const int MAX_8_INT = 255;

int brightness;

int digitalPin = 6;




void setup() {
  // put your setup code here, to run once:
  int brightness = 0;

  int fade_amount = 1;

  pinMode(digitalPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(LED_BUILTIN, pot);

brightness = brightness + fade_amount;

if(brightness == 0 or brightness == MAX_8_INT) fade_amount =- fade_amount;

delay(100);


}
