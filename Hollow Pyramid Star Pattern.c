//Hollow Star Pattern#include <stdio.h>int main(){    int a , b;    for (a=1 ; a<=5 ; a++)    {        for (b =1 ; b <= 5 - a ; b++)        {            printf (" ");        }        for (b=1 ; b <= 2*a-1 ; b++)        {            if (a==5 || b==1 || b==(2*a-1))            printf ("*");            else             printf(" ");                    }        printf ("\n");    }    return 0;}