#include <stdio.h>
#include <conio.h>

//FUNCION PRINCIPAL DE LOS TEMAS A ELECCION//

void temas();

//Materias//

void GeografiaTemas();
void MatematicasTemas();
void CienciasTemas();

//--------------------------------------------------------------------------
//Funciones de preguntas de Geografia Temas 1//

void pregunta_1();
void pregunta_2();
void pregunta_3();
void pregunta_4();
void pregunta_5();
void pregunta_6();
void pregunta_7();
void pregunta_8();
void pregunta_9();
void pregunta_10();

//Funciones de preguntas de geografia Temas 2//

void pregunta_11();
void pregunta_12();
void pregunta_13();
void pregunta_14();
void pregunta_15();
void pregunta_16();
void pregunta_17();
void pregunta_18();
void pregunta_19();
void pregunta_20();

//TEMAS GEOGRAFIA

void GeoTema0();
void GeoTema1();
void GeoTema2();

//----------------------------------------------------------------------
//Funciones de preguntas de Matematicas Temas 1//

void pregunta_21();
void pregunta_22();
void pregunta_23();
void pregunta_24();
void pregunta_25();
void pregunta_26();
void pregunta_27();
void pregunta_28();
void pregunta_29();
void pregunta_30();

//Funciones de preguntas de Matematicas Temas 2//

void pregunta_31();
void pregunta_32();
void pregunta_33();
void pregunta_34();
void pregunta_35();
void pregunta_36();
void pregunta_37();
void pregunta_38();
void pregunta_39();
void pregunta_40();

//TEMAS DE MATEMATICAS//

void Matematicas_Tema0();
void Matematicas_Tema1();
void Matematicas_Tema2();

//---------------------------------------------------------------
//Funciones preguntas de ciencia tema 1//

void pregunta_41();
void pregunta_42();
void pregunta_43();
void pregunta_44();
void pregunta_45();
void pregunta_46();
void pregunta_47();
void pregunta_48();
void pregunta_49();
void pregunta_50();

//Funciones preguntas de ciencia Tema 2//

void pregunta_51();
void pregunta_52();
void pregunta_53();
void pregunta_54();
void pregunta_55();
void pregunta_56();
void pregunta_57();
void pregunta_58();
void pregunta_59();
void pregunta_60();

//Temas de ciencias//

void CienciasTema0();
void CienciasTema1();
void CienciasTema2();

//---------------------------------
//Funcion principal del juego.
//---------------------------------

int main(){
	
	int user;
	
	printf("-------------------------------------------------\n");
	printf(">            JUEGO DE PREGUNTAS EN C            <\n");
	printf(">               By Jeff McWill                  <\n");
	printf("-------------------------------------------------\n");
	printf(">                                               <\n");
	printf("> 1.Comenzar juego                              <\n");
	printf("> 2.Salir                                       <\n");
	printf(">                                               <\n");
	printf("-------------------------------------------------\n");
	printf("> ");
	scanf("%i",&user);
	
	switch(user){
		case 1 : printf("Ok, ¡¡Empecemos!!\n"),temas();
			break;
		case 2 : printf("Saliendo del juego.\n");
			break;
		default : printf("Error, comando no asignado. Reintente de nuevo...\n");
	}
	
	system("pause");
	return 0;
}

void temas(){
	
	int user2;
	
	while(user2 != 5 && user2 != 4 && user2 != 3 && user2 != 2 && user2 != 1) {
	
		printf("-----------------------\n");
		printf(">                     <\n");
		printf(">       *TEMAS*       <\n");
		printf(">                     <\n");
		printf("-----------------------\n");
		printf(">                     <\n");
		printf(">1. Geografia         <\n");
		printf(">2. Matematicas       <\n");
		printf(">3. Ciencias          <\n");
		printf(">                     <\n");
		printf("-----------------------\n");
		printf(">4. Salir...          <\n");
		printf("-----------------------\n");
		printf("> ");
		scanf("%i",&user2);
		
		switch(user2){
			case 1 : printf("Empezemos con geografia...\n"),GeografiaTemas();
				break;
			case 2 : printf("Hey!! comenzemos con matematicas...\n"),MatematicasTemas();
				break;
			case 3 : printf("Seguro??? ok vayamos por ciencias...\n"),CienciasTemas();
				break;
			case 4 : printf("De acuerdo, volviendo al menu...\n"),main();
				break;
			default : printf("ERROR: comando no encontrado.\n");
		}
	}
}

