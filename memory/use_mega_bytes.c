#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
int main(int argc,char * argv[]){
    if (argc<2){
        cout <<"Usage ./a.out n, where n are the num of mega bytes you want to use"<<endl;
        return -1;
    }
    cout << "process id:" << getpid() << endl;
    printf("location of code : %p\n", main);
    // lazy use
    int *a = new int[((long long)atoi(argv[1]))/4*1024*1024];
    // only when visit can we see memory usage(free -h) boost
    for(long long i=0;i < ((long long)atoi(argv[1]))/4*1024*1024;i++){
        a[i]=1;
    }
}

