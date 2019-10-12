#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
  int N, O, D;

  while (cin >> N, N != 0)
  {
    vector<int> origin, destination;

    while (N--)
      cin >> O >> D, origin.push_back(O), destination.push_back(D);

    sort(origin.begin(), origin.end()), sort(destination.begin(), destination.end());

    // Todo ponto de partida deve aparecer como ponto de chegada
    // De forma mais prática, todo aluno para ir, precisa que outro ocupe seu lugar
    // Dessa forma, após ordenados, os vetores devem ser iguais para que o intercâmbio seja possível

    cout << (origin == destination ? "YES" : "NO") << endl;
  }

  return 0;
}
