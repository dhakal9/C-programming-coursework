#include <stdio.h>
#include <stdlib.h>
#include <string.h>




void linear_regression(filename){
	float str1[150];
	const char s[2]=",";
	float x[150],y[150];
	int j=0;
	char *token;
	FILE* in_file;
	in_file =fopen(filename,"r");
	if(in_file==NULL){
		printf("cannot load");
		
	}
	else{
		char str[150];
		while(fgets(str,sizeof str,in_file)!=NULL){
			int i;
			token=strtok(str,s);
			x[j]=atoi(token);
				
			token=strtok(NULL,s);
			y[j]=atoi(token);
			j++;
			
		
			}
		}
		
		int i;
		float A;
		float B;
		float sum_x=0;
		float sum_xy=0;
		float sum_y=0;
		float sum_x_squared=0;
		for(i=0;i<j;i++){
			sum_x+=x[i];
			sum_y+=y[i];
			sum_xy+=x[i]*y[i];
			sum_x_squared+=x[i]*x[i];
		}
		float denominator=(j*sum_x_squared-sum_x*sum_x);
		A=(sum_y*sum_x_squared-sum_x*sum_xy)/denominator;
		B=(j*sum_xy-sum_x*sum_y)/denominator;
		printf("for %s : \nnumber of data: %d\n",filename,j);
	
		printf("Y = %f*x + %f\n\n",B,A);
		
		
		
		
	
	
}

void main(){
	char* filename1="LRData\\datasetLR1.txt";
	char* filename2="LRData\\datasetLR2.txt";
	char* filename3="LRData\\datasetLR3.txt";
	char* filename4="LRData\\datasetLR4.txt";	
	linear_regression(filename1);
	linear_regression(filename2);
	linear_regression(filename3);
	linear_regression(filename4);
	
	
	
	
}


