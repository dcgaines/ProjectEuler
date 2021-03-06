#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int isPalindrome(int n) {
  char num[100];
  sprintf(num, "%d", n);
  int length = (int) strlen(num);
  for(int i = 0; i <= (length / 2) - 1; i++) {
    if(num[i] != num[length - 1 - i]){
      return 0;
    }
  }

  return 1;
}

int main(int argc, char** argv) {
  int largest = 0;
  for(int i = 100; i <= 999; i++) {
    for(int j = 100; j <= 999; j++) {
      if(isPalindrome(i*j) == 1) {
	if(i * j > largest){
	  largest = i * j;
	}
      }
    }
  }
  printf("%d\n", largest);
  return 0;
}
