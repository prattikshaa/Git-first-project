#include <stdio.h>

int main() {

char a;
printf("enter a character:");
scanf("%c",&a);

if(a>=65 && a<=90){
printf("entered charcater is an alphabet");
}
else if(a>=97 && a<=122){
    printf("entered character is an alphabet");
}
else{
    printf("entered character is not an alphabet");
}





return 0;}