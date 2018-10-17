#include<iostream>
#include<vector>
#include"Data.h"
using namespace std;

	int main()
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
		
	void bubblesort(auto& Data)
	{
	cout<<endl<<"bubble sort"<<endl<<"---------------------"<<endl;

	for ( int i = 0 ; i < Data.size() ; i++)
			{
		for ( int j = 0 ; j < Data.size()-1 ; j++)
			if ( Data [ j+1] < Data [ j ] )
			swap ( Data [ j +1] , Data [ j ] ) ;

	print(Data);
			}
	}
		bubblesort(v);
		for(auto i : v)
			cout<<i<<" ";
			cout<<endl;
}


