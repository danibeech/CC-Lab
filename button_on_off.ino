//initial code created 2005
//  by DojoDave <http://www.0j0.org>
//  modified 30 Aug 2011
//  by Tom Igoe
//
//  This example code is in the public domain.


int inputPin= 4;
int outputPin= 13;

int light= HIGH;
int reading;
int previous = LOW;
long time = 0;
long debounce = 200;

void setup() {
pinMode(inputPin, INPUT);
pinMode(outputPin, OUTPUT);
}

void loop() {
  reading = digitalRead(inputPin);

  if(reading == HIGH && previous == LOW && millis() - time > debounce){
      if (light== HIGH)
         light = LOW;
        else
          light = HIGH;

        time = millis();
    } 

    digitalWrite (outputPin, light);
    previous = reading;

}
