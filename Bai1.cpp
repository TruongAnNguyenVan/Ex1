#include <stdio.h>
 
int main(){
	int flag=0; 
	int arr[n];
	printf("Nhap do dai cua mang: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		printf("Nhap mang: ");
		scanf("%d",arr[i]); 
	}
	
	for(int i=0;i<n;i++){
		for(int j=1;j<=n;j++){
			if(arr[i]%j!=0){
				printf(arr[i]);
				flag = 1; 
			}
		} 
	}
	
	if(flag = 1){
		printf("No prime number"); 
	} 
} 
