#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;



int const stackSize = 100;
int Stack[stackSize];
int Top = -1;
int x = 100;


int generateNumber()
{
	static bool first = true;
	if (first)
	{
		srand(time(NULL));
		first = false;
	}
	return 0 + rand() % (1001);
}
	
void Push(int a)
{
	if (Top >= x - 1)

		cout << "Stack is full.." << endl;
	else
	{
		Top++;
		Stack[Top] = a;

	}
}
void Pop(int b)
	{
		if (Top <= -1)
		{
			cout << "Stack is empty..." << endl;
		}
		else {
			cout << "Value :" << Stack[Top] << "GOT deleted." << endl;
			Top--;
		}
	}
void Print(int arr[])
{
	
	
		cout << "Element in the stack are: "<<endl;
		for (int i = 0; i <stackSize; i++)
		{
			cout << Stack[i]<<endl;
			
		}
}



int main()
{
	int searchNumber, numberOrder;
	
	for (int i = 0; i <100; i++)
	{
		Stack[i] = generateNumber();
	}
	Print(Stack);
	cout << "Enter thr number you want to search for..." << endl;
	cin >> searchNumber;
	for (int i= 0; i < stackSize; i++)
	{
		if (searchNumber==Stack[i])
		{
		 cout << "The number you entered is in the Stack and avaible in the order :"<< i <<endl;
		}
		else
			cout << "The number you entered is not in the Stack" << endl;
	}
	
	
	/*void Push();
	void Pop();*/


	return 0;
}