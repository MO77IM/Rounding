#include <stdio.h>
//Rounding
int main(){
	long devidend, devisor;
	long result;
	printf("devidend:"); 
	scanf("%ld", &devidend);
    printf("devisor:");
    scanf("%ld", &devisor);
	if(devidend%devisor < devisor/2.0)
	  result = devidend/devisor;
	else 
	  result = devidend/devisor+1;
	printf("The result is %ld\n", result);
	return 0;  
}


