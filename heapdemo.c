#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *str;

  printf("Testing malloc()...\n");
  str = (char *) malloc(6);
  strcpy(str, "Hello");
  printf("String = %s\n", str);

  printf("Testing free()...\n");
  free(str);
  printf("String = %s\n", str);
}
