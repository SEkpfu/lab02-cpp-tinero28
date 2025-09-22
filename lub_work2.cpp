#include <iostream>
using namespace std;

int n1();
int n2();
int n3a();
int n3b();
int n4();
int n5a();
int n5b();
int n7();
int n8();
int n9();
int n10();
int n11();
int n12();

int main() {
	n1();
	return 0;
}

int n1()
{
	setlocale(0, "");
	double a1, b1, a3, a2, b2, b3;
	cout << "Введите стороны 1-го прямоугольника \n";
	cout << "a1= "; cin >> a1;
	cout << "b1= "; cin >> b1;
	cout << "Введите стороны 2-го прямоугольника \n";
	cout << "a2= "; cin >> a2;
	cout << "b2= "; cin >> b2;
	cout << "Введите стороны 3-го прямоугольника \n";
	cout << "a3= "; cin >> a3;
	cout << "b3= "; cin >> b3;

	double s1, s2, s3;
	s1 = a1 * b1;
	s2 = a2 * b2;
	s3 = a3 * b3;

	cout << "Решение через if: " << "\n";
	if (s1 > s2 && s1 > s3) {
		cout << "max площадь у первого, S = " << s1 << "\n";
	}
	else {
		if (s2 > s3) {
			cout << "max площадь у второго, S = " << s2 << "\n";
		}
		else {
			cout << "max площадь у третьего, S = " << s3 << "\n";
		}
	}
	
	cout << "Решение через тернарный оператор: " << "\n";
	cout << "max площадь = " << (s1 > s2 && s1 > s3 ? s1 : (s2 > s3 ? s2 : s3)) << "\n";

	cout << "Решение через max()" << "\n";
	cout << "max площадь = " << max(s1, max(s2, s3));
	return 0;
}

// int n2() {
// 	int a;
// 	cin >> a;
// 	if (a > 0) {
// 		cout << "число положительное";
// 	}
// 	else {
// 		cout << (a < 0 ? "число отрицательное" : "число - нол,");
// 	}
// 	if (a % 2 == 0) {
// 		cout << ", четное ";
// 	}
// 	else {
// 		cout << ", нечетное ";
// 	}
// 	return 0;
// }

// int n3a() {
// 	double a;
// 	cin >> a;
// 	if (a <= -2) {
// 		cout << 0;
// 	}
// 	else {
// 		if (a <= 10) {
// 			cout << pow(a, 2) + 4 * a + 5;
// 		}
// 		else {
// 			cout << 1 / (pow(a, 2) + 4 * a - 5);
// 		}
// 	}
// 	return 0;
// }

// int n3b() {
// 	double a, b;
// 	cin >> a;
// 	if (a <= -2) {
// 		cout << 0;
// 	}
// 	else {
// 		if (a <= 0) {
// 			b = pow(a, 2) + 4 * a + 5;
// 			cout << b;
// 		}
// 		else {
// 			b = (pow(a, 2) + 4 * a - 5);
// 			b == 0 ? cout << "type is none" : cout << 1 / b;
// 		}
// 	}
// 	return 0;
// }
// int n4()
// {
// 	setlocale(0, "");
// 	int dM, dW;
// 	cout << "Введите дату: ";
// 	cout << "День месяца: ";
// 	cin >> dM;
// 	cout << "Номер дня в неделе: ";
// 	cin >> dW;
// 	if (((13 == dM) && (5 == dW || 2 == dW)) || ((17 == dM) && (5 == dW)))
// 		cout << "неудачный день ";
// 	return 0;
// }

// int n5a() {
// 	int r, a, b, z, c;
// 	cout << "Введите радиус и высоту торта \n";
// 	cin >> r >> z;
// 	cout << "Введите стороны и высоту коробки \n";
// 	cin >> a >> b >> c;
// 	(r <= a && r <= b && z <= c) ? cout << "торт поместится в коробку!" : cout << "торт не поместится в коробку...";
// 	return 0;
// }

