/**
* cpp program to create class Room and print area and volume.
*@param It is the parameter of the method
*@return Area and Volume
*/

#include<iostream>
#include<string>

using namespace std;

class Room{
	private:
	
	float length;
	float breadth;
	float height;
	
	public:
	Room()
	{
		length = 0.0;
		breadth = 0.0;
		height = 0.0;
	}
	
	Room(float l, float b, float h)
	{
		length = l;
		breadth = b;
		height  = h;
	}
	float getarea(){
		return length*breadth;}
	
	float getvolume(){
		return length*breadth*height;}
	
	
};

int main()
{
	
	float length, breadth, height;
	
	cout<<"Enter length of Room"<<endl;
	cin>>length;
	
	cout<<"Enter breadth of Room"<<endl;
	cin>>breadth;
	
	cout<<"Enter height of Room"<<endl;
	cin>>height;
	
	Room obj1(length, breadth, height);
	
	cout<<"Area of the Room is "<<obj1.getarea()<<endl;
	cout<<"Volume of the Room is "<<obj1.getvolume()<<endl;
	
	return 0;
}
