#include <iostream>
#include <string>

using namespace std;

int main()
{
	char s[100];
	int n=0;
	int colors[4]; //RBYG
	int cnt[4]; //RBYG
	for(int i=0;i<4;i++)
	{
		cnt[i]=0;
	}

	cin >> s;
	while(s[n] != NULL)
	{
		n++;
	}
	for(int i=0;i<n;i++)
	{
		if(s[i]=='R')
		{
			colors[i%4] = 0;
		}else if(s[i]=='B'){
			colors[i%4] = 1;
		}else if(s[i]=='Y'){
			colors[i%4] = 2;
		}else if(s[i]=='G'){
			colors[i%4] = 3;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(s[i]=='!')
		{
			cnt[colors[i%4]]++;
		}
	}
	for(int i=0;i<4;i++)
	{
		cout << cnt[i] << " ";
	}
	cout << endl;
	return 0;
}