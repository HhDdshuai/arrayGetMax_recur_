//递归求数组中的最大值
#include <iostream>
#include <cstring>
using namespace std;

int max_element(const int A[],int lower,int upper){
    int maximum;
    if(lower == upper)
        return A[lower];
    else{
        maximum = max_element(A,lower + 1,upper);
        if(A[lower] >= maximum)
            return A[lower];
        else
            return maximum;
    }
}
//重载
double max_element(const double A[],int lower,int upper){
    double maximum;
    if(A[lower] == A[upper])
        return A[lower];
    else{
        maximum = max_element(A,lower + 1,upper);
        if(A[lower] >= maximum)
            return A[lower];
        else
            return maximum;
    }
}
int main()
{
    int A[] = {16,56,52,78,64,98,12,15};
    int lenA = sizeof(A)/sizeof(int);

    double B[] = {10.1,23.5,56.9,86.2,2.6,66.6};
    int lenB = sizeof(B)/sizeof(double);
    cout << "The maximum element of the array_A is:" << max_element(A,0,lenA - 1) << endl;
    cout << "The maximum element of the array_B is:" << max_element(B,0,lenB - 1) << endl;
    return 0;
}
