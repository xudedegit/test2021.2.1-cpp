#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;
class phone
{

public:

	phone()
	{
	}
	phone(string name,int time)
	{
		cout << "调用phone构造函数" << endl;
		pname = name;
		ptime = time;
	}
	~phone()
	{
		cout << "调用phone析构函数" << endl;
	}
	//手机品牌名称
	string pname;
	//手机待机时长
	int ptime;
};

class person
{

public:

	//void func(string name, string pname,int ptime)
	//{
	//	m_name = name;
	//	m_phone.pname = pname;
	//	m_phone.ptime = ptime;
	//}

	person(string name,string pname,int ptime)  // 隐式转换法
	{
		m_name = name;
		m_phone.pname = pname;
		m_phone.ptime = ptime; 
		cout << "调用person无参构造函数" << endl;
	}
	person(const person& p)
	{
		m_name = p.m_name;
		m_phone = p.m_phone;
	}
	~person()
	{
		cout << "调用person析构函数" << endl;
	}
	

	string m_name;
	phone m_phone;

};
void test01()
{
	person p = {"王小帅","三星",25};    //隐式转换法
	person p1(p);
	cout << p.m_name << "拿着" << p.m_phone.pname << "能待机" << p.m_phone.ptime << "小时" << endl;
	cout << p1.m_name << "拿着" << p1.m_phone.pname << "能待机" << p1.m_phone.ptime << "小时" << endl;

}


int main()
{
	test01();

	system("pause");
	return 0;
}