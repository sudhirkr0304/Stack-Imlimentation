#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5
void push(int) ;
int isfull(void);
int pop(void) ;
int isempty(void) ;
int peak(void) ;
void traverse(void) ;
int stack[CAPACITY],top=-1;
int main()
{

	while(1)
	{
		
	     int ch,item;
	     printf("1. push \n");
	     printf("2. pop\n");
	     printf("3. peak\n");
	     printf("4. transverse\n");
	     printf("5. quit\n");
	     printf("\n Enter your choice :");
	     scanf("%d",&ch);
         switch(ch)
		 {
		 	case 1: printf("enter an element :");
		 	        scanf("%d",&item);
			        push(item) ;
			        break;
		 	         
		 	case 2:item=pop() ;
		 	       if(item==0)
		 	       {
		 	       	printf("stack is empty\n");
					}
					else
					{
						printf("popped item : %d\n",item);
					}
					break;
		 	case 3:item=peak();
		 	       if(item==0)
		 	       {
		 	       	printf("stackis empty\n");
					}
					else
					{
						printf("peak item : %d\n",item);
					}
					break;
		 	case 4:traverse();
		 	        break;
		 	case 5:exit(0);
		 	default : printf("wrong input\n\n");
		    	
		 }
     }
     
		 	
}
void push(int item)
{
	if(isfull())
	{
	printf("stack is overflow\n");	
	}
	else
	{
	top++;
	stack[top]=item;
	printf("%d  pushed\n\n",item);	
	}
}
int isfull(void)
{
	if(top==CAPACITY-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int pop(void)
{
	if(isempty())
	{
	return 0;
	}
	else
	{
	return stack[top--]	;
	}
}
int isempty(void)
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int peak(void)
{
	if(isempty())
	{
	printf("stack is empty\n");	
	}
	else
	{
	return stack[top];	
	}
}
void traverse(void)
{
	if(isempty())
	{
		printf("stack is empty\n");
	}
	else
	{
		int i;
		for(i=0;i<=top;i++)
		{
			printf("%d ",stack[i]);
		}
		printf("\n");
	}
}




















