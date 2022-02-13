#include<iostream>
using namespace std;
#define N 55
int main()
{
    int n, i;
    int num[N] = {0,1,2,3,4}; 
	for (i = 5; i < 55; i++)
		num[i] = num[i - 1] + num[i - 3];
    while (cin >> n && n != 0) 
	{
        cout << num[n] << endl;
    }
    return 0;
}
	















