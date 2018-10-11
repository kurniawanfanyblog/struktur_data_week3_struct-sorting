#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

#define N_MOVIES 5

struct movies_t {
	char title [50];
	int year;
	int films;
	
}

films[N_MOVIES];
void printmovie(movies_t movie);

int main (){

char buffer[50];
int n;
for(n=0;n<N_MOVIES;n++){
	cout<<"Masukkan judul film : ";
	cin.getline(films[n].title,50);
	cout<<"masukkan tahun : ";
	cin.getline(buffer,50);
	films[n].year=atoi(buffer);
}
cout<<"\nFilm yang menjadi favorit kamu :\n";
for(n=0;n<N_MOVIES;n++)
	printmovie(films[n]);
return 0;
}
void printmovie(movies_t movie){
	cout<<movie.title;
	cout<<"(" <<movie.year<<")\n";
}
