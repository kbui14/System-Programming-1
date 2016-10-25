//Write a C program to read the name and marks of n number of students from input by the user and store them in a file. If the file previously exits, add the information of n students.
#include <stdio.h>
int main()
{
    //initiate variables
   char name[50];
   int marks, i, num;

    //ask user the num of students
   printf("Enter number of students: ");
   scanf("%d", &num);
    
    //creates file student.txt if file doesn't exist or opens file student.txt
   FILE *fptr;
   fptr = (fopen("student.txt", "a"));
   if(fptr == NULL)
   {
       printf("Error!");
       return (1);
   }

    //for how many students there are, enter the name and marks for each student
   for(i = 0; i < num; ++i)
   {
      printf("For student %d\nEnter name: ", i+1);
      scanf("%s", name);

      printf("Enter marks: ");
      scanf("%d", &marks);

      fprintf(fptr,"\nName: %s \nMarks=%d \n", name, marks);
   }

    //file output to student.txt
   fclose(fptr);
   return 0;
}
