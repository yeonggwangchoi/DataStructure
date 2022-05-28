#include <stdio.h>

void Listinit(List* plist)
{
	(plist->numofData) = 0;
	(plist->curposition) = -1;
}

void LInsert(List* plist, LData data)
{
	if (plist->numofData >= List_LEN)
	{
		puts("저장이 불가능합니다.");
		return;
	}

	(plist->arr[plist->numofData]) = data;
	(plist->numofData)++;
}

int Fist(List* plist, LData* pdata)
{
	if (plist->numofData == 0)
		return FALSE;
	
	(plist->curposition) = 0;
	*pdata = plist->arr[0];
	return TRUE;
}

int Next(List* plist, LData* pdata)
{
	if (plist->curposition >= (plist->numofData) - 1)
		return FALSE;

	(plist->curposition)++;
	*pdata = plist->arr[plist->curposition];
	return TRUE;
}

LData Remove(List* plist)
{
	int i;
	int rpos;
	int num;
	LData rdata = plist->arr[rpos];

	for (i = 0; i < rpos; i++)
	{
		plist->arr[i] = plist->arr[i + 1];
	}
	(plist->numofData)--;
	(plist->curposition)--;
	return rdata;
}

int LCount(List* plist)
{
	return plist->numofData;
}
