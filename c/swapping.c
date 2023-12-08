#include<stdio.h>

int main(){
  int a,b;
	printf("enter value x & y: ");
	scanf(" %d %d" ,&a ,&b);
  //a=60
  //b=50
  a=a+b;//110
  b=a-b;//110-60=60
  a=a-b;//110-50=50
	printf("\n result a  %d",a);
	printf("\n result b %d",b);
  return 0;
}