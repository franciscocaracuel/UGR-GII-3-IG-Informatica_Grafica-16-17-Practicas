////////////////////////////////////////////////////////////////////////////////
//
// Francisco Javier Caracuel Beltrán
//
// Práctica 4
//
// cube.h
//
////////////////////////////////////////////////////////////////////////////////

#ifndef _CUBE_H
#define _CUBE_H

#include "obj3D.h"

class Cube : public Obj3D {
    
public:
    
    ////////////////////////////////////////////////////////////////////////////
    // Constructor
    //
    // Crea la geometría del cubo
    //
    Cube();
    
    Cube(string nameTexture, bool generateAutomatic);
        
    ////////////////////////////////////////////////////////////////////////////
    // Crea la geometría del cubo que se quiere dibujar
    //
    void createGeometry();

};

#endif