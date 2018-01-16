#include <mbed.h>

int main() {

    DigitalOut red(D5);

    while(1) {
      red.write(0);
      wait(0.6);
      red.write(1);
      wait(0.2);
    }
}
