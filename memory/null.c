#include <iostream>
using namespace std;
int main(){
    int * i_p = NULL;
    //cout <<*i_p<<endl;
    i_p = (int*) malloc(sizeof(int));

    int * ii_p = NULL;
    //cout <<*i_p<<endl;
    ii_p = (int*) malloc(100*sizeof(int));
    ii_p[100] = 0;
    //free (ii_p);
    cout << ii_p[0] <<endl;
    free (ii_p+50);
}
