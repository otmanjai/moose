#ifndef VARIABLESBLOCK_H_
#define VARIABLESBLOCK_H_

#include "ParserBlock.h"

//libmesh Includes
#include "dof_map.h"
#include "coupling_matrix.h"

namespace Moose {
class SubProblem;
}

class VariablesBlock : public ParserBlock
{
public:
  VariablesBlock(const std::string & name, InputParameters params);
  virtual ~VariablesBlock();

  virtual void execute();
  virtual void copyNodalValues(Moose::SubProblem & sys);

protected:
  CouplingMatrix * _cm;
};

template<>
InputParameters validParams<VariablesBlock>();

#endif //VARIABLESBLOCK_H
