#include<iostream>
#include<vector>
#include"Data.h"
using namespace std;

	int main
{

   	vector<Data>v1;
	vector<Data>v2= {5,8,22};

	v1.pushback(12);
	v1.pushback(17);
	v2.popback();

    cout<<"v2 has"<<v2.size()<<"elements";

    cout<<"v1 has"<<v1.size()<<"elements";

	Data d0;
	Data d1 = {7,24.83};
	
	d0.setx(15);
	d1.sety(3.14);

	
	for( auto a:v)
  {
	cout<<a.getx()<<" ";	
	cout<<a.gety()<<endl;
  }

	
}


