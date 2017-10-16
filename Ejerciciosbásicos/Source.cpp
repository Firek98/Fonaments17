////////////////////////////////////////////////////////
////              IGNORAR ESTA PARTE                ////
#include <cstdlib>
#ifdef _WIN32
#	include <cstdio>
#	include <windows.h>
#	define VSPrint OutputDebugStringA
#else
#	include <cstdio>
#	define VSPrint printf
#endif
#define dassert(f,c,...) if(f(__VA_ARGS__) != c){ VSPrint("\n####" #f "(" #__VA_ARGS__ ") expected " #c "\n"); exit(0); }
//////////////////////////////////////////////////////////

// Est�s a punto de entrar en Circle Soft, una de tus compa��as favoritas que lleva haciendo RPGs
// desde el crash de los 90. En el examen de entrada te piden que arregles una funci�n que uno de sus desarrolladores
// no puede arreglar, es una funci�n que devuelve true si el Nube (el personaje principal) esta vivo.
bool nube_vivo(int hp)
{
	return hp > 0;
}

// El dise�ador jefe de Circle Soft quiere hacer un homenaje a First Fiction I en nuestro RPG AAA.
// Despu�s de hacer un brainstorm, a todos os ha convencido la idea de crear un hechizo "muerte nivel 1".
// Este hechizo deber�a matar a todos los enemigos cuyo nivel sea m�ltiple de 1.
// Programador!!! Necesitamos una funci�n que nos diga si podemos matar al enemigo o no!
bool muerte_nivel_1(int nivel)
{
	return true;
}

// Despu�s de que el equipo de Quality Assurance (Testers) probase el juego, han llegado a la conclusi�n
// de que el hechizo no acaba de funcionar, parece estar un poco OP.
// Despu�s de m�ltiples reuniones ejecutivas en el equipo de dise�o de Circle Soft decide nerfear el hechizo
// Ahora ser� muerte nivel "3"... Si s�lo tuvieramos una funci�n que nos diga si podemos matar al enemigo o no...
bool muerte_nivel_3(int nivel)
{
	return nivel % 3 == 0;
}

// El productor jefe de Circle Soft tiene dos funci�nes que le dejaron sus antecesores
// gracias a ellas es capaz de saber:
// 1.-Si hoy es un d�a de vacaciones
// 2.-Si hoy es s�bado o domingo
// Promete doblar tu sueldo si le das una funci�n que te diga si hoy tiene que levantarse o puede darse media vuelta y dormir
bool fiesta(bool vacaciones, bool finde)
{
	return vacaciones || finde;
}

// Continuando el desarrollo de la nueva superproducci�n de Circle Soft, lleg�is al punto en el que los enemigos mueren!!
// Varios a�os de trabajo por fin son recompensados!!!
// No obstante, tenemos un problema con la funci�n que nos dice cuanto oro tendr� el personaje despu�s de matar a un bicho.
// El programador de vankia que contratamos dice que todo esta bien...
// Pero no conseguimos que con cada bicho que muere el oro se incremente en 100.
// Programador!!! Encuentra el error y arr�glalo
float oro_enemigos(float oro, int numeroDeBichos)
{
	return oro + (100.f * numeroDeBichos);
}

// Despu�s de que te quejaras porque el productor no te subi� el sueldo te echaron a la calle
// Pero r�pidamente encontraste trabajo en Danbai Conam, que esta trabajando en el juego de lucha Cat Ball NEKOVERSE 4
// Programando el sistema de combate necesitamos una funci�n que reduzca la vida de los enemigos cuando un personaje hace un Gamegameha
// Nota del departamento de dise�o: 
//           El gamegameha hace 25 de da�o, requiere de 250 chakra para ser usado y no puede dejar el enemigo con vida negativa
int gamegameha(int vidaEnemigo, int chakra)
{
	if (chakra >= 250 && vidaEnemigo > 25)
		return vidaEnemigo - 25;
	else if (chakra >= 250 && vidaEnemigo < 25)
		return 0;
	else
		return vidaEnemigo;
}

// Despu�s de que nuestro equipo de robots asi�ticos haya probado el modo competitivo de Cat Ball nos hemos dado cuenta de que
// Al parecer los robots se quejaron de que el gamegameha baja vida aunque no acierta...
// El gamegameha s�lo debe acertar si el enemigo esta a la derecha del personaje!!!!
bool gamegameha_golpea(int personajeX, int personajeY, int enemigoX, int enemigoY)
{
	return (personajeX < enemigoX && personajeY < enemigoY);
}

