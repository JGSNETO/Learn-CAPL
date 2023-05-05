#include<stdio.h>


void myFunc();

int main(){

    myFunc();
    myFunc();
    return 0;
}
//In this case every execution the result will be 10
//But if we add the static int value. The value 35 will be kept and the first execution will be 10, the others will be 35.
void myFunc(){

    int value =10; //Declaration
    printf("\nValue= %d", value);
    value =35; //Attribution 
}