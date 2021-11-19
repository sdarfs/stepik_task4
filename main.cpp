//В кинотеатре n рядов по m мест в каждом (n и m не превосходят 20). 
//В двумерном массиве хранится информация о проданных билетах, число 1 означает, что билет на данное место уже продан, число 0 означает, что место свободно. 
//Поступил запрос на продажу k билетов на соседние места в одном ряду. 
//Определите, можно ли выполнить такой запрос.

#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin >> n >> m;
    int a[n][m];
    //input numbers to massive
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < m; j++){
            cin>>a[i][j];
        }
    }
    int k;
    cin >> k;

    int d =0;
    for (int i = 0 ; i < n; i++){
        int count = 0;
        for(int j = 0; j < m; j++){
            if (a[i][j] == 0){
                count +=1;
                if (count == k){
                    d =  i+1;
                    break;
                }
            }
            else count = 0;
        }
        if (count == k) break;

    }
    cout << d;
    return 0;
}

