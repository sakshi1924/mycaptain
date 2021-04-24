/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int marks;
    printf("Enter your marks ");
    scanf("%d",&marks);
    if(marks<0 || marks>100)
    {
        printf("Wrong Entry");
    }
    else if(marks>84)
    {
        printf("Grade A");
    }
    else if(marks>69)
    {
        printf("Grade B");
    }
    else if(marks>54)
    {
        printf("Grade C");
    }
    else if(marks>40)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade F");
    }
}
 
    