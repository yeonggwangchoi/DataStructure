void ListInit(List* plist)
{
	Node* head = (Node*)malloc(sizeof(Node));
	plist->head->next = NULL;
	plist->comp = NULL;
	plist->numofData = 0;
}
void LInsert(List* plist, LData)
{

}
void FInsert(List* plist, LData data)
{
	Node* newNode = (Node*)malloc(sizeod(Node));
	newNode->data = data;
	
	newNode->next = plist->head->next;
	plist->head->next = newNode->next;

	(plist->numofData)++;
}
void SInsert(List* plist, LData data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	Node* pred = plist->head;
	newNode->data = data;

	while (pred->next != NULL && plist->comp(data, pred->next->data) != NULL)
		pred = pred->next;

	newNode->next = pred->next;
	pred->next = newNode;

	(plist->numofData)++;
}

int LFirst(List* plist, LData* pdata)
{
	if (plist->head->next == NULL)
		return FALSE;
	plist->before = plist->head;
	plsit->cur = plist->head->next;
	*pdata = plist->cur->data;
}

int LNext(List* plist, LData* pdata)
{
	if (plist->cur->next == NULL)
		return FALSE;
	plist->befor = plist->cur;
	plisr->cur = plist->cur->next;
	*pdata = plist->cur->data;
}

LData LRemove(List* plist)
{
	Node* rpos = plsit->cur;
	LData rdata = rpos->data;

	plist->before->next = plist->cur->next;
	plist->cur = plist->before;
	free(rpos);
	(plist->numofData)--;
	return rdara;l
}

void SInsert(List* plist, LData data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	Node* pred = plist->head;
	newNode->data = data;

	while (pred->next != NULL && plist->comp(data, pred->next->data) != NULL)
		pred = pred->next;

	newNode->next = pred->next;
	pred->next = newNode;

	(plist->numofData)++;
}