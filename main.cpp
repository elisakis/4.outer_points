#include <iostream>

using namespace std;

void outer_points(unsigned short int n, unsigned short int m)
{
    int left_arr[n], right_arr[n], val, result;
    for(unsigned short int i = 0; i < n; i++)
    {
        cin >> left_arr[i] >> right_arr[i]; //����� � ������ ������� �������� (����� n)
    }
    for(unsigned short int j = 0; j < m; j++)
    {
        cin >> val;     //���������� ����� (����� m)
        result = 0;     //������� �������� �� �����������
        for(unsigned short int i = 0; i < n; i++)
        {
            if(val < left_arr[i] || val > right_arr[i])
                result++;   //������ � ������� �������
        }
        cout << result << " ";
    }
}

int main()
{
    unsigned short int n, m;    //���������� �������� � ���������� �����
    cin >> n >> m;
    outer_points(n, m);
    return 0;
}
