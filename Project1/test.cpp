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
		cout << "����phone���캯��" << endl;
		pname = name;
		ptime = time;
	}
	~phone()
	{
		cout << "����phone��������" << endl;
	}
	//�ֻ�Ʒ������
	string pname;
	//�ֻ�����ʱ��
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

	person(string name,string pname,int ptime)  // ��ʽת����
	{
		m_name = name;
		m_phone.pname = pname;
		m_phone.ptime = ptime; 
		cout << "����person�޲ι��캯��" << endl;
	}
	person(const person& p)
	{
		m_name = p.m_name;
		m_phone = p.m_phone;
	}
	~person()
	{
		cout << "����person��������" << endl;
	}
	

	string m_name;
	phone m_phone;

};
void test01()
{
	person p = {"��С˧","����",25};    //��ʽת����
	person p1(p);
	cout << p.m_name << "����" << p.m_phone.pname << "�ܴ���" << p.m_phone.ptime << "Сʱ" << endl;
	cout << p1.m_name << "����" << p1.m_phone.pname << "�ܴ���" << p1.m_phone.ptime << "Сʱ" << endl;

}


int main()
{
	test01();

	system("pause");
	return 0;
}