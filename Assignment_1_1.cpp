#include <iostream>
#include <climits>
using namespace std;

void multiply(int v1,int v2);

int main()
{
	
	cout << "Please input two integers" << endl;
	
	for (int i; ++i;)
	{
		int v1, v2;
		cin >> v1 >> v2;
		if (cin.fail())
		{
			cout << "You are WRONG!!!" << endl << "Please input two INTEGERS!!!" << endl;
			cin.clear();
			cin.ignore(INT_MAX,'\n');
		}
		else
		{
			multiply(v1, v2);
			break;
		} 	
	}
	
	
	return 0;
}

void multiply(int v1,int v2)
{
	
	cout << "The product of " << v1 << " * " << v2 << " " << "is" << " " << v1 * v2;
}