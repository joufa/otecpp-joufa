#include "lajitellut.h"

using namespace std;
using otecpp_lajitellut::lajitellut;

vector<string> otecpp_lajitellut::lajitellut(unsigned int lkm, char *mjt[]) 
{
  /* Laitetaan parametrit vector-taulukkoon */
  vector<string> t;
  for (int i = 0; i < lkm; i++) {
    t.push_back(mjt[i]);
  }

  /* Lajittelualgoritmi */
  string temp;
  int j;
  for (int i = 0; i < t.size(); i++){
    j = i;
    while (j > 0 && t[j] < t[j-1]){
      temp = t[j];
      t[j] = t[j-1];
      t[j-1] = temp;
      j--;
    }
  }
  return t;
};


