#include<stdio.h>
int main()
{
	int n=4,i,t,mark=1;
	for(;n<=15;n++) {
		printf("n=%d\n ",n);
		for(i=2;i<=n-1;i++) {
			printf("i=%d\n ",i);
		}
	}
	return 0;
}
