
//WAP to convert Decimal to Hexadecimal number system.
#include<stdio.h>
int main() 
{
  long int decimaln,q;
  int i=1,j,temp;
  char hdn[100];
  printf("Enter any decimal number:");
  scanf("%ld",&decimaln);
  q=dn;
  while(q!=0) 
  {
		temp=q%16;
		if(temp<10)
		   temp=temp+48; 
		else
		   temp=temp+55;
		hdn[i++]=temp;
		q=q/16;
   }
	printf("Equivalent hexadecimal value of decimal number %ld:",decimaln);
	for(j=i-1;j>0;j--)
	printf("%c",hdn[j]);
	return 0;
}
