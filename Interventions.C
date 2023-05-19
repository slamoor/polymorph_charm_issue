#include "Interventions.h"
#include "pup_stl.h"

void BaseIntervention::test()  {
  printf("BASE TEST CALLED\n");
} 

void BaseIntervention::pup(PUP::er &p) {

}

void VaccinationIntervention::test()  {
  printf("VACCINATION TEST CALLED\n");
} 

