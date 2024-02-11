#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{

const int MAXNUMS = 20;

int num;
cout << endl;
cout<<"NUMBER   SQUARE    CUBE\n";
cout<<"------   ------     ----\n";
for(num=0;num<=MAXNUMS;num+=2)
cout<<setw(3)<<num<<"       "
<<setw(3)<<pow(num,2)<<"     "
<<setw(4)<<pow(num,3)<<endl;
return 0;
}
