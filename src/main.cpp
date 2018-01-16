#include <mbed.h>

int main() {

    DigitalOut red(D5);

    while(1) {
      red.write(0);
      wait_ms(3)
      red.write(1);
      wait_ms(1);
    }
}
