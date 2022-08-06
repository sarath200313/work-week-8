#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct bank{
	int acc_no;
	char acc_type[100];
	int balance;
	};
	void search(struct bank *b,int account)
	{
		int i,flag=0;
		for(i=0;i<5;i++){
			if(b[i].acc_no==account){
				flag=1;
				printf("yes, account exist!\tbalance:%d\taccount type:%s",b[i].balance,b[i].acc_type);
				break;
				}
				}
				if (flag==0)
				printf("acc does not exist!");
				}
				int main()
				{
					struct bank b[5];
					int i,acc;
					printf("search:");
					scanf("%d",&acc);
					for(i=0;i<5;i++){
						printf("\nenter deatils of %dth account\n",i);
						printf("enter account no:");
						scanf("%d",&b[i].acc_no);
						printf("enter account type:");
						scanf("%s",b[i].acc_type);
						printf("enter balance:");
						scanf("%d",&b[i].balance);
						}
						search(b,acc);
						return 0;
						}
