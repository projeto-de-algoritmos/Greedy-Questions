#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
  int T, N, Pi;

  cin >> T;

  while (T--)
  {
    vector<int> items;
    int ans = 0;

    cin >> N;

    while (N--)
      cin >> Pi, items.push_back(Pi);

    // Para pegar os maiores descontos possíveis basta fazer passar os produtos de 3 em 3
    // Nesse esquema, o desconto máximo é dado pela ordenação decrescente dos valores do itens

    sort(items.begin(), items.end(), greater<int>());

    for (size_t i = 2; i < items.size(); i += 3)
      ans += items[i];

    cout << ans << endl;
  }

  return 0;
}
