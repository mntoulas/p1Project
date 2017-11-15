#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 50
#define SENTECES 10

int main(int argc, char*argv[]){
	
	int i,flag=0,counter = 0,buff=0;
	char * array[SENTECES];
	char input[SIZE];
	
	for (i=0 ;i<SENTECES ;i++){               //arxikopoihsh
		array[i]=NULL;
	}	
	
	printf("Enter text: ");
	scanf("%49s",input);
	for (i=0 ;i<SIZE-1 ;i++){ 
		if (input[i]=='.'|| input[i]== '\0'){
			if (input[i]== '\0'){
				buff++;
			}
			array[counter]=(char *) malloc((i-flag) * sizeof(char));	
			if (array[counter] == NULL){
				printf("no memory ");
				return 1;
			}
			input[i]= '\0';
			strcpy(array[counter] ,&input[flag]); 
			counter++;
			flag=i+1;
		}
		if ((counter  == SENTECES) || (buff !=0)){
				break;
			}
	}
	
	for(i=0; i<counter-1; i++){
		printf("%s\n",array[i]);
	}	
	for(i=0; i<counter; i++){
		free(array[i]);
	}	
	
	
	
	
	
	
	
	
		return (0);
}	


