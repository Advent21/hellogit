#ifndef DATA_H
#define DATA_H

	class Data
{
	private:
		int x;
		int y;

	public:
		Data();
		Data(int a ,float b);
		int getx();
		float gety();
		void setx(int a);
		void sety(float b);
};
