 //Question: Count number of positive, negative, and zero elements.
 #include <stdio.h>
 int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int p=0, neg=0, z=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i] > 0) p++;
        else if(arr[i] < 0) neg++;
        else z++;
    }
    printf("Positive = %d\nNegative = %d\nZero = %d", p, neg, z);
    return 0;
 }