#include <stdio.h>
#include <stdlib.h>
#define SIZE 16

/*synarthsh 1*/
int check_grade (int *number){
	int grade;
	
	printf("Next grade? \n");
	scanf("%d",&grade);
	
	if((grade>=0) && (grade<=10)){
		
		*number=grade;
		return 1;		
	}
	else {
		return 0;		
	}
	
}

/*synarthsh 2*/
void avg_calc(int table[],int N,double *average){
	int i,sum=0;
	for (i=0;i<N;i++){
		sum=sum+table[i];
	}
	*average= (sum/N);
	
	/*2os tropos 
	 int flag=0,sum;
	 
	 for(i=0;i<N;i++){
		if(flag==0){
		    sum = table[i]/N;
			flag++;
			continue;
         }
         sum = sum +table[i]/N;
		 
	}	 
	
	*average= sum;
	*/
	
	
}



int main(int argc, char* argv[]){
	
	int array[SIZE];
	int i,check,N; 
	double avg;
	
	if (argc<2){
		printf("Add N argument!\n");
		exit(1);
	}
		
	N=atoi(argv[1]);
		
	for(i=0; i<SIZE; i++){           /*initiallize*/
		array[i]=100;
	}
	
	for(i=0; i<SIZE; i++){
		check=check_grade(&array[i]);
		if(check==0){			
			break;
		}
	}
	
	
	
	avg_calc(array,N,&avg);
	printf("Average: %.2lf\n",avg);	
	
	
	
	
	
	
	
	
	
	






	
		return 0;
}	