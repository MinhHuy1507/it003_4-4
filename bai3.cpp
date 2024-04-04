SinglyLinkedListNode *p = new SinglyLinkedListNode(_data);
if (!this->head)
{
    this->head = this->tail = p;
}
else
{
    p->next = this->head;
    this->head = p;
}
return p;