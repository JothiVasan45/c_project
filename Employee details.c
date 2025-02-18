#include<stdio.h>
struct employee
{
 char name[20];
 int empno;
 int age;
 char address[80];
};
int main()
{
 struct employee E1;
 printf("Enter name of the employee:");
 scanf("%s",&E1.name);
 printf("Name: %s",E1.name);
 printf("\nEnter the number of employee:");
 scanf("%d",&E1.empno);
 printf("Number: %d",E1.empno);
 printf("\nEnter the age of the employee:");
 scanf("%d",&E1.age);
 printf("Age: %d",E1.age);
 printf("\nEnter the address of the employee:");
 scanf("%s",&E1.address);
 printf("Address: %s",E1.address);
}
