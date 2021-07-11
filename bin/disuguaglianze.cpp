/**
 * @file disuguaglianze.cpp
 *
 * @version 01.01 202158
 *
 * @brief
 *
 * @ingroup disuguaglianze
 * (Note: this needs exactly one @defgroup somewhere)
 *
 * @author Castellani Davide
 *
 * Contact: contacts@castellanidavide.it
 *
 */

// Includes
#include <bits/stdc++.h>
using namespace std;

// Variabiles
int N;
vector <char> versi;
vector <int> sol;

// Main code
int main()
{
    // Cncomment the following lines if you want to read/write from files
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // Input
    cin >> N;
    versi.resize(N-1);
    sol.resize(N+1);

    for(size_t i = 0; i < N - 1; ++i)
    {
        cin >> versi[i];
    }

    for(size_t i = 0; i < N+1; ++i)
    {
        sol[i] = i + 1;
    }

    size_t i = 0;
    while(i < N)
    {
        int s = i;
        while (versi[i] == '<')
            ++i;

        if (s != i)  //sol.size() - 1
        {
            int tmp = sol[s];
            sol[s] = sol[i+1];
            sol[i+1] = tmp;
            i -= 2;
            if (i < 0)
                i = -1;
        }
        ++i;
    }

    for(size_t i = 0; i < N; ++i)
    {
        cout << sol[i] << " ";
    }

    // End
    return 0;
}
