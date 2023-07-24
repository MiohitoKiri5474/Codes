// by. MiohitoKiri5474
#include<bits/stdc++.h>

#pragma GCC optimize ( "O3" )
#pragma loop_opt ( on )

using namespace std;

typedef long long LL;

// define tools
#define REPP(i,f,s) for ( int i = f ; i < s ; i++ )
#define REPM(i,f,s) for ( int i = f ; i >= s ; i-- )
#define REPALL(i,n) for ( auto &i: n )
#define debuger cout << "111\n"
#define SP(a,b) swap ( a, b )
#define MEM(n,i) memset ( n, i, sizeof n )

// define pair
typedef pair < LL, LL > pll;
typedef pair < int, int > pii;
#define mp make_pair

// define vector && some stl's api
template < class T > using vec = vector < T >;
typedef vec < int > vi;
typedef vec < LL > vl;
#define pb push_back
#define ep emplace_back
#define REV reverse
#define SZ(n) ( int ) n.size()
#define CLR(n) n.clear()
#define BEG(n) n.begin()
#define END(n) n.end()
#define EMP(n) n.empty()
#define RSZ(n,s) n.resize ( s )
#define ALL(n) BEG ( n ), END ( n )
#define PIO(n) REPALL ( i, n ) cout << i << ' '; cout << '\n'

// define set
typedef set < int > si;
typedef set < LL > sl;
#define FID(n,Index) n.find ( Index ) != n.end()

// graph
#define GRE(T,edge) vec < T > edge[maxN]
#define UNI(u,v,edge) edge[u].pb ( v ), edge[v].pb ( u )
#define UNIw(u,v,w,edge) edge[u].pb ( mp ( v, w ) ), edge[v].pb ( mp ( u, w ) )

// IO
#define GL(n) getline ( cin, n )

// define stack, queue, pri-queue
template < class T > using stack = stack < T, vec < T > >;
template < class T > using MaxHeap = priority_queue < T, vec < T >, less < T > >;
template < class T > using MinHeap = priority_queue < T, vec < T >, greater < T > >;

// define stringstream
#define sstr stringstream

// number~ remember change maxN
#define INF 0x3f3f3f3f
#define maxN 100005

// ready~ go!
// let's coding and have fun!
// I can solve this problem!

#define x first
#define y second
#define pii pll

vec < pii > dot;

inline LL disten ( pii a, pii b ){
	return pow ( ( a.x - b.x ), 2 ) + pow ( ( a.y - b.y ), 2 );
}

int main(){
	ios::sync_with_stdio ( false );
	cin.tie ( 0 );
	cout.tie ( 0 );

	LL n, mi = INF;
	pii stop;
	cin >> n;
	for ( int i = 0 ; i < n ; i++ ){
		cin >> stop.x >> stop.y;
		dot.push_back ( stop );
	}

	if ( n == 2 )
		mi = disten ( dot[0], dot[1] );
	else{
		sort ( dot.begin(), dot.end() );

		for ( int i = 0 ; i < n ; i++ )
			for ( int j = i + 1 ; j < n ; j++ ){
				if ( dot[j].x - dot[i].x >= mi )
					break;
				mi = min ( mi, disten ( dot[i], dot[j] ) );
			}
	}

	cout << mi << '\n';
}