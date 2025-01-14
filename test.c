#include <stdio.h>
#include <string.h>
int basics();
int structures();
int files();

/**
 * main
 */
int main()
{

  const int errorCodeBasics = basics();
  if (errorCodeBasics != 0)
  {
    printf("There was an error in basics().\n");
    return errorCodeBasics;
  }

  if (errorCodeBasics == 0)
  {
    printf("Basics were handled well.\n");
  }

  const int errorCodesStructures = structures();
  if (errorCodesStructures != 0)
  {
    printf("There was an error in structures().\n");
    return errorCodesStructures;
  }

  if (errorCodesStructures == 0)
  {
    printf("Structures were handled well.\n");
  }

  const int errorCodeFiles = files();
  if (errorCodeFiles != 0)
  {
    printf("There was an error in files.\n");
    return errorCodeFiles;
  }

  if (errorCodeFiles == 0)
  {
    printf("Files were handled well.\n");
  }

  return 0;
}

int basics()
{
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

int structures()
{
  struct Point
  {
    int x;
    int y;
  };

  struct Point here;
  here.x = 20;
  here.y = 40;

  printf("The point is at x=%d, y=%d.\n", here.x, here.y);

  struct Name
  {
    char first[50];
    char last[50];
  };

  struct Name mine;
  strcpy(mine.first, "Ulf");
  strcpy(mine.last, "Dellbruegge");
  printf("My name is %s %s.\n", mine.first, mine.last);

  return 0;
}

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
