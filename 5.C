#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct date_admit{
	int date;
	int month;
	int year;
};
struct patient{
	int ipno;
	char name[20];
	struct date_admit dateofadmit;
};
void details(struct patient *p,int n,struct date_admit d1,struct date_admit d2)
{
	int i,flag=0;
	for(i=0;i<n;i++){
		flag=0;
		if (p[i].dateofadmit.date>=d1.date && p[i].dateofadmit.month>=d1.month && p[i].dateofadmit.year>=d1.year){
			flag=1;
		}
		else{
			flag=0;
			continue;
		}
		if (p[i].dateofadmit.year < d2.year){
			flag=1;
		}
		else if(p[i].dateofadmit.year==d2.year && p[i].dateofadmit.month < d2.month){
			flag=1;
		}
		else if(p[i].dateofadmit.year==d2.year && p[i].dateofadmit.month==d2.month && p[i].dateofadmit.date <= d2.date){
			flag=1;
		}
		else{
			flag=0;
			continue;
		}
		if(flag==1){
			printf("ipno:%d\tname:%s\tdateofadmit:%d %d %d\t",p[i].ipno,p[i].name,p[i].dateofadmit.date,p[i].dateofadmit.month,p[i].dateofadmit.year);
		}
	}
}
int main()
{
	int n,i;
	printf("enter no of patients:");
	scanf("%d",&n);
	struct patient p[n];
	for(i=0;i<n;i++){
		printf("\nenter patient details:\n");
		printf("enter ipno:");
		scanf("%d",&p[i].ipno);
		printf("enter name:");
		scanf("%s",p[i].name);
		printf("enter date of admit:");
		scanf("%d %d %d",&p[i].dateofadmit.date,&p[i].dateofadmit.month,&p[i].dateofadmit.year);
	}
	struct date_admit d1,d2;
	printf("search date from:");
	scanf("%d %d %d",&d1.date,&d1.month,&d1.year);
	printf("to date:");
	scanf("%d %d %d",&d2.date,&d2.month,&d2.year);
	details(p,n,d1,d2);
	return 0;
}
