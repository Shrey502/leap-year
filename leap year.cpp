#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter year";
	cin>>n;
	if(n%4==0 || n%100==0 || n%400==0){
		cout<<"Given year is leap year";
	}
	else{
		cout<<"given year is not leap year";
	}
}
