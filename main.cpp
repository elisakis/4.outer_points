#include <iostream>

using namespace std;

void outer_points(unsigned short int n, unsigned short int m)
{
    int left_arr[n], right_arr[n], val, result;
    for(unsigned short int i = 0; i < n; i++)
    {
        cin >> left_arr[i] >> right_arr[i]; //левая и правая границы отрезков (всего n)
    }
    for(unsigned short int j = 0; j < m; j++)
    {
        cin >> val;     //координата точки (всего m)
        result = 0;     //скольки отрезкам не принадлежит
        for(unsigned short int i = 0; i < n; i++)
        {
            if(val < left_arr[i] || val > right_arr[i])
                result++;   //попали в границы отрезка
        }
        cout << result << " ";
    }
}

int main()
{
    unsigned short int n, m;    //количество отрезков и количество точек
    cin >> n >> m;
    outer_points(n, m);
    return 0;
}
