#include"boss.h"




//���캯��
Boss::Boss(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;

}


//��ʾ������Ϣ
void Boss::showInfo()
{
	cout << "ְ����ţ�" << this->m_Id;
	cout << "\tְ��������" << this->m_Name;
	cout << "\t��λ��" << this->getDwptName();
	cout << "\t��λְ�𣺹���˾���е�����" << endl;
}

//��ȡ��λ����
string Boss::getDwptName()
{
	return string("�ϰ�");

}
