////////////////////////////////////////////////////////////////////////////////
//
// Francisco Javier Caracuel Beltrán
//
// Práctica 4
//
// obj_ply.h
//
////////////////////////////////////////////////////////////////////////////////

#ifndef _OBJPLY_H
#define _OBJPLY_H

#include <iostream>
#include <vector>
#include "obj3D.h"
#include "file_ply_stl.h"

using namespace std;

class ObjPLY : public Obj3D {
    
public:
    
    ////////////////////////////////////////////////////////////////////////////
    // Constructor
    //
    // Crea la geometría del objeto PLY
    //
    ObjPLY(bool ask);
    
    // Crea la geometría del objeto PLY con una textura determinada
    //
    ObjPLY(bool ask, string nameTexture, bool generateAutomatic);
    
    // Crea la geometría del objeto PLY sin preguntar por el archivo
    //
    ObjPLY(bool ask, string file, string nameTexture, bool generateAutomatic);
    
    // Crea la geometría del objeto PLY sin preguntar por el archivo y con una
    // textura determinada
    //
    ObjPLY(bool ask, string file);
    
    // Crea la geometría del objeto PLY sin preguntar por el archivo y
    // recibiendo los colores
    //
    ObjPLY(bool ask, string file, vector<float> colors);
    
    // Crea la geometría del objeto PLY sin preguntar por el archivo y
    // recibiendo los colores, además añade la textura al objeto
    //
    ObjPLY(bool ask, string file, vector<float> colors, string name, bool generateAutomatic);
        
    ////////////////////////////////////////////////////////////////////////////
    // Crea la geometría del objeto PLY que se quiere dibujar
    //
    void createGeometry();
    
    ////////////////////////////////////////////////////////////////////////////
    // Getters
    //
    
    // Devuelve el nombre del fichero
    string getFile();
        
protected:
    
    // Archivo PLY desde el que se carga la geometría
    string file;
    
    // Devuelve el nombre del fichero como *char
    char* getFileChar();
    
    // Asigna un fichero al objeto
    void setFile(string name);
    
    // Asigna un fichero al objeto y pide por consola el nombre
    void setFile();
    
    // Mensaje indicando que ha habido éxito al leer el fichero
    void success();

};

#endif