#include <mbed.h>

class LED {
  DigitalOut pin;
public:
  LED(PinName p) : pin(p,1) {}
  void  on(void) { pin.write(0);}
  void off(void) { pin.write(1);}
};
LED light[] = { LED(PTB22), LED(PTE26), LED(PTB21) };
enum { Red, Green, Blue};


int main() {

    while(1) {
      int k;
      for( k=0 ; k<3 ; k++){
        light[k].on();
        wait(0.5);
        light[k].off();
      }
    }
}
