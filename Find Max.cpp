#include <iostream>
using namespace std;

void findMax()
{
	int N,n,max;
		cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> n;
		if (i == 1)
		{max = n;}
	    else if (max < n)
		{max = n;}
    }
    cout << max;
}

int main()
{
	findMax();
}
