#include <array>
#include <iostream>

struct punto{ double x,y;};

int readpunto(){
	int val;
	std::cin >> val;
	return val;
}

int estaenprimcuad (punto p){
		if (p.x >0 and p.y >0){
			return 1;
		}else{return 0;}	
}

int main (){
	std::array<punto,2>p;

	for(int i =0; i<2; ++i){
    std::cout << "ingresar valor del eje x \n";
	p.at(i).x= readpunto();
	std::cout << "ingresar valor del eje Y \n";
	p.at(i).y= readpunto();	
    }
    
    for(int i=0;i<2;++i){ 
    if (( estaenprimcuad (p.at(i) )) == 1){
    	std::cout << p.at(i).x << " : " <<p.at(i).y<<"\n"  ;	
	}
}
}

