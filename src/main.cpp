#include <mbed.h>

enum { Red, Green, Blue};
DigitalOut LED[] = {
  PTB22,
  PTE26,
  PTC21
};

void LEDon(int n) {
  LED[n].write(0);
}
void LEDoff(int n) {
  LED[n].write(1);
}

int main() {
    LEDoff(Red);
    LEDoff(Green);
    LEDoff(Blue);
    
    while(1) {
      int k;
      for( k=0 ; k<3 ; k++){
        LEDon(k);
        wait(0.5);
        LEDoff(k);
      }
    }
}
