#include <stdio.h>
int main(){

int input;
scanf("%d",&input);
for(int a=1;a<=input;a++){ // 1
    for(int k=1;k<=input-a;k++){ //1 2 3
        printf(" ");} //1
  for(int j=1;j<=2*a-1;j++){ 
      
    printf("%c",j);} //*
      
 printf("\n");}

 return 0;
  }