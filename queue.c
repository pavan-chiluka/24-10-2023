#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX];
int front=-1;
int rear=-1;
int eneq(int data);
int deq();
int display();
int main()
{
	int data,choice;
	while(1)
	{
		printf("1:eneq 2:deq 3:display 4:exit");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:printf("enter data");
	       	       scanf("%d",&data);
		       eneq(data);
		       break;
		case 2:if(front==-1)
			 {
	                 printf("queue not created");
			 }
		       else
		       {
			       printf("the data deq %d",deq());
	               }
		       break;
		case 3:display();
		       break;

		 case 4:exit(0);
                       break;

                }
	}
}
int eneq(int data)
{
	if(rear==MAX-1)
	{
		printf("queue is full");
	}
	else
	{
		queue[++rear]=data;
		if(front==-1)
		front++;
        }
}
int deq()
{
	int temp=queue[++front];
	if(front==rear+1)
	{
	front=rear=-1;
	}
	return temp;
	
}
int display()
{
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("%d",queue[i]);
	}
}







