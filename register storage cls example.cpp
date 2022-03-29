#include<stdio.h>
void fun();
int main(){
 register int i;
 for(i=0; i<2000; i++)
 {
 	printf("%d",i);
 }
 return 0;
}