//hacer sistema de aleatoriedad para que elija la pc entre tema 1 o tema 2 (aumentando la dificultad)

//Sistema de aleatoriedad del juego.

//SISTEMA DE ALEATORIEDAD DE GEOGRAFIA *COMPLETADO*

void GeografiaTemas(){
	
	int numero;
	
	srand(time(NULL));
	numero=rand() % 2;
	
	if (numero == 0){
		printf("Tema 1\n");
		GeoTema0();	
	}
	else if (numero == 1){
		printf("Tema 2\n");
		GeoTema1();
	}
	else if (numero == 2){
		printf("Tema 3\n");
		GeoTema2();
	}
}

//SISTEMA DE ALEATORIEDAD MATEMATICAS *COMPLETADO*

void MatematicasTemas(){
	
	int numero;
	
	srand(time(NULL));
	numero=rand() % 2;
	
	if (numero == 0){
		printf("Tema 1\n");
		Matematicas_Tema0();
	}
	else if (numero == 1){
		printf("Tema 2\n");
		Matematicas_Tema1();
	}
	else if (numero == 2){
		printf("Tema 3\n");
		Matematicas_Tema2();
	}
}

//SISTEMA DE ALEATORIEDAD CIENCIAS

void CienciasTemas(){
	
	int numero;
	
	srand(time(NULL));
	numero=rand() % 2;
	
	if (numero == 0){
		printf("Tema 1\n");
		CienciasTema0();
	}
	else if (numero == 1){
		printf("Tema 2\n");
		CienciasTema1();
	}
	else if (numero == 2){
		printf("Tema 3\n");
		CienciasTema2();
	}
}

//------------------------------------
//sistema de temas (Cuando sea elegido): 
//Geografia 

void GeoTema0(){
	pregunta_3();
	pregunta_4();
	pregunta_5();
	pregunta_6();
	pregunta_7();
	pregunta_11();
	pregunta_12();
	pregunta_13();
	pregunta_14();
	pregunta_15();
}

void GeoTema1(){
	pregunta_1();
	pregunta_2();
	pregunta_3();
	pregunta_4();
	pregunta_5();
	pregunta_6();
	pregunta_7();
	pregunta_8();
	pregunta_9();
	pregunta_10();
}

void GeoTema2(){
	pregunta_11();
	pregunta_12();
	pregunta_13();
	pregunta_14();
	pregunta_15();
	pregunta_16();
	pregunta_17();
	pregunta_18();
	pregunta_19();
	pregunta_20();
}

//SiStemas de temas:
//Matematicas//

void Matematicas_Tema0(){
	pregunta_25();
	pregunta_26();
	pregunta_27();
	pregunta_28();
	pregunta_29();
	pregunta_35();
	pregunta_36();
	pregunta_37();
	pregunta_38();
	pregunta_39();
}

void Matematicas_Tema1(){
	pregunta_21();
	pregunta_22();
	pregunta_23();
	pregunta_24();
	pregunta_25();
	pregunta_26();
	pregunta_27();
	pregunta_28();
	pregunta_29();
	pregunta_30();	
}
void Matematicas_Tema2(){
	pregunta_31();
	pregunta_32();
	pregunta_33();
	pregunta_34();
	pregunta_35();
	pregunta_36();
	pregunta_37();
	pregunta_38();
	pregunta_39();
	pregunta_40();
}

//Sistema de preguntas de ciencias// 

void CienciasTema0(){
	pregunta_41();
	pregunta_42();
	pregunta_43();
	pregunta_44();
	pregunta_45();
	pregunta_46();
	pregunta_47();
	pregunta_48();
	pregunta_49();
	pregunta_50();
}

