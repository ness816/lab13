#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double A[],int N ,double B[])
{
    double AM , SD , GM ,H;
    double sum = 0 , sumsquare = 0,gm = 1, ha = 0,MAX = A[0],MIN = A[0];
    
    int i = 0;
    
    while (i < N)
    {
        sum += A[i];
        sumsquare += pow(A[i],2);
        gm *= A[i];
        ha += 1.00/A[i];
        
        if(MAX > A[i])
        {
           //ใช้ค่าMAXค่าเดิม
        }
        else
        {
            MAX = A[i];

        }

         if(MIN < A[i])
        {
            //ใช้ค่าMINค่าเดิม
        }
        else
        {
            MIN = A[i];

        }

        i++;
    }
    AM = sum/N ;
    SD =sqrt((sumsquare/N)-(pow(AM,2)));
    GM = pow(gm,1.00/N);
    H = N/ha;
   
 

    B[0] =AM;
    B[1] = SD;
    B[2] = GM;
    B[3] = H;
    B[4] = MAX;
    B[5] = MIN;

}