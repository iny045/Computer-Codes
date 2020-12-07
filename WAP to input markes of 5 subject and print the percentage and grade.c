/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//WAP to enter marks of five subjects and print percentage and grade
#include <stdio.h>

int main() 
{
    int a , b, c, d, e, sum , percentage;
    printf ("Enter marks of computer out of hundred:\n");
    scanf ("%d" , &a);
    printf ("Enter marks of english out of hundred:\n");
    scanf ("%d" , &b);
    printf ("Enter marks of physics out of hundred:\n");
    scanf ("%d" , &c);
    printf ("Enter marks of chemistry out of hundred:\n");
    scanf ("%d" , &d);
    printf ("Enter marks of maths out of hundred:\n");
    scanf ("%d" , &e);
    
    sum = a + b + c + d + e;
    percentage = sum/5;
    printf ("percentage scored is %d percent \n" , percentage);
    
    if (percentage < 40)
    {
        printf ("Grade is F");
    }
    else if (percentage >= 40 && percentage < 60 )
    {
        printf ("Grade is E");
    }
    else if (percentage >= 60 && percentage < 70)
    {
        printf ("Grade is D");
    }
    else if (percentage >=70 && percentage <80)
    {
        printf ("Grade is C");
    }
    else if (percentage >= 80 && percentage <90)
    {
        printf ("Grade is B");
    }
    else
    {
        printf ("Grade is A");
    }
    return 0;
}
