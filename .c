 //Question: Count how many numbers are even and how many are odd.
 #include <stdio.h>
 int main(){
    int n;
    scanf("%d",&n);
    int arr[n], even = 0, odd = 0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i] % 2 == 0) even++;
        else odd++;
    }
    printf("Even = %d\nOdd = %d", even, odd);
    return 0;
 }