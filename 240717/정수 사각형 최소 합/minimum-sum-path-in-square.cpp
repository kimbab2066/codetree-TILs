#include <iostream>
using namespace std;
#define MX 105
int n, a[MX][MX], d[MX][MX];

int main() {
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) cin >> a[i][j];
    }
    for(int i = 1; i <= n; i++){
        for(int j = n; j >= 1; j--){
            d[i][j] = a[i][j];
            if(d[i-1][j] != 0) d[i][j] = d[i-1][j] + a[i][j];
            if(d[i][j+1] != 0) d[i][j] = d[i][j+1] + a[i][j];
            if(d[i][j+1] != 0 && d[i-1][j] != 0) d[i][j] = min(d[i-1][j], d[i][j+1]) + a[i][j];
        }
    }
    cout << d[n][1];
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n; j++) cout <<  d[i][j] << " ";
    //     cout << "\n";
    // }
    return 0;
}