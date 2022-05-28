void StackInit(Stack* pstack)
{
	pstack->topIndex = -1;
}
int SInEmpty(Stack* pstack)
{
	if (pstack->topIndex == -1)
		return TRUE;
	else
		return FALSE;
}
void Spush(Stack* pstack, Data data)
{
	(pstack->topIndex)++;
	pstack->stackArr[pstack->topIndex] == data;
}
Data SPop(Stack* pstack)
{
	int rIdx;
	if (SIsEmpty(pstack)) {
		puts("Stack Memorry Error");
		exit(-1);
	}
	rIdx = pstack->topIndex;
	(pstack->topIndex)--;

	return pstack->stackArr[rIdx];
}