#include<stdio.h>

int main(){
  int x, hra, da, ta,gross_sal;
	printf("enter your salary ");
	scanf("%d",&x);
  
	hra = x*10/100;
	da = x*5/100;
	ta = x*8/100;
	printf("\nhra %d",hra);
	printf("\nda %d",da);
	printf("\nta %d",ta);

	gross_sal = x+hra+da+ta;

	printf("\nGross Salary is %d",gross_sal);


	
  
  return 0;
}