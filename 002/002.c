#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char** argv) {
  long one = 1;
  long two = 1;
  long temp, sum = 0;

  do {
    temp = one + two;
    if(temp % 2 == 0)
      sum += temp;
    one = two;
    two = temp;
  } while (temp < 4000000);
  printf("%ld\n", sum);
  return 0;
}
