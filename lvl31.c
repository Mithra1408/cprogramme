 //Question: Find the sum and average of n array elements.
 
 #include <stdio.h>
 int main(){
    int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    float avg = (float)sum / n;
    printf("Sum = %d\nAverage = %.2f", sum, avg);
    return 0;
 }