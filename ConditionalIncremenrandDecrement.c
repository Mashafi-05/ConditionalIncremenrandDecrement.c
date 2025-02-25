//Make a program that takes 2 inputs N, i or d. If input is i then incriment the value of N and if input is d then decrement the value of N.
//Input           Output
// 4 i                5
// 9 i                10
// 8 d                7
// 3 d                4

#include <stdio.h>
int main(){

int N; 
char c;
scanf("%d %c",&N,&c);
if(c=='i'){
    N++;
}
else{
    N--;
}
    printf("%d",N);




    return 0;
}



