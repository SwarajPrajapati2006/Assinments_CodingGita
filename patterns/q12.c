#include<stdio.h>
int main(){
    	printf("enter the number to generate pattern\n");
  int n ;
  scanf("%d",&n);
for(int i = 65;i<=n;i++){
    for(int k=n;k>=i;k--)
    printf(" ");
    
for(int j = 65; j<=i;j++){

    printf("%c",j);}
    printf("\n");}
 return 0;
}