#include<iostream>
using namespace std;
int main()
{
	int n,a[50],max,i;
	cin>>n;
	for(i=0;i<=n;i++)
	{
		cin>>a[i];
	           
	}
	max=a[0];
	
	    for(i=1;i<=n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
                cout<<max;
	
	return 0;
}
