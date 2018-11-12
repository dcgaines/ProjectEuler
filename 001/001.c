#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char** argv) {
  long sum = 0;
  for(int i = 1; i < 1000; i++) {
    if( i % 3 == 0 || i % 5 == 0)
      sum += i;
  }

  printf("%ld\n", sum);
  return 0;
}
