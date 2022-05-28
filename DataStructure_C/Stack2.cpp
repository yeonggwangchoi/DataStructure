void STackInIt(Stack* pstack)
{
	pstack->topIndex = -1;
}
int SIsEmpty(Stack* pstack)
{
	if (pstack->topIndex == -1)
		return TRUE;
	else
		return FALSE;
}
void Spush(Stack* pstack, Data data)
{
	(pstack->topIndex)++;
	pstack->stackArr[pstack->topIndex] = data;
}
void SPop(Stack* pstack)
{
	int rIdx;

	if (SIsEmpty(pstack))
	{
		exit(-1);
	}
	rIdx = pstack->topIndex;
	return pstack->stackArr[rIdx];
}
Data SPeek(Stack* pstack)
{
	if (SIsEmpty(pstack))
		exit(-1);
	return pstack->stackArr[pstack->topIndex];
}