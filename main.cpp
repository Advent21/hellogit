#include<iostream>
#include<vector>
#include"Data.h"
using namespace std;

	int main
{

   	vector<Data>v;
	
	v.push_back({7,21.01});

	Data d;
	
	
	d.setx(10);
	d.sety(12.10);
	v.push_back(d);


	for(auto a:v)
   {
	cout<<a.getx()<<" ";
	cout<<a.gety()<<endl;
}


