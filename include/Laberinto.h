#include <vector>

class Laberinto{

private:
    std::vector<std::vector<int> > path;
    std::vector<std::vector<char> > laberinto;
    char shapeP,
         shapeL,
         shapeC;

    void addPathToLab(unsigned int,unsigned int);
    std::vector<int> findEnter() const;
    void cargarLaberinto(unsigned int,unsigned int);

public:
    Laberinto(char p, char l, char c, int x, int y){
        setShapeC(c);
        setShapeP(p);
        setShapeL(l);
        cargarLaberinto(x,y);
    }

    void resolverLaberinto();
    void printLab() const;
    void printLabResuelto() const;

    //Getters y setters
    void setShapeP(char p)    { (*this).shapeP = p; }
    void setShapeL(char l)    { (*this).shapeL = l; }
    void setShapeC(char c)    { (*this).shapeC = c; }

    char getShapeP() const    { return (*this).shapeP; }
    char getShapeL() const    { return (*this).shapeL; }
    char getShapeC() const    { return (*this).shapeC; }
    //std::vector<int> getTam()      { return (*this).tam;    }
    //std::vector<int> getExit()     { return (*this).exit;   }
    //std::vector<int> getEnter()    { return (*this).enter;  }
    //std::vector<std::vector<int> > getPath() { return (*this).path; }
};
