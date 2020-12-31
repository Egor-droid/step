#include <step.h>

void setup() {
  step mot(0, 1, 2, 3, 4, 4096*16/360);
  mot.pos=10;
  mot.move();

}

void loop() {
  // put your main code here, to run repeatedly:

}
