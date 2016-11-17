/****************************************************************/
/*               DO NOT MODIFY THIS HEADER                      */
/* MOOSE - Multiphysics Object Oriented Simulation Environment  */
/*                                                              */
/*           (c) 2010 Battelle Energy Alliance, LLC             */
/*                   ALL RIGHTS RESERVED                        */
/*                                                              */
/*          Prepared by Battelle Energy Alliance, LLC           */
/*            Under Contract No. DE-AC07-05ID14517              */
/*            With the U. S. Department of Energy               */
/*                                                              */
/*            See COPYRIGHT for full restrictions               */
/****************************************************************/

#ifndef NONLINEARSYSTEM_H
#define NONLINEARSYSTEM_H

#include "SystemBase.h"
#include "NonlinearSystemBase.h"

/**
 * Nonlinear system to be solved
 *
 * It is a part of FEProblem ;-)
 */
class NonlinearSystem : public NonlinearSystemBase
{
public:
  NonlinearSystem(FEProblem & problem, const std::string & name);
  virtual ~NonlinearSystem();

};

#endif /* NONLINEARSYSTEM_H */
