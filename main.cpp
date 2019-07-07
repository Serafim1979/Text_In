#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	char ch;
	int count = 0;
	cin.get(ch);

	while (cin.fail() == false)
	{
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << " characters read\n";

	system("pause");
	return 0;
}