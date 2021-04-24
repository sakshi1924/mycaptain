/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Enter your number: \n1. Pizza \n2. Burger \n3. Pasta \n4. French Fries\n5. Sandwich\n" );
    int choice=0;
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
        printf("Food item-Pizza \n Prize- Rs 239\n");
        break;
        case 2:
        printf("Food item-Burger \n Prize- Rs 129\n");
        break;
        case 3:
        printf("Food item-Pasta \n Prize- Rs 179\n");
        break;
        case 4:
        printf("Food item-French Fries \n Prize- Rs 99\n");
        break;
        case 5:
        printf("Food item-Sandwich \n Prize- Rs 149\n");
        break;
        default :
        printf("INVALID CHOICE");
    }
    
}


