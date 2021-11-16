
#ifndef HEAD_H
#define HEAD_H

#ifdef __cplusplus
extern "C" {
#endif
typedef int dato;

struct arbol{
dato Dato;
int pos_izq;
int pos_der;
struct arbol *izq;
struct arbol *der;
};
    
    
    



#ifdef __cplusplus
}
#endif

#endif /* HEAD_H */

