#include "hello.decl.h"
#include "Interventions.h"
CProxy_Main mainProxy;
class Main : public CBase_Main
{

    public:
    Main(CkArgMsg* m)
    {
        CProxy_Hello arr = CProxy_Hello::ckNew(8); 
        mainProxy = thisProxy;
        VaccinationIntervention v;
        arr.SayHi(v);

    };
};
/*array [1D]*/
class Hello : public CBase_Hello
{
    public:
    void SayHi(BaseIntervention b)
    {
        b.test();
    }
};
#include "hello.def.h" // created from hello.ci file abov