#include<iostream>  //Librerías necesarias para el objetivo de la tarea.
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<thread>
#include<chrono>
#include<csignal>

using namespace std;
using namespace std::chrono_literals;
    
void fibonacci(){   //Algoritmo Fibonacci.
    int n=1;
    int a=0;
    int b=1;
    int aux=0;
    while (n<=50)
    {
        aux = b;
        b = b+a;
        a = aux;
        cout<<"Sucesión n°:"<<n<<" Número fibonacci:"<<b<<" PPID:"<<getpid()<<endl; //En cada sucesión se muestra pid y numero correspondiente a sucesión.
        n++;
        std::this_thread::sleep_for(2000ms);    //Esperar 2 segundos antes de mostr la proxima sucesión.   
    }   
}

void nimpar(){ //Algoritmo de n° primos.
    int n=1;
    int a=1;
    while (n<=50)
    {
        if(a%2 != 0)
        {
            cout<<"Iteración n°:"<<n<<" Número impar:"<<a<<" PID:"<<getpid()<<endl; //En cada iteración se muestra pid y numero correspondiente a iteración.
            n++;
            std::this_thread::sleep_for(2000ms);////Esperar 2 segundos antes de mostr la proxima iteración.
            
        }
        a++;
    }
}

void controlador(int sig){
    cout<<"Acción denegada"<<sig<<endl; //Mostrar msj.
}

int main(){

    pid_t a = fork();               //fork
    signal(SIGTSTP, controlador);   //Recibir ^z
    signal(SIGINT, controlador);    //Recibir ^c
    signal(SIGQUIT, controlador);   //recibir ^/
    if(a > 0){                      //Proceso padre 
        fibonacci();                //Llamar función.
    }
    else if(a == 0){                //Proceso hijo.
        nimpar();                   //Llamar función.
    }

    return 0;
}
