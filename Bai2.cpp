#include <stdio.h>
#include <string.h> 

int main(){
	char s1[20];
	printf("Nhap s1: ");
	scanf("%s",s1); 
	char s2[20];
	printf("Nhap s2: ");
	scanf("%s",s2); 
	
	if(strlen(s1)<strlen(s2)){
		char *sub;
		sub=strstr(s2,s1);
		if(sub = NULL){
			printf("No"); 
		}else{
			printf("Yes"); 
		} 
	}
	
	if(strlen(s1)>strlen(s2)){
		char *sub;
		sub=strstr(s2,s1);
		if(sub = NULL){
			printf("No"); 
		}else{
			printf("Yes"); 
		} 
	} 
} 
