#include<stdio.h>
#include<stdlib.h>

int main(){
  char arr[16];
  
  printf("Enter your messege\n");
  fgets(arr, 128, stdin); // BOF!!

  return 0;
}
