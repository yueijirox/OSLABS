#include <stdio.h>
int main(){
        int ZorN=1;
		int sum=0;
		float avg=0;
		int count=0;
	while(ZorN != 0 && ZorN > 0){
		printf("Enter number : ");
		scanf("%d",&ZorN);
		if(ZorN == 0 || ZorN < 0){
			break;
		}
		else{
			sum=sum+ZorN;
			count++;
		}
	}
	avg=sum/count;
	printf("Summation : %d",sum);
	printf("Avg : %f",avg);
	return 0;
}
