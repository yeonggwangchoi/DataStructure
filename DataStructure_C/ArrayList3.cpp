void ListInit(List* plist)
{
	plist->numofData = 0;
	plist->curPosition = -1;
}

void ListInsert(List* plist, Ldata data)
{
	if (plist->numofData >= LIST_LEN)
	{
		puts("저장 불가");
		return;
	}
	arr[plist->numofData] = data;
	(plist->numofData)++;
}

int LFirst(List* plist, LData* pdata)
{
	if (plist->numofData == 0)
		return FALSE;
	(plist->curPosition) = 0;
	*pdata = plist->arr[0];
	return TRUE;
}

int LNext(List* plist, LData* pdata)
{
	if (plist->curPosition >= (plist->numofData)-1)
		return FALSE;
	(plist->curPosition)++
	*pdata = plist->arr[plist->curPosition];
	return FALSE;
}

LData LRemove(List* plist)
{
	int rpos = plist->curPosition;
	int num = plist->numofData;
	int i;
	LData rdata = plist->arr[rpos];

	for (i = rpos; i < num - 1; i++)
		plist->arr[i] = plist->arr[i + 1];

	(plist->numofData)--;
	(plist->curPosition)--;
	
	return rdata;
}