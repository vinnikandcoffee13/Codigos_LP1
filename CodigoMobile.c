#include <stdio.h>
int main(){
	int A, B, C, D;
	scanf("%d %d %d %d", &A, &B, &C, &D);	
	if(A == B+C+D && B+C == D && B == C){
		printf("S");
	}else{
		printf("N");
	}
}