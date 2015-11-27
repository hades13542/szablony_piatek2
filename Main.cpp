// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego
// pliku.

// UWAGA!
// Przy rozwiazaniu zadania nie wolno korzystac z dziedziczenia

// linie znajdujace sie pod komentarzem: "to nie moze sie skompilowac"
// musza generowac blad kompilacji

// Makefile dolaczony do rozwiazania powinien tworzyc plik wykonywalny
// o nazwie Lab11. Program nalezy kompilowac z flagami -Wall -g.

// Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
// obiektowe i plik wykonywalny.

// Pliku Main.cpp, nie wolno modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod). Powinien działać dla dowolnej
// liczby przekształceń.

// Przy wykonaniu zadania nie wolno korzystać z internetu, notatek,
// ani żadnych innych materiałów (w tym własnych wcześniej
// przygotowanych plików)

// Kody źródłowe muszą znajdować się w katalogu ~/oop/lab_LABNR. Prawa
// do tego katalogu muszą być równe 700 (tylko dostęp dla
// właściciela).

// Skonczone zadanie nalezy wyslac uruchamiajac skrypt 
// /home/dokt/dog/WyslijZadanie.sh
// bedac w katalogu zawierajacym rozwiazanie czyli ~/oop/lab_10

#include"lab11.h"
#include<iostream>

int main ()
{
  using namespace std;
  
  Float_t<METER> distance (10);
  Float_t<METER> distance2 (20);
  cout<<"distance: "<<distance.Get()<<" distance2: "<<distance2.Get()<<endl;
  Float_t<METER> suma = distance + distance2;
  cout<<"suma : "<<suma.Get()<<endl;
  Float_t<2*METER>kwadrat = distance*distance2;
  cout<<"kwadrat : "<<kwadrat.Get()<<endl;

  Float_t<4*METER>czwartaPotega = distance*distance*distance*distance;
  cout<<"kwadrat : "<<czwartaPotega.Get()<<endl;
  
  // // to nie moze sie skompilowac
  //  distance + kwadratDist;
  //  kwadratDist + czwartaPotega;
  //  suma + czwartaPotega;
}

/*
distance: 10 distance2: 20 time: 5
speed : 2
speed2 : 6
acceleration : 0.4
accSum : 1.6
*/
