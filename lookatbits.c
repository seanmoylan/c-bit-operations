#include <stdio.h>
#include <stdint.h>

void printinbits(){
  
}


int main(int argc, char *argv[]){
	int i = 65;
  char c = 65;
  long int t = 65;
  long long int m = 65;
  
  uint8_t u = 65;
  uint64_t s = 65;

  printf("%x\t%c\t%d\t%d\n", c, c, c, sizeof(c));
  printf("%x\t%c\t%d\t%d\n", i, i, i, sizeof(i));
  printf("%x\t%c\t%d\t%d\n", t, t, t, sizeof(t));
  printf("%x\t%c\t%d\t%d\n", m, m, m, sizeof(m));

  return 0;
}
