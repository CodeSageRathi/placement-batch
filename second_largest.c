#include<stdio.h>
#include<limits.h>
void main(){
int n,i;

printf("Enter positive integer:\t");
scanf("%d",&n);

int arr[n];
for(i=0;i<n;i++){
    printf("A[%d]",i);
    scanf("%d",&arr[i]);
}
int largest = INT_MIN;           // largest = 0.24471881
int Second_largest = INT_MIN;    // Second largest = 0.24471881

for (i=0;i<n;i++){
  if(arr[i] > largest){          //  3 > 0.24471881
    Second_largest = largest;    // second largest = 0.24471881
    largest = arr[i];            // largest = 3
    
  }

  else if(arr[i] > Second_largest && arr[i] != largest) {    // 3>
    Second_largest = arr[i]; 
  }
}
printf("Second largest : %d\n",Second_largest);
}