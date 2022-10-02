/*Una empresa quiere hacer una compra de varias piezas de la misma clase a una fábrica de
refacciones. La empresa, dependiendo del monto total de la compra, decidirá qué hacer para
pagar al fabricante.
a) Si el monto total de la compra excede de $500 000 la empresa tendrá la capacidad de
invertir de su propio dinero un 55% del monto de la compra, pedir prestado al banco un 30%
y el resto lo pagará solicitando un crédito al fabricante.
b) Si el monto total de la compra no excede de $500 000 la empresa tendrá capacidad de
invertir de su propio dinero un 70% y el restante 30% lo pagará solicitando crédito al
fabricante.
c) El fabricante cobra por concepto de intereses un 20% sobre la cantidad que se le pague a
crédito.*/
#include<iostream>
#include<conio.h>
using namespace std;
double porcentaje(double total,double porcen);
void credito(double total,double porcen);
void imprimir(double t_propio,double t_banco);
main(){
	char rsp;
	double total,p,b,c,t_propio,t_banco,t_credito;
	do{
	system("cls");
	cout<<"Monto total de la compra: ";
	cin>>total;
	cout<<endl;
	if(total<= 500000){
		p =0.70;
		c =0.30;
		b =0;
	}else{
		p =0.55;
		b =0.30;
		c =1-(p+b);
	}
	t_propio = porcentaje(total,p);
	t_banco = porcentaje(total,b);
	imprimir(t_propio,t_banco);
	credito(total,c);
	cout<<"¿Desea realizar otro calculo? s/n";
	cin>>rsp;
}while(rsp=='s');
	getch();
}

double porcentaje(double total,double porcen){
	double tcalculo;
	tcalculo = total * porcen;
	return tcalculo;
}

void credito(double total,double porcen){
	double tcredito,intereses,cfinal;
	tcredito = total * porcen;
	intereses = tcredito * .20;
	cfinal = intereses + total;
	cout<<"El credito solicitado al fabricante es de  "<<tcredito<<endl;
	cout<<"Los intereses por el credito seran "<<intereses<<endl;
	cout<<"El costo final con intereses es de "<<cfinal<<endl;
}

void imprimir(double t_propio,double t_banco){
		cout<<"La inversion propia es de "<<t_propio<<endl;
		cout<<"El prestamo del banco es de "<<t_banco<<endl;
}

