#include <stdio.h>
#include <stdlib.h>//to use exit function
int stack[100],choice,n,top;//n= maximum number of STACK , top = number of stack used
int x; //x is new value to be pushed
void push();
void pop();
void display();

void main(){
    top = -1; /*let us suppose we put 1 ,2 ,3 in --> this order then the top is 2 and in stack[top] there is 3.*/

    printf("\n---------------------------------------------------------------------\n");
    printf("\n Enter The Size of STACK[Max=100]:");
    scanf("%d",&n);

    printf("\n---------------------------------------------------------------------\n");
    printf("The Functions Are: \n\t 1.[PUSH(Available Space:%d)] \n\t 2.[POP] \n\t 3.[Display] \n\t 4.[Exit]\n",n-1-top);
    while(1){
        printf("\nEnter The Choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            default:
            {
                printf("\n---------------------------------------------------------------------\n");
                printf("\nPlease Choose Correct Number[1,2,3,4]:\n");
                printf("\n\t 1.[PUSH (Available Space:%d)] \n\t 2.[POP] \n\t 3.[Display] \n\t 4.[Exit]\n",n-1-top);
                printf("\n---------------------------------------------------------------------\n");
                break;
            }
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                exit(0);
            }

        }
    }
}

void push()
{
    printf("\n---------------------------------------------------------------------\n");
    if(top >= n-1)//n = max number of stack as array starts from 0 i.e top = -1  so stack[n-1] will be max value.
     {
        printf("\nStack is Overflowing\n");
    }
    else
    {
        printf("\nEnter a value to be pushed(Available Space:%d) :",n-1-top);
        top++;//we have to create new space for new value if n(max)=2 and top =1 then after top++ top will be 2 and it will show overflow in next push

        scanf("%d",&x);
        stack[top] = x;
    }
    printf("\n---------------------------------------------------------------------\n");
}

void pop()
{
    printf("\n---------------------------------------------------------------------\n");
    if(top<=-1){
        printf("\nStack is Underflow.\n");
    }
    else{

        printf("The Popped Element is [ %d ].",stack[top]);
        top--;//this removes the top element as top will be top -1 so if we have 3 value then top is 2[0,1,2] so after top-- the 2(lets say address of value) disappears
    }
     printf("\n---------------------------------------------------------------------\n");
}

void display()
{
    printf("\n---------------------------------------------------------------------\n");
    if(top>=0)
        {
        printf("\n The Elements in the STACK are:\n");
        for(int i=top;i>=0;i--)// i =top i.e i=number of space we put value in then if i>= 0 then the loop reaches bottom.
        {
            printf("[ %d ]\n",stack[i]);
        }

    }

    else
    {
        printf("\n The Stack is Empty\n");
    }
   printf("\n---------------------------------------------------------------------\n");
}
