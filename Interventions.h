#ifndef __INTERVENTIONS_H__
#define __INTERVENTIONS_H__
#include "pup_stl.h"


class BaseIntervention {
    
  public:
    virtual void test() ;
    void pup(PUP::er &p);
};

class VaccinationIntervention : public BaseIntervention {
  public:
    void test()  override;
};
#endif
