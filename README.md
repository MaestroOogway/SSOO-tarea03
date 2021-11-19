# SSOO-tarea03 Autor:Fabián Alexis Vidal Torres correo:fabian.vidalt@alumnos.uv.cl

Introducción:
  En la siguiente sección se presentará una breve explicación de la resolución de la tarea, indicando librerías utilizadas, funciones y el diseño del algoritmo.


Desarrollo:
  En primera instancia se llaman las librerías fundamentales para la funcionalidad del codigo, se utilizo la librearía "chrono" para hacer una espera estándar en cada iteración de ambos algoritmos.
también se requiere de la libreria "thread" para indicar el proceso que se quiere detener por un determinado tiempo, por ultimo la librería "csignal", la cual permite controlar las señales de entrada al sistema,de esta forma dar una respuesta a cada señal de interrupcion.

  En segunda instancia se indica el diseño del algoritmo, se opta por dividir ambos algoritmos Fibonacci y numeros impares, una vez separados cada uno en una respectiva función, se llama a cada uno para que se ejecute en un proceso padre y en un proceso hijo, esto con la ayuda de una función fork la cual permite la creacion de un proceso hijo y padre.

  Finalmente se llama a ambas funciones en el main de c++ y con el uso de las librerias anteriormente mencionadas, se incorpora el pid y ppid para ambos procesos , mostrando asi el pid de cada proceso y su numero correspondiente a cada sucesión. 

Conclusión:

  En esta tarea se logro comprender el uso de señales y procesos en linux mediante algoritmos simples y de rápida ejecución, también se identificaron componentes de código anteriormente no trabajadas como thread y fork. 
