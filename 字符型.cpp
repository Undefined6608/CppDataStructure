#include <iostream>

using namespace std;

int main() {
	//�ַ���
	// ����
	char ch = 126;

	// ���
	cout << ch << endl;

	// �鿴ռ���ڴ�ռ��С
	cout << "char�ַ��ͱ�����ռ���ڴ�ռ䣺" << sizeof(char) << endl;

	// �ַ�������������
	// ����ʾ�ַ��ͱ���ʱ���õ����Ž��ַ�����������Ҫ��˫����
	// char ch1 = "a";
	// ��������ֻ����һ���ַ������������ַ���
	// char ch2 = 'abc';

	// �ַ��ͱ�����Ӧ��ASCII����
	cout << (int)ch << endl;

	system("pause");
	return 0;
}