void CienciasTema1(){
	pregunta_51();
	pregunta_52();
	pregunta_53();
	pregunta_54();
	pregunta_55();
	pregunta_56();
	pregunta_57();
	pregunta_58();
	pregunta_59();
	pregunta_60();
}

void CienciasTema2(){
	pregunta_46();
	pregunta_47();
	pregunta_48();
	pregunta_49();
	pregunta_50();
	pregunta_55();
	pregunta_56();
	pregunta_57();
	pregunta_58();
	pregunta_59();
}

//------------------------------------------------------------------
//geografia preguntas.
//TEMA 1.

void pregunta_1(){
	
	int rom;
	
	printf("-------------------------------------------\n");
	printf("¿Cual es el pais mas poblado del mundo?: \n\n");
	printf("1. Shanghai \n");
	printf("2. Yakarta \n");
	printf("3. Canton \n");
	printf("4. Tokio \n");
	printf("> ");
	scanf("%i",&rom);
	
	if (rom == 4){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :( \n");
	}
}
void pregunta_2(){
	
	int rom2;
	
	printf("¿Cual es el pais mas pequeño del mundo?: \n\n");
	printf("1. Ciudad de Buenos Aires \n");
	printf("2. Ciudad de Sao Pablo \n");
	printf("3. Canada \n");
	printf("4. Estado del Vaticano \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 4){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}
void pregunta_3(){
	
	int rom2;
	
	printf("¿Cual es el pais con mas habitantes del mundo? \n\n");
	printf("1. Francia\n");
	printf("2. Paises Bajos\n");
	printf("3. China\n");
	printf("4. Rusia\n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 3){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}
void pregunta_4(){
	
	int rom2;
	
	printf("¿Cual es el pais mas grande del mundo?: \n\n");
	printf("1. Rusia\n");
	printf("2. Portugal \n");
	printf("3. Japon\n");
	printf("4. Argelia\n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 1){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}
void pregunta_5(){
	
	int rom2;
	
	printf("¿Cual es la montaña mas grande del mundo?: \n\n");
	printf("1. Montaña Monte Everest\n");
	printf("2. Montaña Pico de la Viuda\n");
	printf("3. Montaña Aconcagua\n");
	printf("4. Montaña Tu Muerte es Aqui\n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 1){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}
void pregunta_6(){
	
	int rom2;
	
	printf("¿Donde podemos ver las auroras?: \n\n");
	printf("1. Brazil,Francia,Colombia,Chile, \n");
	printf("2. Canada,Noruega,Alaska,Finlandia,Rusia y Suecia \n");
	printf("3. Argentina,Alemania,EE.UU,Arabia. \n");
	printf("4. Lituania,Belgica,Dinamarca,Argelia,Marruecos \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 2){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}
void pregunta_7(){
	
	int rom2;
	
	printf("¿Cuantos mares hay en la tierra?: \n\n");
	printf("1. 20\n");
	printf("2. 30\n");
	printf("3. 60\n");
	printf("4. 45\n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 3){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}
void pregunta_8(){
	
	int rom2;
	
	printf("¿Cual es la ciudad mas pequeña del mundo?: \n\n");
	printf("1. Hum\n");
	printf("2. Pyonyam\n");
	printf("3. High Emm High\n");
	printf("4. Jim\n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 1){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}
void pregunta_9(){
	
	int rom2;
	
	printf("¿Cual es el desierto mas grande del mundo?: \n\n");
	printf("1. Tilcara\n");
	printf("2. Sahara\n");
	printf("3. Arabe\n");
	printf("4. Kalahari\n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 2){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}

//Geografia Tema 2//

void pregunta_10(){
	
	int rom2;
	
	printf("¿Cual es la ciudad mas calurosa de la tierra?: \n\n");
	printf("1. El valle de la muerte\n");
	printf("2. Ciudad del Cabo\n");
	printf("3. Valle de ningun lugar\n");
	printf("4. Ciudad de los Infiernos\n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 1){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}

//Tema Geografia 2

void pregunta_11(){
	
	int rom2;
	
	printf("¿En que pais se hablan mas idiomas?: \n\n");
	printf("1. Brazil\n");
	printf("2. Herimburgo\n");
	printf("3. Venezuela\n");
	printf("4. Nueva Guinea\n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 4){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}
void pregunta_12(){
	
	int rom2;
	
	printf("¿Cuantos estados forman Estados Unidos?: \n\n");
	printf("1. 20\n");
	printf("2. 50\n");
	printf("3. 40\n");
	printf("4. 10\n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 2){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}
void pregunta_13(){
	
	int rom2;
	
	printf("¿Cuantos continentes Existen?: \n\n");
	printf("1. Arabia,Klose,Asia,Europa\n");
	printf("2. Africa,Europa,Asia,America y Oceania\n");
	printf("3. Europa,Africa,America del sur y norte\n");
	printf("4. Afria y no me acuerdo\n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 2){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}
void pregunta_14(){
	
	int rom2;
	
	printf("¿Que continente es el mas poblado?: \n\n");
	printf("1. America\n");
	printf("2. Africa\n");
	printf("3. Asia\n");
	printf("4. Pangea\n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 3){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}
void pregunta_15(){
	
	int rom2;
	
	printf("¿Que pais se encuentra entre dos continentes? \n\n");
	printf("1. Bolivia\n");
	printf("2. Peru\n");
	printf("3. Paris\n");
	printf("4. Turquia\n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 4){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}
void pregunta_16(){
	
	int rom2;
	
	printf("¿Cual es la cordillera de montañas mas larga del mundo?: \n\n");
	printf("1. Cordillera de los andes\n");
	printf("2. Montañas Rocosas\n");
	printf("3. Sierras Madres\n");
	printf("4. Cordillera Isabelia\n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 1){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}
void pregunta_17(){
	
	int rom2;
	
	printf("¿Cuantos paises forman parte de la union Europea?: \n\n");
	printf("1. 100\n");
	printf("2. 30\n");
	printf("3. 27\n");
	printf("4. 90\n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 3){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}
void pregunta_18(){
	
	int rom2;
	
	printf("¿Cual es el lago mas grande del mundo?\n\n");
	printf("1. Mar Rojo\n");
	printf("2. Mar Caspio\n");
	printf("3. Mar Muerto\n");
	printf("4. Mar Helado\n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 2){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}
void pregunta_19(){
	
	int rom2;
	
	printf("¿Ciudad mas fria del mundo?\n\n");
	printf("1. Oymyakon \n");
	printf("2. Ciudad de River\n");
	printf("3. Nueva Zelanda\n");
	printf("4. Buenos Aires\n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 1){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}
void pregunta_20(){
	
	int rom2;
	
	printf("¿Cual es la montaña mas alta de Europa?\n\n");
	printf("1. Monte Arabe\n");
	printf("2. Monte Elbrus\n");
	printf("3. Monte Rohnmon\n");
	printf("4. Monte Ural\n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 2){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}

//--------------------------------------------------------------------------------------
//LISTADO DE PREGUNTAS DE MATEMATICAS...
//PARTE 1

void pregunta_21(){
	
	int rom2;
	
	printf("Una madre tiene 40 años y su hijo 10 \n"); 
	printf("¿Cuantos años deben pasar para que la edad de la madre sea el triple que la del hijo? \n\n");
	printf("1. 20 años \n");
	printf("2. 30 años \n");
	printf("3. 5 años \n");
	printf("4. 100 años \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 5){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}

void pregunta_22(){
	
	int rom2;
	
	printf("Hay 3 cajas de igual tamaño. Dentro de cada uno de las tres\n"); 
	printf("hay dos mas pequeñas, y en cada  una de esas, hay otras 4 mas pequeñas...\n");
	printf("¿Cuantas cajas hay en total?: \n\n");
	printf("1. 100 Cajas. \n");
	printf("2. 24 Cajas. \n");
	printf("3. 5 Cajas. \n");
	printf("4. 20 Cajas. \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 2){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}
void pregunta_23(){
	
	int rom2;
	
	printf("¿Cuantos cuartos son seis mitades?: \n\n");
	printf("1. 12 Cuartos. \n");
	printf("2. 24 Cuartos. \n");
	printf("3. 50 Cuartos. \n");
	printf("4. 10 Cuartos. \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 1){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}
void pregunta_24(){
	
	int rom2;
	
	printf("Un hombre y medio se comen un lecho y medio en un minuto y medio.\n");
	printf("¿Cuantos hombres hacen falta para comer 60 lechones en media hora? \n\n");
	printf("1. 4 Hombres\n");
	printf("2. 20 Hombres\n");
	printf("3. 10 Hombres\n");
	printf("4. 3 Hombres\n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 4){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}
void pregunta_25(){
	
	int rom2;
	
	printf("En un deposito hay un nivel muy bajo de agua, pero se duplica todos los dias...\n");
	printf("En total tarda 60 dias en llenarse...\n");
	printf("¿Cuantos tarda en llegar a la mitad? \n\n");
	printf("1. Tarda 90 dias en llegar a la mitad. \n");
	printf("2. Tarda 60 dias en llegar a la mitad. \n");
	printf("3. Tarda 59 dias en llegar a la mitad. \n");
	printf("4. Tarda 30 dias en llegar a la mitad. \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 3){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}
void pregunta_26(){
	
	int rom2;
	
	printf("¿Cuantos kilos de mercancia hay que vender a 6 dol. para obtener 3726 dol.?\n\n");
	printf("1. 621 Kilos. \n");
	printf("2. 300 Kilos. \n");
	printf("3. 200 Kilos. \n");
	printf("4. 140 Kilos. \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 1){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}
void pregunta_27(){
	
	int rom2;
	
	printf("Mira: 10 () 3 () 9 = 39... ¿Como obtengo el res. de 39? \n\n");
	printf("1. * y - \n");
	printf("2. - y + \n");
	printf("3. x y + \n");
	printf("4. + y x \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 3){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}
void pregunta_28(){
	
	int rom2;
	
	printf("Si 5 maq. hacen 5 art. en 5 min. ¿Cuanto tiempo necesitaran 100 maq para 100 art? \n\n");
	printf("1. 10 minutos \n");
	printf("2. 20 minutos \n");
	printf("3. 30 minutos \n");
	printf("4. 5 minutos \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 4){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}
void pregunta_29(){
	
	int rom2;
	
	printf("¿Cuantas veces puede resaltarse el numero 1 en 1.111? \n\n");
	printf("1. Una Vez \n");
	printf("2. Cuatro veces \n");
	printf("3. Tres Veces \n");
	printf("4. Diez Veces \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 1){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}

void pregunta_30(){
	
	int rom2;
	
	printf("Un niño consume 500 gramos diarios de pan.\n");
	printf("¿Cual sera el consumo diario en kilos de un comedor compuesto por 126 niños?\n\n");
	printf("1. 50 Kilos \n");
	printf("2. 60 Kilos \n");
	printf("3. 100 kilos \n");
	printf("4. 200 Kilos \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 2){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}

//Segunda tanda de preguntas de matematicas//

void pregunta_31(){
	
	int rom2;
	
	printf("¿Cual es el ultimo mes del año con 31 dias? \n\n");
	printf("1. Enero\n");
	printf("2. Junio\n");
	printf("3. Marzo\n");
	printf("4. Diciembre\n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 4){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}
void pregunta_32(){
	
	int rom2;
	
	printf("¿Que palabra matematica significa el tamaño relativo de algo? \n\n");
	printf("1. Escalable \n");
	printf("2. Redituable \n");
	printf("3. Inconsistente \n");
	printf("4. Cociente \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 1){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}

void pregunta_33(){
	
	int rom2;
	
	printf("¿Que numero es igual a 334 X 7 + 335? \n\n");
	printf("1. 3000\n");
	printf("2. 1992\n");
	printf("3. 3040\n");
	printf("4. 2673\n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 4){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}

void pregunta_34(){
	
	int rom2;
	
	printf("¿Cual es el nombre del sistema de medicion antes de que fuera metrico? \n\n");
	printf("1. Plusbalia \n");
	printf("2. Metrico \n");
	printf("3. Preciso \n");
	printf("4. Preferencial \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 3){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}

void pregunta_35(){
	
	int rom2;
	
	printf("¿Que numero es igual a 45 x 25 + 452?\n\n");
	printf("1. 4000 \n");
	printf("2. 1577 \n");
	printf("3. 1999 \n");
	printf("4. 2000 \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 2){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}

void pregunta_36(){
	
	int rom2;
	
	printf("¿Cual es la receta matematica para resolver algo? \n\n");
	printf("1. Formula \n");
	printf("2. Mecanica \n");
	printf("3. Metrica \n");
	printf("4. Receta \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 1){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}

void pregunta_37(){
	
	int rom2;
	
	printf("¿Cuantos grados hay en un angulo recto? \n\n");
	printf("1. 100 grados. \n");
	printf("2. 180 grados. \n");
	printf("3. 90 grados. \n");
	printf("4. 25 grados. \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 3){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}

void pregunta_38(){
	
	int rom2;
	
	printf("¿Donde se origino el *Cubo magico*?\n\n");
	printf("1. Mexico \n");
	printf("2. Lituania \n");
	printf("3. Belgica \n");
	printf("4. China Antigua \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 4){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}

void pregunta_39(){
	
	int rom2;
	
	printf("¿Quien descubrio el simbolo del Infinito? \n\n");
	printf("1. John Wallis \n");
	printf("2. John Marston \n");
	printf("3. Max Caulfield \n");
	printf("4. Bruno Diaz \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 1){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}

void pregunta_40(){
	
	int rom2;
	
	printf("¿Quien descubrio las leyes de la palanca y la polea? \n\n");
	printf("1. Artigas \n");
	printf("2. Alquimedes \n");
	printf("3. John Lennon \n");
	printf("4. Narciso \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 2){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}

//--------------------------------------------------------------------------------
//primera tanda de preguntas en ciencias//

void pregunta_41(){
	
	int rom2;
	
	printf("¿Cual es el animal mas grande que habita la tierra? \n\n");
	printf("1. Jirafa \n");
	printf("2. Pez Pajaro \n");
	printf("3. Ballena Azul \n");
	printf("4. Tiburon Blanco \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 3){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}

void pregunta_42(){
	
	int rom2;
	
	printf("¿Que organo consume mas energia en el cuerpo humano? \n\n");
	printf("1.El cerebro \n");
	printf("2.Las Piernas \n");
	printf("3.Los brazos \n");
	printf("4.Las manos \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 1){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}

void pregunta_43(){
	
	int rom2;
	
	printf("¿Cual es la formula quimica del agua? \n\n");
	printf("1.H30  \n");
	printf("2.H20  \n");
	printf("3.H2O  \n");
	printf("4.H10  \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 3){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}

void pregunta_44(){
	
	int rom2;
	
	printf("¿Cual es el unico satelite natural de la tierra? \n\n");
	printf("1.Marte \n");
	printf("2.Luna  \n");
	printf("3.Saturno \n");
	printf("4.El Sol \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 2){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}

void pregunta_45(){
	
	int rom2;
	
	printf("¿Cual es la edad del universo? \n\n");
	printf("1.Trece mil millones de años \n");
	printf("2.Veinte millones de años \n");
	printf("3.Diez mil millones de años \n");
	printf("4.mil millones de años \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 1){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}

void pregunta_46(){
	
	int rom2;
	
	printf("¿Cual es el planeta mas cercano al sol? \n\n");
	printf("1.La tierra \n");
	printf("2.Marte \n");
	printf("3.Urano \n");
	printf("4.Mercurio \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 4){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}

void pregunta_47(){
	
	int rom2;
	
	printf("Un electron lleva una carga positiva. ¿Verdadero o Falso? \n\n");
	printf("1. Verdadero, es carga positiva \n");
	printf("2. Falso. Es de carga negativa \n");
	printf("3. Verdadero. Es de carga negativa \n");
	printf("4. Falso. No es ni carga negativa ni positiva, es neutro. \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 2){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}

void pregunta_48(){
	
	int rom2;
	
	printf("¿Cual es el primer elemento de la tabla periodica? \n\n");
	printf("1.El hidrogeno \n");
	printf("2.El Oxigeno \n");
	printf("3.El H2O \n");
	printf("4.El Oxido \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 1){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}

void pregunta_49(){
	
	int rom2;
	
	printf("¿Quien propuso la teoria de la evolucion? \n\n");
	printf("1.Charles Chaplin \n");
	printf("2.Carol Pilgrey \n");
	printf("3.Charles Darwin \n");
	printf("4.Dr Francis Coppola \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 3){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}

//SEGUNDA TANDA DE PREGUNTAS DE CIENCIAS...

void pregunta_50(){
	
	int rom2;
	
	printf("¿Cuales son los tres estados de la materia? \n\n");
	printf("1.Solido,Liquido y Gaseoso \n");
	printf("2.Liquido,Gaseoso y Solido \n");
	printf("3.Solido,Gaseoso y Liquido \n");
	printf("4.Gaseoso,Solido y Liquido \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 1){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}

void pregunta_51(){
	
	int rom2;
	
	printf("¿Cual es el simbolo quimico del oro? \n\n");
	printf("1.Au \n");
	printf("2.Aux \n");
	printf("3.Neo \n");
	printf("4.Ne \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 1){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}

void pregunta_52(){
	
	int rom2;
	
	printf("¿Es posible Viajar en el Tiempo? \n\n");
	printf("1.No. \n");
	printf("2.Para nada. \n");
	printf("3.Si, segun las peliculas. \n");
	printf("4.Si,Segun la teoria de la relatividad. \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 4){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}

void pregunta_53(){
	
	int rom2;
	
	printf("¿Como se llama el centro de un atomo? \n\n");
	printf("1.Ribosomas \n");
	printf("2.Cromosomas \n");
	printf("3.Nucleo \n");
	printf("4.Litosomas \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 3){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}

void pregunta_54(){
	
	int rom2;
	
	printf("¿Son los peces vertebrados o invertebrados? \n\n");
	printf("1.Vertebrados \n");
	printf("2.Invertebrados \n");
	printf("3.No tienen huesos \n");
	printf("4.Si tienen pero son invisibles \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 1){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}

void pregunta_55(){
	
	int rom2;
	
	printf("¿Cual es el nombre de la sustancia que le da a la piel y pigmentacion? \n\n");
	printf("1.Riburina \n");
	printf("2.Querubina \n");
	printf("3.Melanina \n");
	printf("4.Ribonina \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 3){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}

void pregunta_56(){
	
	int rom2;
	
	printf("¿Hemos tenido contacto con los extraterrestres? \n\n");
	printf("1.SI \n");
	printf("2.SI. AYER \n");
	printf("3.Oficialmente, No \n");
	printf("4.Creo que si. \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 3){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}

void pregunta_57(){
	
	int rom2;
	
	printf("¿Que planeta es conocido como *El planeta rojo*? \n\n");
	printf("1.Mercurio \n");
	printf("2.Marte \n");
	printf("3.Tierra \n");
	printf("4.Venus \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 2){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}

void pregunta_58(){
	
	int rom2;
	
	printf("¿Cuantos lados tiene un hexagono? \n\n");
	printf("1.5 \n");
	printf("2.7 \n");
	printf("3.6 \n");
	printf("4.8 \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 3){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}

void pregunta_59(){
	
	int rom2;
	
	printf("¿De que sustancia estan hechas las uñas? \n\n");
	printf("1.Queratina \n");
	printf("2.Melanina \n");
	printf("3.Querubina \n");
	printf("4.Tiposomas \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 1){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}

void pregunta_60(){
	
	int rom2;
	
	printf("¿Cual es la temperatura mas baja que se puede alcanzar? \n\n");
	printf("1.0 Grados. \n");
	printf("2.-20 Grados. \n");
	printf("3.-100 Grados. \n");
	printf("4.-273 Grados. \n");
	printf("> ");
	scanf("%i",&rom2);
	
	if (rom2 == 1){
		printf("Pregunta CORRECTA :3 \n");
	}
	else{
		printf("Pregunta INCORRECTA :C \n");
	}
}

// fin del codigo de preguntas.

