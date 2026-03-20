#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int number = 0;

void input_number();
void chunkizer();
int main() { return 0; }

void input_number() {
  printf("Enter a number: ");
  scanf(" %d", &number);
}
void chunkizer() {
  int temp = number;
  int no_of_chunks = 0;
  while (temp > 0) {
    int n = temp % 1000;
    no_of_chunks++;
    temp = temp / 1000;
  }
  char chunks[no_of_chunks];
  temp = number;
  for (int i = 0; i < no_of_chunks; i++) {
    int n = temp % 1000;
    chunks[i] = n;
    temp = temp / 1000;
  }
}
