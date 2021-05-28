/*------------------------------------------------------
【程序改错】
--------------------------------------------------------

题目：定义一个基类	A, 又定义两个公有继承的派生类	D1 和 D2, 
定 义一个普通函数	print_info() 形参为指向对象的指针	,
它 们的调用都采用动态联编	,将 A 类中的 print() 定义为虚函
数 ,并有如下输出	: 
The A version A
The D1 info: 4	version 1 
The D2 info:100 version A

--------------------------------------------------------
注意：不可以增加或删除程序行，也不可以更改程序的结构。
------------------------------------------------------*/




#include <iostream.h> 
class	A
{

public:

	A()	{
		ver='A';
	}
	void	print() {
		cout<<"The A version	"<<ver<<endl;
	}

protected:
	char ver;
};

class	D1 {
	public:
		D1(int		number)	{
			info=number;
			ver='1';
		} void	print() {
			cout<<"The D1 info:	"<<info<<"	version	"<<ver<<endl;
		} private:
		int	info;
};

class	D2:public A {
	public:
		D2(int		number)	{
			info=number;
		} void	print() {
			cout<<"The D2 info:"<<info<<"	version	"<<ver<<endl;
		} private:
		int	info;
};
void	print_info(A	p) {
	p->print();
}
void main() {
	A a;
	D1 d1(4);
	D2 d2(100);
	print_info(a);
	print_info(&d1);
	print_info(&d2);
}


/*
答案：
1).virtual void	print()
2).class	D1:public A
3).void	print_info(A	*p) 
4).	print_info(&a);
*/
