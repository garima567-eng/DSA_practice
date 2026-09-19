//implementing a program to reverse a stack 
#include <stdio.h>
#include <string.h>

char stack[100];
int top=-1;

void push(char ch);
{
    top++;
    stack[top]=ch;
}
char pop()
{
    return stack[top--];
}
int main(){
    char str[100];
    printf("Enter a string:");
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++){
        push(str[i]);

    }
    printf("Reversed string is:");
    while(top!=-1){
        printf("%c",pop());
    }
    return 0;
}