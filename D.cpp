#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n;
	int k;
	int k_d[19];
	int nn=0;
	int kiroku = 0;
	int keta;
	int cnt=0;
	int x=0;
	cin >> n;
	cin >> k;
	
	keta = log10(k) + 1;
	for(int i=0;i<keta;i++)
	{
		k_d[i] = (k/(int)pow(10,i)) % 10;
	}

	for(int j=0;j<keta;j++)
	{
		nn += k_d[j] * pow(10,j-kiroku);
		cerr << nn << endl;
		if(nn>n)
		{
			cerr << "t" << endl;
			nn -= k_d[j] * pow(10,j-kiroku);
			cerr << nn << endl;
			j -= 2;
			kiroku = j+1;
			x += nn*pow(n,cnt);
			nn = 0;
			cnt++;
			continue;
		}
	}
	x += nn*pow(n,cnt);

	cout << x << endl;
	
	return 0;
}