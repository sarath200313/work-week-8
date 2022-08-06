#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct book{
	int book_id;
	char book_title[30];
	char author[30];
	int price;
	};
	void details( int *id, char *title,char *writer,int *cost)
	{
		printf("enter author of the book:");
		scanf("%s",writer);
		printf("price of the book:");
		scanf("%d",cost);
		printf("enter id of book:");
		scanf("%d",id);
		printf("enter title of the book:");
		scanf("%s",title);
		}
		void printdetails(struct book b,int id, char *title,char *writer,int cost)
		{
			printf("id:%d\ttitle:%s\twriter:%s\tprice:%d",id,title,writer,cost);
			}
			int main()
			{
				struct book b;
				details(&b.book_id,b.book_title,b.author,&b.price);
				printdetails(b,b.book_id,b.book_title,b.author,b.price);
				return (0);
				}
