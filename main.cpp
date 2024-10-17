/*-------------------------------------------------
 * Dato de entrada:  r, h  (double)
 * Dato de Salida:  areaDeLaBase, areaLateral,
 *                  areaTotal, Volumen (double)
 -------------------------------------------------*/

#include "CCilindro.h"

int main()
{
  double r, h;

  cout << "Radio: "; cin >> r;
  cout << "Altura : "; cin >> h;
  CCilindro    C1(r,h);
  cout << "El area de la base es: " << C1.areaDeLaBase() << "\n";
  cout << "El area lateral    es: " << C1.areaLateral() << "\n";
  cout << "El area total      es: " << C1.areaTotal() << "\n";
  cout << "El volumen         es: " << C1.volumen() << "\n";
  cout <<  "\nAhora repetimos los calculos pero incrementado el valor\n";
  cout << "Del radio en 10 unidades y el valor de la altura en 5 unidades\n";

  C1.setRadio(C1.getRadio() + 10);
  C1.setAltura(C1.getAltura()+5);
  cout << "El area de la base es: " << C1.areaDeLaBase() << "\n";
  cout << "El area lateral    es: " << C1.areaLateral() << "\n";
  cout << "El area total      es: " << C1.areaTotal() << "\n";
  cout << "El volumen         es: " << C1.volumen() << "\n";

 //---- creen un segundo objeto pero usando el constructor por defecto
  CCilindro       C2;
  cout << "Radio: "; cin >> r;
  cout << "Altura : "; cin >> h;
  C2.setRadio(r);
  C2.setAltura(h);
  cout << "El area de la base es: " << C2.areaDeLaBase() << "\n";
  cout << "El area lateral    es: " << C2.areaLateral() << "\n";
  cout << "El area total      es: " << C2.areaTotal() << "\n";
  cout << "El volumen         es: " << C2.volumen() << "\n";
  cout << "\n\n";
  cout << "Ahora creamos un objeto dinamico\n";

  CCilindro     *pObjeto = nullptr;
  cout << "Radio: "; cin >> r;
  cout << "Altura : "; cin >> h;
  pObjeto = new CCilindro(r,h);
  cout << "El area de la base es: " << (*pObjeto).areaDeLaBase() << "\n";
  cout << "El area de la base es: " << pObjeto->areaDeLaBase() << "\n";
  cout << "El area lateral    es: " << pObjeto->areaLateral() << "\n";
  cout << "El area total      es: " << pObjeto->areaTotal() << "\n";
  cout << "El volumen         es: " << pObjeto->volumen() << "\n";
  delete pObjeto;
  pObjeto = nullptr;

    return 0;
}
