#include "PrintTimer.h"

int watch() {
  PrintTimer timer{};

  timer();

  TRandom3 _rand;
  TH2D hg{"h2","a;b;c",100,0.,1.,100,0.,1.};
  /* TSystem::Sleep(1231); */
  /* double j = 0; */
  for (int i=0; i<100000000; ++i) {
    hg.Fill( _rand.Gaus(0.5,0.1), _rand.Gaus(0.5,0.1) );
  }
  timer("after");
    /* j = 15*i; */
    /* if (j > 10000) { */
      /* j /= i/3.; */
    /* } */
    /* if ((int)j%2==0) cout << j; */
  /* } */


  return 1;
};