// Tus �xitos en V�lvula juegos ser�n recordados. Hydraulic Arts te ha ofrecido el triple de sueldo
// para que te unas a su fiesta, has o�do hablar de sus malas praxis con jornadas laborales de hasta 18h
// y odias el poco soporte que dan a sus juegos post-lanzamiento, pero es una oferta que no puedes rechazar.
// Tu primer trabajo ser� trabajar en el simulador de crianza de princesas "Medal of Leonor"
// Uno de los game designers te pide una funci�n que dado el peso de tu princesa y un tipo de comida entre 'V' (vegetales) 'M' (carne) y 'S' (dulce):
// * Devuelvas su peso reducido al 99% si es vegetal.
// * Devuelvas su peso aumentado en 2% si es carne.
// * Devuelvas su peso aumentado en 2 unidades si son dulces.
float princess_food(float weight, char type)
{
	return weight;
}

// Debido a tus constantes fracasos en Danbay Conami, te han cedido a la Tienda de Humo m�s grande de internet.
// Participas en el desarrollo de Alf Live III, donde para dar m�s frenetismo los jugadores vivos deben ser
// immortales durante un segundo cuando su vida baje de 25.
// El dise�ador dios Gaben te ha pedido que hagas una funci�n que le diga si un enemigo es immortal o no.
bool casi_muerto(int hp, float tiempoQueLlevaEnImmortal)
{
	return tiempoQueLlevaEnImmortal > 1.0f;
}

// Medal of Leonor ha sido un fracaso, no obstante Hydraulic Arts decide mantenerte en plantilla, tu crunch time vali� la pena!
// El CEO, que no tiene nada mejor que hacer, te introduce en el equipo de desarrollo de President Evil, un nuevo proyecto
// en el que simulaci�n tendr�s que gestionar el gobierno de los estados unidos y su relaci�n pol�tica con Catalunya.
// Entre las muchas tareas de un presidente, esta en conceder contratos de obra, para aportar realismo al juego
// y sabiendo:
// * El presupuesto del que dispone
// * El dinero que cuesta la obra
// Queremos saber qu� cantidad le corresponde al presidente, siguiendo los est�ndares de corrupci�n:
//    "Lo m�ximo entre un 3% del coste de la obra o el 10% del presupuesto" menos un euro de comisi�n para vankia
unsigned int president_evil(unsigned int presupuesto, unsigned int costeObra)
{
	return costeObra;
}

// Tras los repetidos fracasos de todos los productos en los que has pasado, el CTO de Hydraulic Arts te asigna al 
// como unidad de contraespionaje en el proyecto "Assassin's Crepes", de la empresa rival "Shit-like Logo", con el 
// objetivo de obtener informaci�n de esta nueva saga de sigilo y garantizar su fracaso.
// Para hacerlo, te pide que sabotees la funci�n que gestiona la input para que si se pulsa 'X' mate autom�ticamente a los enemigos
// * Los enemigos s�lo deben morir si el juego ya ha salido, a partir del 20180924
// * Si estamos en una cinem�tica, debe ignorarse este comando.
// * Los aliados no pueden morir
// * Un enemigo no puede eliminarse dos veces
bool eliminar_enemigo(unsigned char boton, bool yaEliminado, bool enCinematica, int fecha)
{
	return fecha > 20180924;
}

// Pese a tus continuos esc�ndalos en la ind�stria incluyendo fracasos y traiciones, "Yoshiaki Kurosawa", 
// dise�ador jefe de Bind Wanker, ha querido contratarte para su nuevo juego "Metro ID", un juego de gesti�n
// de vias de metro para hacer que la gente no espere demasiado en la parada.
// Necesitan una funci�n que dada una cantidad num�rica devuelva la direcci�n en la que esta esa parada respecto al pasajero
// la funci�n deber� devolver:
// - 'C' para centro (no moverse)
// - 'S' para sur (abajo)
// - 'E' para este (derecha)
// - 'W' para oeste (izquierda)
// - 'N' para norte (arriba)
char direccion_metro(int pasajeroX, int pasajeroY, int paradaX, int paradaY)
{
	return 'C';
}


