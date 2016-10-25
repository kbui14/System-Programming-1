#include <stdio.h>

//Write a program that uses getchar() and putchar() to read in a character entered by the user and write the character to the screen.
int main( ) {

    //initiate variable
   int c;

    //ask user to enter a value
   printf( "Enter a value :");
   c = getchar( );

    //return value
   printf( "You entered: ");
   putchar( c );
   printf( "\n");

   return 0;
}
