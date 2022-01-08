#include <iostream>
using namespace std;

int main()
{
	int n;
  cout<<"幾隻?\n";
	cin>>n;
	int lh[100]={};
	int lw[100]={};
	int min=0x3f3f3f3f;
	int idx=0;

	for(int i=0; i<n; ++i)
	{
		cin>>lh[i];
	}
	for(int i=0; i<n; ++i)
	{
		cin>>lw[i];
		if(lh[i]*lw[i]<min)
		{
			min = lh[i]*lw[i];
			idx=i;
		}
	}
	cout<<lh[idx]<<" "<<lw[idx];
}