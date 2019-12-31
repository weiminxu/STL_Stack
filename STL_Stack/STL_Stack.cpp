#include <iostream>
#include <stack>
#include <list>
#include <vector>

using namespace std;

int main()
{
	int item;

	stack<int, deque<int>> a;//stack<int> d;
	stack<int, vector<int>> b;
	stack<int, list<int>> c;

	/*
	a.empty();
	a.size();
	a.pop();
	a.top();
	a.push(item);
	*/
	a.push(1);
	a.push(3);
	a.push(5);
	a.push(7);

	int num = a.size();
	//for(int i = 0; i < num; i++)
	//while(a.size() != 0)
	while(a.empty() == false)
	{
		cout << a.top() << endl;
		a.pop();
	}

}