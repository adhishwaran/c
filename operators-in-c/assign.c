#include <stdio.h>
int main(){
    int a;
    printf("a");
    scanf("%d",&a);
    int b;
    printf("b");
    scanf("%d",&b);
    int c = a+=b;
    int d = a-=b;
    int e = a*=b;
    int f = a/=b;
    printf("%d %d %d %d",c,d,e,f);
    return 0;
}