#include "max.h"
#include <assert.h>
#include <stdio.h>

int max(int *numbers, int size) {
  // Excercise 2
  // Implement your code below...
  assert(size > 0);

  int max = numbers[0];
  
  for(int i = 1; i < size; i++){
    if(numbers[i] > max){
      max = numbers[i];
    }
  }

  return max;
}

#ifndef TEST

int main() {
  
  //test
  int numbers[] = {5, 10, 20, 6, 10, -1, 9};
  int size = 7;
  printf("%d\n", max(numbers, size));

	return 0;
}

#endif
