//implementing stack 
#include <stdio.h>
#define MAX 5

int main() {
    int choice;
    int stack[MAX];
    int top=-1;
    printf("\n1:push \n2:pop \n3:display 0:exit\n");
    while(1)
    {
        printf("\nEnter Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push(stack,&top);break;
            case 2:pop(stack,&top);break;
            case 3:display(stack,top);
            case 4:exit(1);break;
            default:printf("wrong choice.....");
        }
    }
    return 0;
}

void push(int stack[],int *top){
    int element;
    if(*top==MAX-1){
        printf("Stack overflow...\n");
    }
    else{
        *top=*top+1;
        printf("Enter the element:");
        scanf("%d",&element);
        stack[*top]=element;
    }
}

void display(int stack[], int *top){
    int i;
    if(*top==-1){
        printf("Stack is empty\n");
    }else{
        printf("Stack elements are below\n");
        for(i=*top;i>=0;i--)
        printf("%d\n",stack[i]);
    }
}

void pop(int stack[], int *top){
    if(*top==-1){
        printf("Stack underflow....\n");
    }else{
        printf("Popped element is %d\n",stack[*top]);
        *top=*top-1;
    }
}