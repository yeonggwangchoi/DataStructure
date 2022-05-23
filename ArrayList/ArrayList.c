#include <stdio.h>
#include "ArrayList.h"

void ListInit(List* plist)
{
	(plist->numofData) = 0;								//int���̹Ƿ� 0���� �ʱ�ȭ
	(plist->curPosition) = -1;							//�迭�� 0���� �����̹Ƿ� -1�� �ʱ�ȭ
}

void LInsert(List* plist, LData data)
{
	if (plist->numofData >= LIST_LEN)					//�������� ������ �迭�� �� ���� ������ �ȵǴϱ� return
	{
		puts("������ �Ұ����մϴ�.");
		return;
	}

	plist->arr[plist->numofData] = data;				//�迭�� ������ ����
	(plist->numofData)++;								//������ ���� ����
}

int LFirst(List* plist, LData* pdata)
{
	if (plist->numofData == 0)							//������ ������ 0�̸� �ϳ��� ���°��̹Ƿ� FALSE
		return FALSE;

	(plist->curPosition) = 0;							//curPosition ù��° �ε����� ����Ų��.
	*pdata = plist->arr[0];
	return TRUE;
}

int LNext(List* plist, LData* pdata)					
{
	if (plist->curPosition >= (plist->numofData) - 1)	//curPosition�� ������ �ε������� Ŭ�� FALSE
		return FALSE;
	(plist->curPosition)++;								//curPosition�� �����ϴ� ������ �ε��� ����
	*pdata = plist->arr[plist->curPosition];			
	return TRUE;
}

LData LRemove(List* plist)
{
	int rpos = plist->curPosition;						//rpos�� curPosition�� ����Ű�� �� ����
	int num = plist->numofData;							//������ ���� num�� ����
	int i;
	LData rdata = plist->arr[rpos];						//rdata�� rpos�ε����� �� ����

	for (i = rpos; i < num - 1; i++)
		plist->arr[i] = plist->arr[i + 1];				//��ĭ�� ����

	(plist->numofData)--;								//������ ���� --
	(plist->curPosition)--;								//������ġ --
	return rdata;										//��� ��ȯ
}

int LCount(List* plist)
{
	return plist->numofData;
}
