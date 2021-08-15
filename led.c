#include <reg52.h>

sbit led = P2^0;

void delay(int time) {
  
  int i,j;
  for(i=0; i < time; i++)
    for(j=0; j < 1000; j++);
}

void main(void) {

  while(1) {
  
    led = 0;
    delay(100);
    led = 1;
    delay(100);
    
  }
}
