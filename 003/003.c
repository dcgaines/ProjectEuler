#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int isPrime(long n);

int main(int argc, char** argv) {
  long num = 600851475143;
  long largest = 1;

  for(long i = 2; i <= sqrt(num); i++) {
    if(num % i == 0) {
      if(isPrime(i) == 1) {
	if(i > largest)
	  largest = i;
      }
      if(isPrime(num / i) == 1) {
	if(num / i > largest)
	  largest = num / i;
      }
    }
  }
  printf("%ld\n", largest);
  return 0;
}

int isPrime(long n) {
  for(long i = 2; i < n; i++) {
    if(n % i == 0)
      return 0;
  }
  return 1;
}
