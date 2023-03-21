#pragma once
//список - совокупность элементов, где каждый элемен знает адресс следуещего элемента

struct Node {
	int data;
	Node* next;
};


class LinkedList {
private:
	Node* head;

	bool isEmpty() { return head == nullptr; }

public:
	LinkedList();

	int size();

	void print();

	void push(int value);

	void append(int value);

	void insert(int position, int value);

	void pop();

	void find(int value);

	void remove(int position);

	~LinkedList();
};
