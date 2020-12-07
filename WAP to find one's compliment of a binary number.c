/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//WAP to find one's complement of a binary number
#include <stdio.h>

int main()
{
    int a;
    char binary[10], onesCompliment[10];
    
    printf("Enter binary value: ");
    
    gets(binary);

    for(a=0; a<10; a++)
    {
        if(binary[a] == '1')
        {
            onesCompliment[a] = '0';
        }
        else if(binary[a] == '0')
        {
            onesCompliment[a] = '1';
        }
        
    }

    
        printf("One's complement = %s", onesCompliment);

    return 0;
}