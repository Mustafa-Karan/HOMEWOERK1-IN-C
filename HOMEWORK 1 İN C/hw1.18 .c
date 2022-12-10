#include <stdio.h>

int main() {
		//IT WORKS 1 TO 1023
   int num,a,b,c;
	
	
	printf("ENTER A NUMBER TO CONVERT BINARY:");
	scanf("%d",&num);
	b=0;
	c=1;
  while(num>0)
	{
		a=num%2;
		num=num/2;
		b += a*c;
		c=c*10;
	
	}
	

   	printf("\nIN BINARY:%d",b);
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	
	
	
	return 0;
}
