// TestProject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"		// ���������� ���� ���� ������, ��� ���� ���
#include "Task1.h"		// ���������� ���� � ������ ��������, ����� ����� ���� � ��� ����������
#include "Task2.h"		// ����������
#include "Task3.h"		// ����������

int _tmain(int argc, _TCHAR* argv[])		// ������� ������� ��������� - main
{	// ������ �������
	setlocale(LC_CTYPE, "rus");		// ������������� ������� �����������, ��� ��������� ��������� � ������� ��� ������
	int num;		// ��������� ���������� ���� int � ��������������� num
	do   // �������� ���� do...while
	{	// ������ ����� �����
		cout << endl << "������� 1 - ��� ������� 1, 2 - ��� ������� 2, "	// ������� ������� �� �������
				<< "3 - ��� ������� 3, -1 - ��� ������" << endl;
		cin >> num;		// ���� ����� � ���������� num
		switch(num)			// �������� ������. � ����������� �� �������� num
		{	// ������ ��������� ������
		case 1 :	// ���� num ����� 1, �� ��������� ���������
			cout << "������� ������� 1" << endl;	// ������� ���������
			function_1();		// ��������(���������) ������� function_1. ��������� � �������, ��������� ��, ����� ������� ����������,
								// ������������ ���� �� � ���������� ���������� ��������� �����
			break;	// ���������/����������� �������� ������
		case 2 :	// ���� num ����� 2, �� ��������� ���������
			cout << "������� ������� 2" << endl;	// �����
			function_2();	// �� ����������, ������ ������� function_2
			break;	// � ����� 
		case 3 :	// ���� num ����� 3, �� ��������� ���������
			cout << "������� ������� 3" << endl;	// �����
			function_3();	// ����� �������� ����
			break;	// ��� �����������
		default :	// ���� num �� ����� �� ������ �� ������������� ���� ��������, �� ��������� 
			cout << "������� ������������ ��������" << endl; // �����
			break;	// �����������
		}	// ����� ��������� ������
		// ����� break-a ��������� � ���� �����
	} // ����� ����� �����
	while(num != -1); // ������� �����: ���������, �� ��� ���, ���� num �� ����� ����� -1. ����� ��� ����������, ������� �� �����
	return 0;	// ��������� 0, ��������� ������� main, �.�. ��������� ���������� ���������
}	// ����� �������

