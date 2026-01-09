#include<stdio.h>
void main() {
	int key,pos,flag=0,n,arr[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf(" %d",&key);
	for(int i=0;i<n;i++){
		if(arr[i]==key){
			flag=1;
				pos=i;
			break;
		}
	}
	if (flag == 1) {
		printf("found at position %d\n", pos);
	} else {
		printf("%d not found\n", key);
	}
}
