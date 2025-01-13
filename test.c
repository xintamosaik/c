#include <stdio.h>
/**
 * main
 */
int main() {
  printf("hi\n"); // \n for newline
                  
  const int number = 42;
  printf("The number is %d.\n", number);
                  
  const float percent = 0.01;
  printf("I'm %.2f percent done with learning C.\n", percent);

  const char firstLetter = 'U';
  printf("%c\n", firstLetter);

  const char firstName[] = "Ulf";
  printf("%s\n", firstName);

  printf("%lu\n", sizeof(number));
  printf("%lu\n", sizeof(percent));
  printf("%lu\n", sizeof(firstLetter));

  return 0;
}

