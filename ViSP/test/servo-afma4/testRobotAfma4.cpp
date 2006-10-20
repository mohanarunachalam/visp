/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 * Copyright Projet Lagadic / IRISA-INRIA Rennes, 2005
 * www  : http://www.irisa.fr/lagadic
 *+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 * File:      $RCSfile: testRobotAfma4.cpp,v $
 * Author:    Fabien Spindler
 *
 * Version control
 * ===============
 *
 *  $Id: testRobotAfma4.cpp,v 1.5 2006-10-20 14:04:39 mtallur Exp $
 *
 * Description
 * ============
 *  Tests the control law
 * ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

/*!
  \example testRobotAfma4.cpp

  Example of a real robot control, the Afma4 robot (cylindrical robot, with 4
  degrees of freedom).
*/

#include <iostream>
using namespace std;

#include <visp/vpConfig.h>
#include <visp/vpRobotAfma4.h>
#include <visp/vpDebug.h>

#ifdef VISP_HAVE_AFMA4

#ifdef VISP_HAVE_GSL
int gsl_warnings_off;
#endif

int main()
{
  try 
  {
    cout << "a test..." << endl;

    vpAfma4 afma4;
    vpCTRACE << afma4;

    vpRobotAfma4 robotAfma4;
    vpCTRACE << robotAfma4;
    return 1;
  }
  catch (...)
  {
    vpERROR_TRACE(" Test failed") ;
    return 0;
  }
}

#else
int main()
{
  cout << "a test..." << endl;
}

#endif
