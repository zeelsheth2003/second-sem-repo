#include <stdio.h>
#include <math.h>
int main()
{
    int unitconsumed,costperunit,output=1;
    scanf("%d",&unitconsumed);
    scanf("%d",&costperunit);
    output=pow(unitconsumed,costperunit);
    printf("%d",output);
	return 0;
}