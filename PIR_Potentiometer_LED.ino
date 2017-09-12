int knob = A1;
int LEDPin = 3;
int PIR = 7;

int knobValue;
int PIRValue;

void setup() {
  // put your setup code here, to run once:
  pinMode(knob, INPUT);
  pinMode(PIR, INPUT);
  pinMode(LEDPin, OUTPUT);

 // digitalWrite(LEDPin, HIGH);

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  analogRead(knob);
  knobValue = analogRead(knob);
  Serial.println(analogRead(knob));

  analogRead(PIR);
  PIRValue = analogRead(PIR);
  Serial.println(analogRead(PIR));

  
  if (knobValue > 40) {
    digitalWrite(LEDPin, HIGH);
  } else {
      digitalWrite(LEDPin, LOW);
    }
  
  
}
