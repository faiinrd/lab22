#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc,char *argv[]){
    double sum=0,avg;
    if(argc>1){
        for(int i=0; i<argc; i++){
            sum += atof(argv[i]);
        }
        avg = sum/(argc-1);
        cout << "---------------------------------" << endl;
        cout << "Average of " << argc-1 << " numbers = " << avg << endl;
        cout << "---------------------------------";
    }else{
        cout << "Please input numbers to find average.";
    }
}
