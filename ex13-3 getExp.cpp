#include <iostream>
using namespace std;

bool getExp(int base, int exp, int &ret) { // base�� exp �������� ����Ͽ� ret�� ����
	if(base <= 0 || exp <= 0) {
		return false; // ���� ����
	}
	int value=1;
	for(int n=0; n<exp; n++) 
		value = value * base; // base�� exp ��ŭ ���Ͽ� ���� �� ���
	ret = value; // ��� ���� ret�� ����
	return true; // ���� ����. ���� ���� ret�� ����
}

int main() {
	int v=0;
	if(getExp(2, 3, v)) // v = 2�� 3�� = 8. getExp()�� true ����
		cout << "2�� 3���� " << v << "�Դϴ�." << endl;
	else 
		cout << "����. 2�� 3���� " << "����� �� �����ϴ�." << endl;

	int e=0;
	if(getExp(2, -3, e)) // 2�� -3 �� ?. getExp()�� false ����
		cout << "2�� -3���� " << v << "�Դϴ�." << endl;
	else
		cout << "����. 2�� -3���� " << "����� �� �����ϴ�." << endl;
}