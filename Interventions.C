#include "Interventions.h"
#include "pup_stl.h"

void BaseIntervention::test() const {
  printf("BASE TEST CALLED\n");
} 

void BaseIntervention::pup(PUP::er &p) {

}

void VaccinationIntervention::test() const {
  printf("VACCINATION TEST CALLED\n");
} 

