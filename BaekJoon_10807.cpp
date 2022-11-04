#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int num = 0;
	vector<int> NumList;
	int FindNum = 0;

	cin >> num;
	for (int i = 0; i < num; i++)
	{
		int tmp = 0;
		cin >> tmp;
		NumList.push_back(tmp);
	}
	cin >> FindNum;

	int result = 0;
	for (int i = 0; i < num; i++)
	{
		if (NumList[i] == FindNum)
		{
			result++;
		}
	}

	cout << result;
}
