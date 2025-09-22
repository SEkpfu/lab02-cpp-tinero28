#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int n1();
int n2();
int n3();
int n4();

int main() {
    n1();
}

int n1() {
    int n;
    double m;
    cout << "введите единицу массы и массу тела ";
    cin >> n >> m;
    switch (n) {
        case 1:
            cout << m << "кг";
            break;
        case 2:
            cout << m / pow(10, 6) << "кг";
            break;
        case 3:
            cout << m / 1000 << "кг";
            break;
        case 4: 
            cout << m * 1000 << "кг";
            break;
        case 5:
            cout << m * 100 << "кг";
            break;
    }
    return 0;
}

int n2() {
    float x;
    cout << "введите х ";
    cin >> x;
    (x < -2.5) ? cout << (sin(M_PI * fabs(x)) / (x - 3)) : (x <= 2.5 ? cout << (2.5 * pow(x, 4)) : cout << sqrt(2 * x + 1));
    return 0;
}

int n3() {
    double x, y, r;
    r = 0.0;
    cout << "введите координаты точки ";
    cin >> x >> y;
    r = pow((x * x + y * y), 2);
    if ((x <= 0 && r <= 64 && !(x < -4 && y > 0)) || (x >= 0 && (y >= (x - 8) || y <= (8 - x) ) ) ) {
        cout << "точка попала в заштрихованную область";
    }
    else {
        cout << "точка не попала в заштрихованную область";
    }
    return 0;
}

int n4() {
    int n;
    cout << "сколько грибов собрал Джонни? ";
    cin >> n;
    switch (n % 10)
    {
    case 0:
        cout << "Джонни собрал " << n << " грибов";
        break;
    case 1:
        cout << "Джонни собрал " << n << " гриб";
        break;
    case 2:
        cout << "Джонни собрал " << n << " гриба";
        break;
    case 3:
        cout << "Джонни собрал " << n << " гриба";
        break;
    case 4:
        cout << "Джонни собрал " << n << " гриба";
        break;
    case 5:
        cout << "Джонни собрал " << n << " грибов";
        break;
    case 6:
        cout << "Джонни собрал " << n << " грибов";
        break;
    case 7:
        cout << "Джонни собрал " << n << " грибов";
        break;
    case 8:
        cout << "Джонни собрал " << n << " грибов";
        break;
    case 9:
        cout << "Джонни собрал " << n << " грибов";
        break;
    }
    return 0;
}

