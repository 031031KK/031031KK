#include<iostream>
#include<iomanip>
#include<cstdlib> 
#include<cstdio>
#include<string>
#define judge(n) (n >= 0 && n <= 255) ? 1:0
using namespace std;
int main()
{
	char IP[16];
	int a, b, c, d;
	while (cin >> IP)
	{
		if (sscanf_s(IP, "%d.%d.%d.%d", &a, &b, &c, &d) == 4)
		{
			if (judge(a) && judge(b) && judge(c) && judge(d))
				cout << "Y" << endl;
			else
				cout << "N" << endl;
		}
		else
			cout << "N" << endl;
	}
	return 0;
}