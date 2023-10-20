#include<iostream>
using namespace std;
int main()
{
	int num, sum=0, i;
	cout<<"Enter a postive number"<<endl;
	cin>>num;
	while(num)
	{
		if(num==0)
		{
			break;
		}
		if(num<0)
		{
			cout<<" please enter a postive number"<<endl;
			cin>>num;
			continue;
		}
		sum=sum+num;
		cin>>num;
	}
	cout<<" the sum of the numbers is ="<<sum<<endl;
	return 0;
}