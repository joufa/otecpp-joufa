#include "korvaus.h"

using namespace std;
using otecpp_korvaus::korvaa;

std::string::size_type otecpp_korvaus::korvaa(string &mj, const string &mita, const string &milla) {
  
  string::size_type koko = mj.length(); // Merkkijonon koko
  string::size_type replKoko = mita.length(); // Korvattavan merkkijonon koko
  string::size_type osumat = 0; // Osumien määrä: palautusarvo
  string::size_type posi = 0; // Positio
  string::size_type found;

  while ((found = mj.find(mita, posi)) != string::npos) {
    mj.replace(found, replKoko, milla);
    posi = found+replKoko;
    osumat++;
  }

  return osumat;
}