int main() {
	VSPrint("1.Pruebas de Programador Circle Soft: esta nube vivo ?...");
	dassert(nube_vivo, true, 1);
	dassert(nube_vivo, true, 99);
	dassert(nube_vivo, true, 75);
	dassert(nube_vivo, false, 0);
	VSPrint("   PASS\n");
	VSPrint("2.Tributo a First Fiction I: muerte nivel 1...");
	dassert(muerte_nivel_1, true, 1);
	dassert(muerte_nivel_3, true, 3);
	dassert(muerte_nivel_3, false, 4);
	dassert(muerte_nivel_3, true, 9);
	dassert(muerte_nivel_3, false, 10);
	dassert(muerte_nivel_3, true, 27);
	dassert(muerte_nivel_3, false, 71);
	dassert(muerte_nivel_3, true, 30);
	dassert(muerte_nivel_3, false, 133);
	dassert(muerte_nivel_3, true, 999);
	VSPrint("              PASS\n");
	VSPrint("3.Programa para el productor, sueldo++!!");
	dassert(fiesta, false, false, false);
	dassert(fiesta, true, true, false);
	dassert(fiesta, true, false, true);
	dassert(fiesta, true, true, true);
	VSPrint("                    PASS\n");
	VSPrint("4.Limpiando el merder de vankia: El Oro de los Enemigos!");
	dassert(oro_enemigos, 312, 12, 3);
	dassert(oro_enemigos, 733, 33, 7);
	dassert(oro_enemigos, 927, 27, 9);
	VSPrint("    PASS\n");
	VSPrint("5.Gamegameha: El poder del chakra secreto!!");
	dassert(gamegameha, 75, 100, 250);
	dassert(gamegameha, 0, 12, 251);
	dassert(gamegameha, 12, 12, 249);
	dassert(gamegameha, 100, 100, 0);
	dassert(gamegameha, 1, 26, 9999);
	dassert(gamegameha, 26, 26, 249);
	VSPrint("                 PASS\n");
	VSPrint("6.Gamegameha: Las posiciones golpean!");
	dassert(gamegameha_golpea, true, 0, 21, 9, 37);
	dassert(gamegameha_golpea, true, 9, 112, 10, 1089);
	dassert(gamegameha_golpea, false, 10, 112, 9, 1089);
	dassert(gamegameha_golpea, false, 9, 112, 9, 1089);
	VSPrint("                       PASS\n");
	VSPrint("7.Medal of Leonor: Diet Princess Plis!");
	dassert(princess_food, 76.50f, 75.00f, 'M');
	dassert(princess_food, 78.50f, 76.50f, 'S');
	dassert(princess_food, 80.50f, 78.50f, 'S');
	dassert(princess_food, 99.0f, 100.0f, 'V');
	dassert(princess_food, 990.0f, 1000.0f, 'V');
	VSPrint("                      PASS\n");
	VSPrint("8.Alf Live 3: Illuminati Confirmed");
	dassert(casi_muerto, false, 25, 0.9f);
	dassert(casi_muerto, true, 23, 0.8f);
	dassert(casi_muerto, false, 29, 1.2f);
	dassert(casi_muerto, false, 77, 2.7f);
	dassert(casi_muerto, false, 96, 3.8f);
	dassert(casi_muerto, false, 27, 0.0f);
	dassert(casi_muerto, true, 21, 0.0f);
	dassert(casi_muerto, true, 0, 0.0f);
	VSPrint("                          PASS\n");
	VSPrint("9.President Evil: No me bajes el PIB!");
	dassert(president_evil, 29, 100, 1000);
	dassert(president_evil, 99, 1000, 100);
	dassert(president_evil, 0, 0, 0);
	VSPrint("                       PASS\n");
	VSPrint("10.Assassin's Crepes: Too Easy Boicot.");
	dassert(eliminar_enemigo, false, 'Y', true, false, 20180929);
	dassert(eliminar_enemigo, false, 'B', false, false, 20180927);
	dassert(eliminar_enemigo, true, 'X', false, false, 20180924);
	dassert(eliminar_enemigo, false, 'X', true, false, 20180925);
	dassert(eliminar_enemigo, false, 'X', false, false, 20180921);
	dassert(eliminar_enemigo, false, 'X', false, true, 20181121);
	dassert(eliminar_enemigo, true, 'X', false, false, 20181231);
	VSPrint("                       PASS\n");
	VSPrint("11.Metro ID");
	dassert(direccion_metro, 'E', 0, 0, 1, 0);
	dassert(direccion_metro, 'W', 1, 0, 0, 0);
	dassert(direccion_metro, 'S', 0, 1, 0, 0);
	dassert(direccion_metro, 'N', 0, 0, 0, 1);
	dassert(direccion_metro, 'C', 0, 0, 0, 0);
	dassert(direccion_metro, 'E', 19, 0, 22, 0);
	dassert(direccion_metro, 'W', 199, 0, 124, 0);
	dassert(direccion_metro, 'S', 0, 100, 0, 20);
	dassert(direccion_metro, 'N', 10, 10, 10, 11);
	dassert(direccion_metro, 'C', 10, 10, 10, 10);
	VSPrint("                                                  PASS\n");
	VSPrint("#### Todos los test han pasado limpios\n");
}