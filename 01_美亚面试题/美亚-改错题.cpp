/*------------------------------------------------------
������Ĵ�
--------------------------------------------------------

��Ŀ������һ������	A, �ֶ����������м̳е�������	D1 �� D2, 
�� ��һ����ͨ����	print_info() �β�Ϊָ������ָ��	,
�� �ǵĵ��ö����ö�̬����	,�� A ���е� print() ����Ϊ�麯
�� ,�����������	: 
The A version A
The D1 info: 4	version 1 
The D2 info:100 version A

--------------------------------------------------------
ע�⣺���������ӻ�ɾ�������У�Ҳ�����Ը��ĳ���Ľṹ��
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
�𰸣�
1).virtual void	print()
2).class	D1:public A
3).void	print_info(A	*p) 
4).	print_info(&a);
*/
