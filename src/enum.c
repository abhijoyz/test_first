/*
 * enum.c
 *
 *  Created on: Apr 23, 2020
 *      Author: Hp
 */
//pedef int uint;
#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>
#if 0
 enum state{SET=0 ,
	        RESET ,
	        TOGGLE};

typedef enum state bit_op;
//To set , clear , or toggle any particular bit in a number
int fun (int num , bit_op b_operation , int pos)
{
	if(b_operation == SET)
	{
		num = num | (1 << pos);
		return num;
	}

	else if(b_operation == RESET)
		{
			num = num & (~(1 << pos));
			return num;
		}
	else if(b_operation == TOGGLE)
		{
			num = num ^ (1 << pos);
			return num;
		}
	else
		return -1;
}

int main()
{
	int num = fun(10 , SET , 0);
	printf("num = %d\n",num);
	return 0;
}

#endif

#if 0
//structure padding. 32 bit
struct packet{


	char b;
	int a;
	float c;
};

int main()
{

	printf("sz of structure = %I64d\n",sizeof(struct packet));
	printf("offsetof a = %I64d\n",offsetof(struct packet,a));
	printf("offsetof b = %I64d\n",offsetof(struct packet,b));
	printf("offsetof c = %I64d\n",offsetof(struct packet,c));
	return 0;
}
#endif

#if 0
int main()
{
		struct packet  //struct packet *p2;
		{
			int a;
			char c;
			int* p;
		}  *p2;  // int x ; int *p;  p = &x;
		//p2 = &p1;
		p2 = (struct packet*)malloc(sizeof(struct packet));
		//printf("Enter the values\n"); //. opeartor is used to access the members of structure using non pointer structure variable
		//scanf("%d %c",&p1.a,&p1.c);
		//printf("%d\n%c\n",p1.a,p1.c);
		scanf("%d %c",&p2->a,&p2->c);
				printf("%d\n%c\n",p2->a,p2->c);
				free(p2);
		return 0;
}

#endif

#if 1
int main()
{
		struct packet  //struct packet *p2;
		{
			unsigned char id ;
			char name[20];

		}  *p2,*temp ;
		int i = 0 , n = 0;
		p2 = (struct packet*)malloc(4*sizeof(struct packet));
		if(p2 == NULL)
		{
			printf("Malloc Failed\n");
			return -1;
		}
		printf("sz of structure = %I64d\n",sizeof(struct packet));
		temp = p2;

		printf("Enter the data: id and Name\n");
		for(i = 0 ; i<4 ; i++)
		{
			scanf("%d",(int*)&temp->id);
			getchar();
			scanf("%s",(char*)&temp->name);
			temp++;
		}
		temp = p2;
		printf("Entered Record is:\n");
		for(i = 0 ; i<4 ; i++)
		{
			printf("%d\n",temp->id);

			printf("%s\n",temp->name);
			temp++;
		}
		temp = p2;
		/*printf("Enter the id then get participant name\n");
		scanf("%d",&n);
		while(temp->id != n)
		{
			temp++;
		}
		printf("id = %d\tName = %s\n",temp->id,temp->name);
		temp = p2;*/
				free(p2);
				free(temp);
		return 0;
}

#endif














