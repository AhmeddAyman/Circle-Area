#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// #Course_3_Solution_18
// Circle Area.

float ReadRadious()
{
    float R;
    cout << "Please Enter Radious " << endl;
    cin >> R;
    return R;
}

float CircleArea(float R)
{
    const float PI = 3.141592653589;
    float Area = pow(R , 2) * PI;
    return Area;
}

void PrintResult(float Area)
{
    cout << "\n Circle Area = " << Area << endl;
}

int main()
{
    PrintResult(CircleArea(ReadRadious()));

    return 0;
}
