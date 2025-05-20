#include<stdio.h>
void primenumber(int n){
    int flag=0;
    for(int i=2;i<n-1;i++){
        if(n%i==0){
            flag++;
            break;
        }
    }
    if(flag==0) printf("\n %d is a prime number",n);
    else printf("\n%d is not a prime number",n);
}
int main(){
    int x;
    scanf("%d",&x);
    primenumber(x);
}