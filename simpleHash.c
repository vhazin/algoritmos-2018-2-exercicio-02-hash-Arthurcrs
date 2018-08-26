/*
    Arthur Carlos da Rocha Silva
    hash Hashing problem
    https://www.spoj.com/problems/HASH/
    The simplest way to solve the hash hashing problem
*/

#include <stdio.h>

unsigned long long int a,b,x,n,c,d,m;

unsigned long long int h(unsigned long long int k){
    return ( a * ( x + k ) + b  ) % m ;
}

int main(){
    unsigned long long int t;
    unsigned long long int out = 0;

    scanf("%llu",&t);

    for(unsigned long long int i = 0; i < t; i++){
        scanf("%llu %llu %llu %llu %llu %llu %llu",&a,&b,&x,&n,&c,&d,&m);
        for(unsigned long long int j = 0; j <= n; j++){
            if ( c <= h(j) && h(j) <= d ){
                out = out + 1;
            }
        } // iner for
        printf("%llu\n", out);
        out = 0;
    } // outer for

    return(0);
}