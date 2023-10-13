#include<stdio.h>
#include<stdlib.h>

int main()
{
    long long int n,m,a,total;
    double height, width;
    scanf("%lld%lld%lld",&n,&m,&a);
    height=ceil((double)n/(double)a);
    width=ceil((double)m/(double)a);
    total=height*width;
    printf("%lld",total);
}

