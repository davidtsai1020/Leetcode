#include <stdio.h>
#define NUMSIZE 4
int rob(int *nums, int numsSize)
{
    int i=0,j=1,m=0,m1=0;
    while(i<numsSize){
        m=m+nums[i];
        i=i+2;
        m1=m1+nums[j];
        j=j+2;
    }
    if(m>m1){
        return m;
    }
    else
    return m1;
}

int main(void)
{
   int nums[NUMSIZE]={1,2,3,1};
   printf("%d\n",rob(nums,NUMSIZE));
}
