#include <stdio.h>
//Lab 5
//Kevin Bui
//Due: Oct 18, 2016 9:00 pm
//What's wrong with the program?
int main()
{
   int x, y;

   x = y = 0;
   printf("The comparison result is: %d\n",  x == y);
    //operator must be == and not =, so that it may compare y=x as well
   return 0;
}
