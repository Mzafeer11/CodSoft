//#include<iostream>
//#include<conio.h>
//using namespace std;
//class Calculator
//{
//	double x;
//	double y;
//public:
//	Calculator():x(0), y(0)
//	{};
//	Calculator(int a, int b)
//	{
//		x = a;
//		y = b;
//	}
//	~Calculator()
//	{
//
//	}
//	int Add()
//	{
//		return x + y;
//	}
//	int Sub()
//	{
//		return x - y;
//	}
//	int Divide()
//	{
//		if (y)
//		{
//			return x / y;
//		}
//		else
//		{
//			cout << "Error!" << endl;
//		}
//	}
//	int multiply()
//	{
//		return x * y;
//	}
//	void Operation()
//	{
//		while(1)
//		{
//			cout << "Enter the numbers" << endl;
//			int n, n1;
//			cin >> n >> n1;
//			x = n;
//			y = n1;
//			cout << "Press the operation" << endl;
//			cout << "1.+" << endl;
//			cout << "2.-" << endl;
//			cout << "3./" << endl;
//			cout << "4.*" << endl;
//			cout << "5.Exit" << endl;
//			int chioce = _getch() - '0';
//			switch (chioce)
//			{
//			case 1:
//				cout << "Result : " << Add() << endl;
//				break;
//			case 2:
//				cout << "Result : " << Sub() << endl;
//				break;
//			case 3:
//				cout << "Result : " << Divide() << endl;
//				break;
//			case 4:
//				cout << "Result : " << multiply() << endl;
//				break;
//			case 5:
//				cout << "Exiting" << endl;
//				exit(0);
//				break;
//			}
//	    }
//	}
//};
//int main()
//{
//	Calculator C;
//	C.Operation();
//	system("pause");
//	return 0;
//}