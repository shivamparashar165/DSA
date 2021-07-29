//Structure for creating a new LinkedList
struct Node
{
	int data;
	Node* next;
	Node(x){
		data = x;
		next = NULL;
	}
};

//Creating a LinedList using struct in main()
	Node *head=new Node(10);
	Node *temp1 = new Node(20);
	Node *temp2 = new Node(30);
	head->next=temp1;
	temp1->next=temp2;
