#include<stdio.h>
#define size 5
int top=-1;
int stack[size];
void push();
void pop();
void display();

void main()
{
    int ch;
    while(ch!=4)
            {
                
                printf("\n1.PUSH AN ELEMENT\n2.POP AN ELEMENT\n3.DISPLAY STACK\n4.EXIT\n");
                printf("STACK MENU : ");
                scanf("%d",&ch);
                switch (ch)
                    {
                        case 1 :push();
                                break;
                        case 2 :pop();
                                break;
                        case 3 :display();
                                break;
                        case 4 :exit(0);
                
                        default:printf("\nINVALID ENTRY...!!!!");
                    }
        }
}

void push()
{
    int element;
    if(top==(size-1))
    {
        printf("\nSTACK OVERFLOW\n");
    }
    else 
    {   
        top++;
        printf("\nENTER THE ELEMENT TO BE PUSHED : ");
        scanf("%d",&element);
        stack[top]=element;
    }
}

void pop()
{
    if(top==-1)
    {
        printf("\nSTACK EMPTY");
    }
    else
    {
        printf("\nDELETED ELEMENT IS : %d" ,stack[top]);
        top--;
    }
}

void display()
{   
    if(top==-1)
    {
        printf("\nSTACK IS EMPTY :(");
    }
    else
    {
       printf("\nELEMENTS IN THE STACK : \n");
         
        for(int i=top;i>-1;i--)
        {
            printf("%d  \n",stack[i]);
        }
    }
}

