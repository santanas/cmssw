#ifndef gen_HydjetGeneratorFilter_h
#define gen_HydjetGeneratorFilter_h

#include "GeneratorInterface/HydjetInterface/interface/HydjetHadronizer.h"
#include "GeneratorInterface/Core/interface/GeneratorFilter.h"

namespace gen
{
   typedef edm::GeneratorFilter<gen::HydjetHadronizer> HydjetGeneratorFilter;
}

#endif
