#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2

//˳���Ĵ洢�ṹ
#define SQLMAXSIZE 100
typedef struct _Sqlist
{
	int* base;//����ʵ�����ⶨ������
	int lenth;
}Sqlist;

//��ʼ��
int SqlistInit(Sqlist* L, int length)
{
	L->base = (int*)malloc(sizeof(int) * SQLMAXSIZE);

	//����ʧ��
	if (!L->base)
		return OVERFLOW;

	//����ɹ�
	L->lenth = 0;//��Ϊ�ձ���Ϊ0��
	return OK;
}

//��ȡԪ��
int ElemGet(Sqlist* L, int position, int* e)
{
	if (position<1 || position>L->lenth)
		return ERROR;
	*e = L->base[position - 1];
	return OK;
}

//����Ԫ��
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

//����Ԫ��
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

//ɾ��Ԫ��
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

//���
int SqlistClear(Sqlist* L)
{
	L->lenth = 0;
	return OK;
}

//���Ϊ��
int SqlistEmpty(Sqlist* L)
{
	if (L->lenth == 0)
		return TRUE;
	else
		return FALSE;
}

//����
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



//������Ĵ洢�ṹ
typedef struct _LNode
{
	int data;//������
	struct _LNode* next;//ָ����
}LNode, * LinkList;

//��ʼ��
int ListInit(LinkList L)
{
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
}

//�ж������Ƿ�Ϊ��
int ListEmpty(LinkList L)
{
	//�ǿ�
	if (L->next)
		return 0;

	else
		return 1;
}

//ȡֵ
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

//����
LNode* ElemLocate(LinkList L, int e)
{
	LNode* p = L->next;

	//���ҵ������ص�ַ������,����NULL
	while (p->data != e && p)
		p = p->next;
	return p;

	//���ҵ�������λ����ţ����򣬷���0
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

//����
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

//������Ľ�����ͷ�巨��
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

//β�巨
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

//ɾ��
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

//���
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

//���
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

//����
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



//��βָ���ѭ������ĺϲ�
LinkList Connect(LinkList Ta, LinkList Tb)
{
	LinkList p = Ta->next;
	Ta->next = Tb->next->next;
	free(Tb->next);
	Tb->next = p;
	return Tb;
}



//˫������Ľṹ
typedef struct _DbLinkList
{
	int data;
	struct _DbLinkList* prior;
	struct _DbLinkList* next;
}DbLNode, *DbLinkList;

//��ʼ��
void DLInit(DbLinkList L)
{
	L = (DbLinkList)malloc(sizeof(DbLNode));
	L->prior = NULL;
	L->next = NULL;
}

//����
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

//ɾ��
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



