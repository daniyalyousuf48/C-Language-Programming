#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c;
		
	printf("Enter the value of a,b and c: ");
	scanf("%d %d %d",&a,&b,&c);
	
	float d = b*b - 4*a*c;
	float e = sqrt(d);
	float f = -b+e/(2*a);
	float g = -b-e/(2*a);
	
	if(d<0)
		printf("\nRoots are imaginary!");
	else
	{
		printf("\nRoots are real");
		printf("\nf = %f",f);
		printf("\ng = %f",g);
	}
		
	return 0;
}
