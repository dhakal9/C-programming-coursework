#include <stdio.h>

int sum_x(int x[],int n){
	int i;
	int sum_x=0;
	for(i=0; i<n; i++){
		sum_x=sum_x+x[i];
		printf("%d\n",sum_x);
	}
	return sum_x;
}
void main(){
	int height[] = {1,2,3,4,5,6,7};
	sum_x(height,7);
}


