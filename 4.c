//reversing a word using stack
#include <stdio.h>
#include <string.h>
#define MAX 100

char stack[MAX];
int top=-1;
void push(char ch)
{
    if(top==MAX-1){
        printf("Stack overflow\n");
        return;

    }
    stack[++top]=ch;
}

char pop(){
    if(top<0){
        return '\0'; // Return null character if stack is empty

    }
    return stack[top--];
}

int isEmpty(){
    return top==-1;
}

void ReverseWords(char *sentence){
    int length=strlen(sentence);
    for(int i=0;i<length;i++){
        if(sentence[i]!=''&& sentence[i]!='\0'{
            push(sentence[i]);
        })
    }
}
