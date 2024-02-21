// by. MiohitoKiri5474
#include <bits/stdc++.h>

#pragma GCC optimize ( "O3" )
#pragma loop_opt ( on )

using namespace std;

// type and pair definition
using LL = long long;
using pii = pair < LL, LL >;
using sstr = stringstream;
#define F first
#define S second
#define mp make_pair

// general definition
#define pb push_back
#define ep emplace_back
#define GL ( n ) getline ( cin, n )
#define gura ios::sync_with_stdio(false);cin.tie(0)

// define heap
template < class T > using MaxHeap = priority_queue < T, vector < T >, less < T > >;
template < class T > using MinHeap = priority_queue < T, vector < T >, greater < T > >;

// number definition
#define INF 0x3f3f3f3f

// some defiine for programing contest
#define int LL
inline void print_ans ( bool flag ) {
    cout << ( flag ? "Yes" : "No" ) << endl;
}
const int maxN = 100005;

int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int weeks[] = { 6, 0, 1, 2, 3, 4, 5 };
signed main() {
    gura;

    int y, m, d;
    cin >> y >> m >> d;
    // cout << "\t" << y << ' ' << m << ' ' << d << endl; // del
    y -= 1600;
    d += y * 365;
    d += y / 400 - y / 100 + y / 4;
    if ( ( y % 400 == 0 || ( y % 100 && y % 4 == 0 ) ) && ( m < 3 ) )
        d--;
    for ( int i = 1 ; i < m ; i++ )
        d += days[i];
    cout << weeks[d % 7] << endl;
}
