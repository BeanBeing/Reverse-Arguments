#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
  char* str;
 
  // Make sure correct command line arguments are passed
  if(argc > 7){
    puts("TOO MANY ARGUMENTS! MAKE SURE TO ONLY PASS 6 ARGUMENTS MAXIMUM!");
    return 1;
  }

  // catonates all arguments along with space for each argument to str
  for(int i = 1; i < argc; i++){
    str = strcat(str, argv[i]);
    str = strcat(str, " ");
  }

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
  return 0;
}
    
