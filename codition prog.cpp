#include<stdio.h>
#include<conio.h>
int main()
{
	   int a;
	   printf("Enter marks of student =");
	   scanf("%d",&a);
	   if(a>=100)
	   {
	   	printf("Wrong Entry");
	   }
	   else if(a>=85)
       {
	   	printf("Grade A");
	   }
	   else if(a>=70 && a<84) 
	   {
	   	printf("Grade B");
	   }
	   else if(a>=55 && a<69)
	   {
	   	printf("Grade C");
	   }
	   else if(a>=40 && a<54) 
	   {
	   	printf("Grade D");
	   }
	   else if(a<=40 && a>0)
	   {
	   	printf("Grade F");
	   }
   
	   else
{
	   	printf("No Marks");
	   }
}
