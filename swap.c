#include <stdio.h>
#include <cs50.h>
#include <assert.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void swap_max(int arr[], int l, int n){
 int max = arr[n];
 int index = n;
for(int i=n; i<l; i++){
 if(arr[i]>max){
  max = arr[i];
  index = i;
 }
}
int p = arr[n];
arr[n] = max;
arr[index] = p;
}

void ssort(int arr[], int l){
 for(int i=0; i<l; i++){
  swap_max(arr,l,i);
 }
}
