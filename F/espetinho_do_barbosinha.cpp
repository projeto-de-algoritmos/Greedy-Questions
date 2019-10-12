#include <bits/stdc++.h>

using namespace std;
using ll = long long;

string format(int value)
{
  return (value < 10 ? "0" : "") + to_string(value);
}

int solve(vector<ll> &in, vector<ll> &out)
{
  int ans, chairs, i, j;
  ans = chairs = i = j = 0;

  sort(in.begin(), in.end());
  sort(out.begin(), out.end());

  // Descomente as linhas abaixo para entender melhor como o processamento é feito

  while (i < in.size() and j < out.size())
  {

    /*
    cout << "Cliente chegando às: " << format(in[i] / 3600) << ":" << format((in[i] % 3600) / 60) << ":" << format((in[i] % 3600) % 60);
    cout << "\nHaverá vaga as: " << format(out[j] / 3600) << ":" << format((out[j] % 3600) / 60) << ":" << format((out[j] % 3600) % 60);
    */

    if (in[i] <= out[j])
    {
      i++, chairs++;

      /*
      cout << "\nJá temos " << ans << " cadeiras e a próxima vaga é só mais tarde!" << endl;
      if (ans < chairs)
        cout << "Mas estão todas ocupadas! É necessário mais uma cadeira\n"
             << endl;
      else
        cout << "Opa! Mas temos cadeira vaga\n"
             << endl;
      */

      ans = max(ans, chairs);
    }

    else
    {
      /*
      cout << "\nNo horário certinho!" << endl;
      cout << "Existe cadeira vaga!\n"
           << endl;
      */

      j++, chairs--;
    }
  }

  return ans;
}

int main(int argc, char const *argv[])
{
  vector<ll> begin, end;
  int N, hr, mn, sc;
  char colon;

  cin >> N;

  while (N--)
  {
    cin >> hr >> colon >> mn >> colon >> sc;
    begin.push_back(hr * 60 * 60 + mn * 60 + sc);

    cin >> hr >> colon >> mn >> colon >> sc;
    end.push_back(hr * 60 * 60 + mn * 60 + sc);
  }

  cout << solve(begin, end) << endl;

  return 0;
}
