#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<pthread.h>

double num;
double itration;
double PI;
	double get_value(num,itration){
 		printf("Please Enter the number:\n");
		scanf("%d", &num);
		printf("Please Enter the number of itrations:\n");
		scanf("%d", &itration);
		for(num=0; num<itration;num++){
			PI=(pow(-1,num)*4)/(2*num+1);
		}
	}
main(){
		get_value();
		printf("The vale of Pi is %f",PI);
}
