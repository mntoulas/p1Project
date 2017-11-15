#include "dancerlist.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME 32  /* megisto megethos onomatos, sumperilambanomenou '\0' */


dancer_t *findDancer(char *name,dancer_t *header){
	dancer_t *temp=NULL;
	
	for(temp=header;temp->next!=NULL;temp=temp->next){
		if(strcmp(name,temp->name)==0){
			return temp;			
		}		
	}
	return NULL;	
}	

dancer_t *switchDancers(dancer_t *dancer,dancer_t *header){
	dancer_t *curr=NULL,*tail=NULL;
	
	for(curr=header;curr->next!=NULL;curr=curr->next){
		if(curr==dancer){
			break;
		}
	}
	for(tail=header;tail->next!=NULL;tail=tail->next){
		
	}
	
	curr->prev->next=NULL;
	curr->prev=NULL;
	
	tail->next=header;
	header->prev=tail;
	
	return curr;	
}

void clearDancers(dancer_t *header){
	dancer_t *curr=NULL;
		
	for(curr=header;curr->next!=NULL;curr=curr->next){
		free(curr->name);
	}
	
}




int main(int argc, char *argv[]) {
	int size;
	char *formatstr=NULL, *name=NULL;
	dancer_t *myList=NULL, *searchDancer=NULL;
	
	if((formatstr=(char*)malloc((MAX_NAME+1)*sizeof(char)))==NULL){
		printf("no memory");
		return(1);		
	}
	
	if ((name=(char*)malloc((MAX_NAME)*sizeof(char)))==NULL){
		printf("no memory");
		return(1);
	}
	
	printf("enter size:\n");
	scanf("%d",&size);
	
	myList=init(size);
	
	print(myList);
	
	
	printf("Name?: ");
	sprintf(formatstr,"%%%ds",MAX_NAME-1);
	scanf(formatstr,name);
	
	searchDancer=findDancer(name,myList);
	if(searchDancer==NULL){
		printf("No dancer found.\n");
	}
	else{		
		myList=switchDancers(searchDancer,myList);
		print(myList);		
	}
	
	clearDancers(myList);
	
	
	free(formatstr);
	free(name);
	return 0;
}
