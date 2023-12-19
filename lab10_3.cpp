#include <iostream>
#include <iomanip>
#include<cmath>
#include<fstream>
#include<string>
#include<cstdlib>

using namespace std;

int main(){
    int count = 0;
    double sum = 0 ,sum_of_square = 0;
    string textline ;
    ifstream source("score.txt");
    while (getline(source,textline))
    {
        sum += atof(textline.c_str());
        sum_of_square += pow(atof(textline.c_str()),2);
        count++;
    }
    
    
    cout << "Number of data = "<< count;
    cout << setprecision(3);
    cout << "\nMean = " <<sum/count ;
    cout << "\nStandard deviation = "<< sqrt((sum_of_square/count)-pow(sum/count,2));
    source.close();
    return 0 ;
}