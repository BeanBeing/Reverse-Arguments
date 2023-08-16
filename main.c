#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
   char str[1024] = {0};

   // argument limit...
   if(argc > 128){
      puts("TOO MANY ARGUMENTS! MAKE SURE TO ONLY PASS <argc> OF ARGUMENTS!");
      return 1;
   }

   // Concatenates every argv followed by a space to str
   for(int i = 1; i < argc; i++){
      strncat(str, argv[i], 1023);
      strcat(str, " ");
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
    
