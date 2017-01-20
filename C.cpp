#include <iostream>

using namespace std;

int main()
{
	int n,m,x,y;
	int students;
	int S_add;
	long long k;
	long long min = 0;
	long long max = 0;
	long long S = 0;
	long long asked[10000];

	cin >> n >> m >> k >> x >> y;

	students = n*m;
	S_add = (x-1)*m + y;
	for(long i=0;i<k;i++)
	{
		if((i/students)%2==0)
		{
			asked[i%students]++;
			//cerr << (i/m)%n+1 << " " << i%m << endl;
		}else{
			asked[m*(n-((i/m)%n)-1)+(i%m)]++;
			//cerr << n-((i/m)%n) << " " << i%m << endl;
		}
	}
	min = asked[0];
	max = asked[0];
	S = asked[S_add - 1];
	for(int i=0;i<students;i++)
	{
		if(min > asked[i])
		{
			min = asked[i];
		}
		if(max < asked[i])
		{
			max = asked[i];
		}
	}

	cout << max <<" "<< min <<" "<< S << endl;
	return 0;
}