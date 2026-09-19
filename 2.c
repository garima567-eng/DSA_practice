#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int stack[MAX];
int top=-1;
int push();
int pop();
void display();
int main(){
    int choice;
    while(1){
    printf("\n1:push \n2:pop \n3:display 0:exit\n");
    printf("Enter choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:push();break;
        case 2:pop();break;
        case 3:display();break;
        case 0:exit(1);break;
        default:printf("wrong choice.....");
    }
}
}
int push(){
    int element;
    if(top==MAX-1){
        printf("stack overflow\n");
    }else {
        printf("Enter element to push: ");
        scanf("%d",&element);
        top++;
        stack[top]=element;
    }
    return 0;
}

int pop(){
    if (top==-1){
        printf("Stack underflow\n");
        }else{
            printf("Popped element is %d\n",stack[top]);
            top--;
        }
        return 0;
    }
void display(){
    if(top==-1){
        printf("Stack is empty\n");

    }else {
        printf("Stack elements are below\n");
        for(int i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}
