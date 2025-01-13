#include <stdio.h>
int files()
{
  FILE *testfile;
  // Open a file in read mode
  testfile = fopen("filename.txt", "r");
  if (testfile == NULL)
  {
    printf("The file does not exist.\n");
    return 1;
  }
  // Store the content of the file
  char fileContent[100];
  // Read the content and store it inside myString
  fgets(fileContent, 100, testfile);
  fclose(testfile);
  printf("\n%s", fileContent);
  testfile = fopen("filename.txt", "w");
  // Write some text to the file
  fprintf(testfile, fileContent);
  fclose(testfile);
  return 0;
}
/**
 * main
 */
int main()
{
  struct Point
  {
    int x;
    int y;
  };

  struct Point here;
  here.x = 20;
  here.y = 40;

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

  const int errorCode = files();
  if (errorCode != 0)
  {
    printf("There was an error in files.\n");
    return errorCode;
  }

  if (errorCode == 0)
  {
    printf("Files were handled well.\n");
  }

  return 0;
}
