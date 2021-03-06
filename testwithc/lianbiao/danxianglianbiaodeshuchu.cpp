// danxianglianbiaodeshuchu.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "malloc.h"

#define max2 10

typedef struct linkednode
{
	char data;
	struct linkednode *next;

}snode ,*ptr;

void lianbiaoshuchu(ptr p)
{
	printf("链表中的节点序列为：\n");
	while (p != NULL)
	{
		printf("%5c", p->data);
		p = p->next;
	}
}

int main()
{
	ptr head, p, q, last;   // 定义链表，向后插入链表数据
	char x;
	head =last = (ptr)malloc(sizeof(snode));
	last->next = NULL;
	scanf_s("%c",&x);         //第一次输入  
	while (x != '@')
	{
		p = (ptr)malloc(sizeof(snode));
		p->data = x;
		last->next = p;    //在表尾插一个结点p
		p->next = NULL;    //令p指向null，成为最后一个节点
		last = p;			//修改尾指针
		scanf_s("%c", &x);
	}
	p = head; head = head->next; free(p);		//p指向head,使其成为第一个空节点，然后删掉

	lianbiaoshuchu(head);						//调用输出函数
    return 0;
}

