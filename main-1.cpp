#include <iostream> 
using namespace std; 
int main() 
{ int i, n, min, rmin = 0, a;
cin >> n; 
for (i = 1; i <= n; i++) 
{ cin >> a; 
if (a/2==0 && (rmin == 0 || a < min)) 
{ min = a; rmin = i;} } 
if (rmin == 0) { cout << "нема чисел які підходять";} 
else { cout << min << " " << rmin;} 
return 0; }