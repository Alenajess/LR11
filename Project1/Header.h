#include <iostream>

using namespace std;

class NoElementsException :public exception
{
public:
	NoElementsException(const char* msg) :
		exception(msg) {}
};

template <typename T>
struct Node 
{
	T a;
	Node* prev;
	Node* next;
};

template <typename T>
class Stack
{
public:
	Stack();
	Stack(T);
	Stack<T>& operator=(Stack&&);
	int GetSize() const;
	void Push(const T);
	void Pop(T&);
	bool HasElements() const;
	void Peek(T&);
private:
	Node<T>* tail;
	Node<T>* next;
	int count;
};