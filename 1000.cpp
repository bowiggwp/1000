#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int i;
	int s = 0;

	for (i = 1; i <= 1000; i++)
	{
		s = s + i;
	}
	cout << "сумма числе от 1 до 1000 = " << s << endl;
	return 0;
}
