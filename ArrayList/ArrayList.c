#include <stdio.h>
#include "ArrayList.h"

void ListInit(List* plist)
{
	(plist->numofData) = 0;								//int형이므로 0으로 초기화
	(plist->curPosition) = -1;							//배열은 0부터 시작이므로 -1로 초기화
}

void LInsert(List* plist, LData data)
{
	if (plist->numofData >= LIST_LEN)					//데이터의 갯수가 배열의 수 보다 많으면 안되니까 return
	{
		puts("저장이 불가능합니다.");
		return;
	}

	plist->arr[plist->numofData] = data;				//배열에 데이터 저장
	(plist->numofData)++;								//데이터 갯수 증가
}

int LFirst(List* plist, LData* pdata)
{
	if (plist->numofData == 0)							//데이터 갯수가 0이면 하나도 없는것이므로 FALSE
		return FALSE;

	(plist->curPosition) = 0;							//curPosition 첫번째 인덱스를 가리킨다.
	*pdata = plist->arr[0];
	return TRUE;
}

int LNext(List* plist, LData* pdata)					
{
	if (plist->curPosition >= (plist->numofData) - 1)	//curPosition이 마지막 인덱스보다 클때 FALSE
		return FALSE;
	(plist->curPosition)++;								//curPosition이 참조하는 데이터 인덱스 증가
	*pdata = plist->arr[plist->curPosition];			
	return TRUE;
}

LData LRemove(List* plist)
{
	int rpos = plist->curPosition;						//rpos에 curPosition이 가리키는 값 대입
	int num = plist->numofData;							//데이터 갯수 num에 대입
	int i;
	LData rdata = plist->arr[rpos];						//rdata에 rpos인덱스의 값 대입

	for (i = rpos; i < num - 1; i++)
		plist->arr[i] = plist->arr[i + 1];				//한칸씩 당기기

	(plist->numofData)--;								//데이터 갯수 --
	(plist->curPosition)--;								//참조위치 --
	return rdata;										//지운값 반환
}

int LCount(List* plist)
{
	return plist->numofData;
}
