#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
  char* str = malloc(strlen(argv[1]) + 1);
 
  // argument limit...
  if(argc > 2){
    puts("TOO MANY ARGUMENTS! MAKE SURE TO ONLY PASS <argc> OF ARGUMENTS!");
    return 1;
  }

  // catonates all arguments along with space for each argument to str
    strcpy(str, argv[1]);
    strcat(str, " ");

  // Gets length of str
  int length = strlen(str);

  // For loop to reverse str
  for(int i = 0; i < length / 2; i++){
    char temp = str[i];
    str[i] = str[length - 1 - i];
    str[length - 1 - i] = temp;
  }
 
  // Print reversed string 
  fputs(str, stdout);
  putchar(' ');	// Places empty space afterwards
  putchar('\n');	// New line
  free(str);	// Frees str malloc
  return 0;
}
    