// int n5b() {
// 	int x, y, z, a, b;
// 	cout << "Введите стороны кирпича \n";
// 	cin >> x >> y >> z;
// 	cout << "Введите размеры отверстия \n";
// 	cin >> a >> b;
// 	if (x < a) {
// 		if (y < b || z << b) {
// 			cout << "кирпич пройдет";
// 		}
// 		else {
// 			cout << "кирпич не пройдет";
// 		}
// 	}
// 	else if (y < a) {
// 		if (x < b || z << b) {
// 			cout << "кирпич пройдет";
// 		}
// 		else {
// 			cout << "кирпич не пройдет";
// 		}
// 	}
// 	else if (z < a) {
// 		if (y < b || x << b) {
// 			cout << "кирпич пройдет";
// 		}
// 		else {
// 			cout << "кирпич не пройдет";
// 		}
// 	}
// 	else {
// 		cout << "кирпич не пройдет";
// 	}
	
// 	return 0;
// }

// int n7() {
// 	double a, b;
// 	char c;
// 	cout << "введите числа и знак операции ";
// 	cin >> a >> b >> c;
// 	switch (c) {
// 		case '+': cout << a + b; break;
// 		case '-': cout << a - b; break;
// 		case '*': cout << a * b; break;
// 	}
// 	return 0;
// }

// int n8() {
// 	double x, y, r;
// 	cout << "введите координаты попадания ";
// 	cin >> x >> y;
// 	r = sqrt(x * x + y * y);
// 	if (r <= 2) {
// 		cout << "выбито 10 очков!";
// 	}
// 	else if (r <= 4) {
// 		cout << "выбито 5 очков!";
// 	}
// 	else {
// 		cout << "вы промахнулись..";
// 	}
// 	return 0;
// }

// int n9() {
// 	double x, y;
// 	bool n = false;
// 	cout << "введите координаты точки ";
// 	cin >> x >> y;
// 	double q = -2 * x + 2;
// 	double r = sqrt(x * x + y * y);
// 	if (x >= -2 && x <= 0 && y >= 0 && y <= 1) {
// 		cout << "точка принадлежит области A \n";
// 		n = true;
// 	}
// 	if (y >= 0 && r <= 5) {
// 		cout << "точка принадлежит области B \n";
// 		n = true;
// 	}
// 	if (x >= 0 && r >= 3 && r <= 6) {
// 		cout << "точка принадлежит области C \n";
// 		n = true;
// 	}
// 	if (x >= 0 && x <= 1 && y >= 0 && y <= 2 && y <= q) {
// 		cout << "точка принадлежит области D \n";
// 		n = true;
// 	}
// 	if (not n) {
// 		cout << "точка не принадлежит ни одной области ";
// 	}
// 	return 0;
// }

// int n10() {
// 	float a, b, c;
// 	cout << "введите потенциальные стороны треугольника \n";
// 	cin >> a >> b >> c;
// 	if (a < b + c && b < a + c && c < b + a) {
// 		if (a == b && b == c && c == a) {
// 			cout << "это равносторонний треугольник";
// 		}
// 		else if (a == sqrt(b * b + c * c) || b == sqrt(a * +c * c) || c == sqrt(a * a + b * b)) {
// 			(a == b || b == c || a == c) ? cout << "это прямоугольный равнобедренный тругольник" : cout << "это прямоугольный тругольник";
// 		}
// 		else if (a == b || b == c || c == a) {
// 			cout << "это равнобедренный треугольник";
// 		}
// 		else {
// 			cout << "такой треугольник существует";
// 		}
// 	}
// 	else {
// 		cout << "такого треугольника не существует";
// 	}
// 	return 0;
// }

