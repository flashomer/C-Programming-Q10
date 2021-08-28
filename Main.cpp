#include<stdio.h>

void GCD(int x,int y){
	int a = x%y;
	if(a==0){
		printf("%d",y);
	}
	else{
		GCD(y,a);
	}
}



int main(){
	
	int M,N;
	printf("give me your M and N value for GCD(M,N):");
	scanf("%d %d",&M,&N);
	
	GCD(M,N);
	
	
	
	
	return 0;
}
