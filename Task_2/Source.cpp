#include <iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "ukr");
    r:cout << "Enter student number " << endl;
	int a;
	cin >> a;
	switch (a)
	{
	case 1:
		cout << "�������� ������� ����i����� - ������i� ��� 70"<<endl;
		break;
	case 2:
		cout << "������� �������� ��������i��� - ������i� ��� 90" << endl;
		 break;
	case 3:
		cout << "�������� ������ �i�������� - ������i� ��� 83" << endl;
		break;
	case 4:
		cout << "���������� ������ �����i����� - ������i� ��� 87" << endl;
		break;
	case 5:
		cout << "������ ����� �i����i��� - ������i� ��� 85" << endl << endl;
		break;
	case 6:
		cout << "������� �����i� ������������� - ������i� ��� 79" << endl;
		break;
	case 7:
		cout << "�����i��� �������i� ������i���� - ������i� ��� 70" << endl;
		break;
	case 8:
		cout << "i��� ����i� ��i����� - ������i� ��� 78" << endl;
		break;
	case 9:
		cout << "����� ��������� ����������� - ������i� ��� 85" << endl;
		break;
	case 10:
		cout << "������ ����i� �����i����� - ������i� ��� 65" << endl;
		break;
	case 11:
		cout << "��������� ������ ���������� - ������i� ��� 89" << endl;
		break;
	case 12:
		cout << "������� ��������� ��������� - ������i� ��� 89" << endl;
		break;
	case 13:
		cout << "�������� ��������� ������������� - ������i� ��� 82" << endl;
		break;
	case 14:
		cout << "��������� �����i� �����i����� - ������i� ��� 83" << endl;
		break;
	case 15:
		cout << "���i������ ��������� ����������� - ������i� ��� 90" << endl;
		break;
	case 16:
		cout << "������� ������� �i�������� - ������i� ��� 101" << endl;
		break;
	case 17:
		cout << "����� ��������� ����i����� - ������i� ��� 75" << endl;
		break;
	case 18:
		cout << "�i�i����� ���� i������� - ������i� ��� 79" << endl;
		break;
	case 19:
		cout << "����� ��������� ����i����� - ������i� ��� 71" << endl;
		break;
	case 20:
		cout << "��������� ���i� �����i���� - ������i� ��� 80" << endl;
		break;
	case 21:
		cout << "�������� I��� ������������� - ������i� ��� 70" << endl;
		break;
	case 22:
		cout << "��������� ������ ��������� - ������i� ��� 62" << endl;
		break;
	case 23:
		cout << "��������� ������ ����i����� - ������i� ��� 75" << endl;
		break;
	case 24:
		cout << "�������� ������ �������� - ������i� ��� 70" << endl;
		break;
	case 25:
		cout << "�������� i��� �����i����� - ������i� ��� 90" << endl;
		break;
	case 26:
		cout << "�������� �����i�� ���������i��� - ������i� ��� 83" << endl;
		break;
	case 27:
		cout << "������ ��i� ���������� - ������i� ��� 72" << endl;
		break;
	case 28:
		cout << "������� ���� ����i����� - ������i� ��� 65" << endl;
		break;
	case 29:
		cout << "����i� �i���i� ������i����� - ������i� ��� 83" << endl;
		break;
	default:
		cout << "enter a number up to 29"<<endl;
	}

	goto r;
	return 0;
}