// int n11() {
// 	int d1, m1, y1, d2, m2, y2, q1, q2;
// 	cout << "введите дату вашего рождения (день, номер месяца и год)\n";
// 	cin >> d1 >> m1 >> y1;
// 	cout << "введите сегодняшнюю дату (день, номер месяца и год)\n";
// 	cin >> d2 >> m2 >> y2;
// 	q1 = y2 - y1;
// 	q2 = y2 - y1 - 1;
// 	if (d2 >= d1 && m2 >= m1) {
// 		switch (q1 % 10) 
// 		{
// 			case 0:
// 				cout << "вам " << q1 << " лет";
// 				break;
// 			case 1:
// 				cout << "вам " << q1 << " год";
// 				break;
// 			case 2:
// 				cout << "вам " << q1 << " года";
// 				break;
// 			case 3:
// 				cout << "вам " << q1 << " года";
// 				break;
// 			case 4:
// 				cout << "вам " << q1 << " года";
// 				break;
// 			case 5:
// 				cout << "вам " << q1 << " лет";
// 				break;
// 			case 6:
// 				cout << "вам " << q1 << " лет";
// 				break;
// 			case 7:
// 				cout << "вам " << q1 << " лет";
// 				break;
// 			case 8:
// 				cout << "вам " << q1 << " лет";
// 				break;
// 			case 9:
// 				cout << "вам " << q1 << " лет";
// 				break;

// 		}
// 	}
// 	else {
// 		if ((q2 % 10) == 1) {
// 			switch (q1 % 10)
// 			{
// 			case 0:
// 				cout << "вам " << q1 << " лет";
// 				break;
// 			case 1:
// 				cout << "вам " << q1 << " год";
// 				break;
// 			case 2:
// 				cout << "вам " << q1 << " года";
// 				break;
// 			case 3:
// 				cout << "вам " << q1 << " года";
// 				break;
// 			case 4:
// 				cout << "вам " << q1 << " года";
// 				break;
// 			case 5:
// 				cout << "вам " << q1 << " лет";
// 				break;
// 			case 6:
// 				cout << "вам " << q1 << " лет";
// 				break;
// 			case 7:
// 				cout << "вам " << q1 << " лет";
// 				break;
// 			case 8:
// 				cout << "вам " << q1 << " лет";
// 				break;
// 			case 9:
// 				cout << "вам " << q1 << " лет";
// 				break;
// 			}
// 		}
// 	}
// 	return 0;
// }

// int n12() {
// 	int a, b, c, sum, count, min;
// 	min = 0;
// 	sum = 0;
// 	count = 0;
// 	cout << "введите 3 числа ";
// 	cin >> a >> b >> c;
// 	if (a > 10) {
// 		sum += a;
// 	}
// 	if (b > 10) {
// 		sum += b;
// 	}
// 	if (c > 10) {
// 		sum += c;
// 	}
// 	cout << "сумма чисел, больших 10: " << sum;
// 	if (a % 2 == 0) {
// 		count++;
// 	}
// 	if (b % 2 == 0) {
// 		count++;
// 	}
// 	if (c % 2 == 0) {
// 		count++;
// 	}

// 	cout << "\nколичество четных чисел: " << count;
// 	if ((a == b) || (a == c) || (b == c)) {
// 		cout << "\nсреднего числа нет";
// 	}
// 	else if ((a > b && a < c) || (a > c && a < b)) {
// 		cout << "\ncреднее число " << a;
// 	}
// 	else if ((c > b && c < a) || (c > a && c < b)) {
// 		cout << "\ncреднее число " << c;
// 	}
// 	else {
// 		cout << "\ncреднее число " << b;
// 	}
// 	if (a == b == c) {
// 		cout << "\nчисла одинаковые => наименьшие все";
// 	}
// 	else if (a <= b && a <= c) {
// 		cout << "\nнаименьшее число первое";	
// 		(a == b) ? cout << " а также второе" : cout << "";
// 		(a == c) ? cout << " а также третье" : cout << "";
// 	}
// 	else if (b <= a && b <= c) {
// 		cout << "\nнаименьшее число второе";
// 		(b == c) ? cout << " а также третье" : cout << "";
// 	}
// 	else {
// 		cout << "\nнаименьшее число третье";
// 	}

// 	return 0;
// }