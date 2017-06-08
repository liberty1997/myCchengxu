#include<stdio.h>
int main() {
	int A[8] = {88,47,56,25,34,13,92,1};
	for(int i=0;i<8;i++) {
		printf("%d ",A[i]);
	}
	printf("\n");
	for(int i=0;i<8-1;i++) {
		for(int j=i+1;j<8;j++) {
			int temp;
			if(A[i]>A[j]) {
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
		}
	}
	for(int i=0;i<8;i++) {
		printf("%d ",A[i]);
	}
	printf("\n");
	return 0;
}
