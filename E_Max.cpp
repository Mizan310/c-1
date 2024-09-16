#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
    }
    int mx = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        mx = max(mx, a[i]);
    }
    cout << mx << endl;
    return 0;
}

        // if(a[i]>mx)
        // {
        //     mx = a[i];
        // }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int i, N;
//     cin >> N;
//     //scanf("%d", &N);
//     int a, max = 0;
//     for(i = 1; i<=N; i++)
//     {
//         //scanf("%d", &a);
//         cin >> a;
//         if(a > max)
//         {
//             max = a;
//         }
//     }
//     //printf("%d\n", max);
//     cout << max << endl;
 
//     return 0;
 
// }