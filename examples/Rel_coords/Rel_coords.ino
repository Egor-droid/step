#include <step.h>

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  step mot(0, 1, 2, 3, 4, 4096*16/360);
  mot.move(1, 1);

}
