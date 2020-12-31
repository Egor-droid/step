#include <step.h>

void setup() {
  step mot(0, 1, 2, 3, 4, 4096*16/360);
  Serial.begin(9600);
  mot.move(10);
  Serial.print(mot.pos);

}

void loop() {
  // put your main code here, to run repeatedly:

}
