
#include <stdio.h>

int main() {
   int n,sum=0;
   printf("Enter size of array");
   scanf("%d",&n);
   int arr[n];
   printf("Enter array elements");
   for (int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   
   
   for(int j=0;j<n;j++)
   {
       sum=sum+arr[j];
   }
   printf("Sum of array is %d \n",sum);

    return 0;
}
