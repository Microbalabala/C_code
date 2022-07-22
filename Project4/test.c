#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2

//顺序表的存储结构
#define SQLMAXSIZE 100
typedef struct _Sqlist
{
	int* base;//根据实际问题定义类型
	int lenth;
}Sqlist;

//初始化
int SqlistInit(Sqlist* L, int length)
{
	L->base = (int*)malloc(sizeof(int) * SQLMAXSIZE);

	//分配失败
	if (!L->base)
		return OVERFLOW;

	//分配成功
	L->lenth = 0;//置为空表（表长为0）
	return OK;
}

//获取元素
int ElemGet(Sqlist* L, int position, int* e)
{
	if (position<1 || position>L->lenth)
		return ERROR;
	*e = L->base[position - 1];
	return OK;
}

//查找元素
int ElemLocate(Sqlist* L, int e)
{
	int i = 0;
	for (i = 0; i < L->lenth; i++)
	{
		if (e == L->base[i])
			return i + 1;
	}
	return 0;
}

//插入元素
int ElemInser(Sqlist* L, int position, int e)
{
	int i;
	if (position<1 || position>L->lenth + 1)
		return ERROR;
	if (L->lenth == SQLMAXSIZE)
		return OVERFLOW;
	for (i = L->lenth - 1; i >= position - 1; i--)
	{
		L->base[i + 1] = L->base[i];
	}
	L->base[position - 1] = e;
	L->lenth++;
	return OK;
}

//删除元素
int ElemDelete(Sqlist* L, int position, int* e)
{
	int i;
	if (position<1 || position>L->lenth)
		return ERROR;
	for (i = position; i < L->lenth; i++)
	{
		L->base[i - 1] = L->base[i];
	}
	L->lenth--;
	return OK;
}

//清空
int SqlistClear(Sqlist* L)
{
	L->lenth = 0;
	return OK;
}

//检查为空
int SqlistEmpty(Sqlist* L)
{
	if (L->lenth == 0)
		return TRUE;
	else
		return FALSE;
}

//销毁
int SqlistDestroy(Sqlist* L)
{
	if (!L->base)
		return ERROR;
	else
	{
		free(L->base);
		L->base = NULL;
		return OK;
	}
}



//单链表的存储结构
typedef struct _LNode
{
	int data;//数据域
	struct _LNode* next;//指针域
}LNode, * LinkList;

//初始化
int ListInit(LinkList L)
{
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
}

//判断链表是否为空
int ListEmpty(LinkList L)
{
	//非空
	if (L->next)
		return 0;

	else
		return 1;
}

//取值
int ELemGet(LinkList L, int position)
{
	LNode* p = L->next;
	int i = 1;
	if (position < 1 || !p)
		return ERROR;

		while (i != position)
		{
			p = p->next;
			i++;
		}
		return p->data;
}

//查找
LNode* ElemLocate(LinkList L, int e)
{
	LNode* p = L->next;

	//若找到，返回地址；否则,返回NULL
	while (p->data != e && p)
		p = p->next;
	return p;

	//若找到，返回位置序号；否则，返回0
	/*int position = 0;
	while (p->data != e && p)
	{
		p = p->next;
		position++;
	}
	if (p)
		return position;
	else
		return 0;*/
}

//插入
int ListInsert(LinkList L, int position, int e)
{
	LinkList p = L;
	int i = 0;
	while (p && i < position-1)
	{
		p = p->next;
		i++;
	}
	if (!p || i > position - 1)
		return ERROR;
	LNode* pnew = (LNode*)malloc(sizeof(LNode));
	pnew->data = e;
	pnew->next = p->next;
	p->next = pnew;
	return OK;
}

//单链表的建立（头插法）
void L_HCreate(LinkList L, int n)
{
	int i;
	L = (LNode*)malloc(sizeof(LNode));
	L->next = NULL;
	for (i = n; i > 0; i--)
	{
		LNode* p = (LNode*)malloc(sizeof(LNode));
		scanf("%d", &p->data);
		p->next = L->next;
		L->next = p;
	}
}

//尾插法
void L_TCreate(LinkList L, int n)
{
	LinkList ptail = L;
	int i;
	for (i = 0; i < n; i++)
	{
		LNode* pnew = (LNode*)malloc(sizeof(LNode));
		int data;
		scanf("%d", &data);
		pnew->data = data;
		pnew->next = NULL;
		ptail->next = pnew;
		ptail = pnew;
	}
}

//删除
int ListDelete(LinkList L, int position, int *e)
{
	LinkList p = L;
	int i = 0;
	while (p && i < position - 1)
	{
		p = p->next;
		i++;
	}
	if (!p || !p->next || i > position - 1)
		return ERROR;
	LNode* pfree = p->next;
	*e = pfree->data;
	p->next = p->next->next;
	free(pfree);
	pfree = NULL;
	return OK;
}

//求表长
int LListLength(LinkList L)
{
	LNode* p = L->next;
	int i = 0;
	while (p)
	{
		i++;
		p = p->next;
	}
	return i;
}

//清空
int ListClear(LinkList L)
{
	LNode* p, * q;
	p = L->next;
	while (p)
	{
		q = p->next;
		free(p);
		p = q;
	}
	free(p);
	p = NULL;
	free(q);
	q = NULL;
	L->next = NULL;
	return OK;
}

//销毁
int ListDestroy(LinkList L)
{
	LNode* p;
	while (L)
	{
		p = L;
		L = L->next;
		free(p);
		p = NULL;
	}
	return OK;
}



//带尾指针的循环链表的合并
LinkList Connect(LinkList Ta, LinkList Tb)
{
	LinkList p = Ta->next;
	Ta->next = Tb->next->next;
	free(Tb->next);
	Tb->next = p;
	return Tb;
}



//双向链表的结构
typedef struct _DbLinkList
{
	int data;
	struct _DbLinkList* prior;
	struct _DbLinkList* next;
}DbLNode, *DbLinkList;

//初始化
void DLInit(DbLinkList L)
{
	L = (DbLinkList)malloc(sizeof(DbLNode));
	L->prior = NULL;
	L->next = NULL;
}

//插入
void DLInsert(DbLinkList L, int position, int e)
{
	int i = 0;
	DbLinkList p = L;
	while (i < position - 1 || p->next)
	{
		i++;
		p = p->next;
	}
	DbLNode* pnew = (DbLNode*)malloc(sizeof(DbLNode));
	pnew->data = e;
	pnew->next = p->next;
	p->next->prior = pnew;
	pnew->prior = p;
	p->next = pnew;
}

//删除
void DLDelete(DbLinkList L, int position, int* e)
{
	int i = 0;
	DbLinkList p = L;
	while (i < position - 1 || p->next)
	{
		i++;
		p = p->next;
	}
	DbLNode* pfree = p->next;
	*e = pfree->data;
	p->next = p->next->next;
	p->next->next->prior = p;
	free(pfree);
	pfree = NULL;
}



