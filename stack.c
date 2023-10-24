#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push(int data);
int pop();
int peek();
int display();
int main()
{
	int data,choice;
	while(1)
	{
		printf("1:push,2:pop,3:peek 4:exit 5:display");
		scanf("%d",&choice);
                switch(choice)
		{
			case 1:printf("enter a data");
			       scanf("%d",&data);
			       push(data);
			       break;
			        
			case 2:if(top==-1)
			       {
				       printf("stack not created");
		               }
			       else
			       {
			      printf("the data poped %d\n", pop());
			       }
			       break;

			case 3:if(top==-1)
				{
					printf("stack is not created");
				}
			       else
				{
			      printf("the top of the data %d\n",peek());
			        }
			       break;
			 case 4:exit(0);

			case 5:display();
                }
	}
}
       void push(int data)
	{
	if(top==MAX-1)
	{
	printf("stack is full");
        }
	else
	{
	 stack[++top]=data;
	}
	}	
	int pop()
	{
	stack[top--];
	}
	int peek()
	{
	stack[top];
	}
        int display()
	{
		int i;
		for(i=top;i>0;i--)
		{
			printf("%d",stack[i]);
		}
	}

			 		
