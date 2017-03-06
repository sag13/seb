#include<stdio.h>
#define MAX 6
int value,st[MAX],topa=-1,topb=MAX,i,n;
void push_a();
void push_b();
void pop_a();
void pop_b();
void disp_a();
void disp_b();
main()
{
	printf("1.PUSH A \n 2.POP A \n 3.DISPLAY A \n 4. PUSH B \n 5. POP B \n 6. DISPLAY B \n 5.EXIT \n");
	do
	{
		printf("Enter your choice\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1 : push_a();
				 break;
			case 2 : pop_a();
				 break;
			case 3 : disp_a();
				 break;
			case 4 : push_b();
				 break;
			case 5 : pop_b();
				 break;
			case 6 : disp_b();
				 break;
			default:
				 printf("invalid choice\n");
				 break;
		}
	}while(n!=7);
}
void push_a()
{
	if(topa==topb)
	{
		printf("stack is over flow\n");
	}
	else
	{
		printf("Push A to stack\n");
		scanf("%d",&value);
		topa++;
		st[topa]=value;
	}
}
void pop_a()
{
	if(topa==-1)
	{
		printf("stack is empty\n");
	}
	else
	{
		value=st[topa];
		topa--;
		printf("Pop a from stack %d\n",value);
	}
}
void disp_a()
{
	if(topa<=-1)
	{
		printf("stack is empty\n");
	}
	else
	{
		printf("display the stack \n");
		for(i=topa;i>=0;i--)
		{
			printf("%d\n",st[i]);
		}
	
	
	}
}
void push_b()
{
	if(topb-1==topa)
	{
		printf("stack is over flow\n");
	}
	else
	{
		printf("push b to stack\n");
		scanf("%d",&value);
		topb--;
		st[topb]=value;
	}
}
void pop_b()
{
	if(topb==MAX)
	{
		printf("underflow\n");
	}
	else
	{
		value=st[topb];
		topb--;
		printf("pop b from stack %d\n",value);
	}
}
void disp_b()
{
	if(topb==MAX)
	{
		printf("stack is empty\n");
	}
	else
	{
		printf("display the stack \n");
		for(i=topb;i<MAX;++i)
		{
			printf("%d\n",st[i]);

		}
	}
}
