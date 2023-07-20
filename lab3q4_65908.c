#include <stdio.h>
int main(){
        int ZorN=1;
		int sum=0;
	while(ZorN != 0 && ZorN > 0){
		printf("Enter number : ");
		scanf("%d",&ZorN);
		if(ZorN == 0 || ZorN < 0){
			break;
		}
		else{
			sum=sum+ZorN;
		}
	}
	printf("Summation : %d",sum);
	return 0;
}
