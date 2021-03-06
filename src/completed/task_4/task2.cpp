#include "stdafx.h"	// ������������ ������������ ����
#include "Task2.h"	// ��������� ���������� � ������������
#include <cmath>	// ���������� �������������� ���������� ��� �������������� �������, ������ ��� ��� ��� ����������

unsigned long int factorial(unsigned int ����������);	// ��������� �������� ������� factorial. ������� ���������� ����������� ����������� ����� �����
												// (unsigned - �����������, long - ������������, int - ����� �����). � �������� ��������� ���������
												// ����������� ����� �����

void function_2()				// ���������� ������� function_2
{	// ������ ������� 
	double x;	// ��������� ���������� ���������� x ���� ����� � ��������� ������
	cout << "������� ����� � ��������� ������ � ��������� (0;1):" << endl;	// ������� ���������
	cin >> x;		// ������ ����� � ���������� (������� n.nnnnnnn)
	if (x > 0 && x < 1)		// ���� ����� � ���������� ������, ��
	{	// ������ ����� if-a, � ����� ������� ��, ��� ����� �����������, ���� ����� ����������
		double iter, sum = 0;		// ������� ���������� ���� double: iter - ��� �������� ����������, sum - ��� �������� ����� �����,
		const double e = 1E-6;		// ���������� � � ������������ (const) ��������� - ��������, ������� ����� ������������ ������� �����
		int k = 1;			// ��������� ���������� ���� int � �������������� �� ��������� 1
		do    // ���������� ���� do...while
		{		//������ �����, �.�. ���� ��� ����� ����������� 
			iter = ((k % 2 == 0 ? 1 : -1) / (factorial(k) * factorial(k + 1))) * pow(x / 2, 2 * k + 1);	// ���� �������������� �������, ���������
																								// ���������� � ���������� iter
			sum += iter;		// ���������� ������� ��������� � ����� �����
			k++;		// ����������� k �� �������
		}	// ����� ����� ����� 
		while (iter > e);  // ������� ��� ����������� �����: ��������� ���� ������� ��������� iter ������ �������� e 
		cout << "��������� �����:   " << sum << endl;
	}	// ����� ����� if-a
	else    // � ��������� ������, ���� ������� ����� �� ����������
	{	// ������ ����� else
		cout << "�� �����, ���" << endl;
	}	// ����� ����� else
}	// ����� �������

unsigned long int factorial(unsigned int x)	// ���������� ������� factorial, ��������� �����-�� ����������� ����� �����
{	// ������ ����� �������
	int res = 1;	// ������� ���������� res, �������������� ��������
	for (int i = 1; i <= x; i++)	// ���� for, ����������� x ���, �� i = 1 �� i = x, � ����������� i �� ������ ���� �� 1
	{	// ������ �����
		res *= i;	// �������� res �� i � ���������� � res (�� ����� ��������� ���������)
	}	// ����� �����
	return res;		// ���������� � ����� ������ ������� ��������� ����������
}	// ����� ����� ������� 
