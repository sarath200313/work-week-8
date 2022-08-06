#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct point{
	int x,y;
	};
	int main()
	{
		int n,i;
		double distance,sum=0;
		printf("enter no of vertices:");
		scanf("%d",&n);
		struct point *p;
		p=(struct point*)malloc(n*sizeof(struct point*));
		for(i=0;i<n;i++){
			printf("enetr coordinates of %dth vertix:",i);
			scanf("%d %d",&p[i].x,&p[i].y);
			}
			for(i=0;i<n-1;i++){
				distance=sqrt(pow((p[i].x)-(p[i+1].x),2)+pow((p[i].y)-(p[i+1].y),2));
				sum=sum+distance ;
				}
				sum=sum+sqrt(pow((p[n-1].x)-(p[0].x),2)+pow((p[n-1].y)-(p[0].y),2));
				printf("sum of siastance is %f",sum);
				return (0);
				}
