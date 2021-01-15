#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string equipo, estadio, depto, pos, nom, ape, eq2,cam,usu1,cla1;
    string fec, loc1, loc2, est,m1,m2;
    string eq3, jug, gan, emp, perd, pts;
    int opc, opc2,ob;

    /*-----------------------------------------------MENU DE INGRESO-----------------------------------------------------------------*/
    cout<<"---BIENVENIDO A CONTROL ESTADISTICO LIGA NACIONAL DE FUTBOL GUATEMALA---"<<endl;
    cout<<"1. Crear usuario y contrasena"<<endl;
    cout<<"2. Ingreso a sistema"<<endl;
    cout<<"3. SALIR"<<endl;
    cout<<"OPCION ";
    cin>>opc2;
    system ("cls");

    switch (opc2){
    /*///////////////////////////////////CREACION DE USUARIO Y CLAVE*/
    case 1: {
    ofstream file;
    file.open("c://Users//user//Desktop//PROYECTO FUTBOL//Usuarios.txt", ios::out | ios::app );

    cin.ignore();
    cout<<"USUARIO: "<<endl;
    getline(cin,usu1);

    cout<<"CLAVE: "<<endl;
    getline(cin,cla1);

    cout<<"USUARIO REGISTRADO CORRECTAMENTE"<<endl;

    file << usu1 <<" "<<cla1<<" "<<"\n";
    file.close();
    system("pause");
    system("cls");
    return main ();
 }/*****FIN CASE 1*/

case 2:{
ifstream leer3("Usuarios.txt", ios::in);
string usu1,cla1,usu2,cla2;
bool encontrado2 = false;

cout<< "INGRESE USUARIO: ";
cin>>usu2;
cout<< "INGRESE CLAVE: ";
cin>>cla2;
leer3>>usu1;

while(!leer3.eof() && !encontrado2)
{
    leer3>>cla1;
    if (usu1 == usu2 && cla1==cla2)
    {/*encontrado2 = true;*/
    system ("cls");
    /*-------------------------------------------------------------MENU2-----------------------------------------------------------------*/
    do{
    cout<<"---BIENVENIDO A CONTROL ESTADISTICO LIGA NACIONAL DE FUTBOL GUATEMALA---"<<endl;
    cout<<"1. Creacion de Equipos"<<endl;
    cout<<"2. Consulta de Equipos"<<endl;
    cout<<"3. Creacion de Jugadores"<<endl;
    cout<<"4. Consulta de Jugadores"<<endl;
    cout<<"5. Ingreso de Resultados"<<endl;
    cout<<"6. Consulta de Resultados"<<endl;
    cout<<"7. Ingreso de Datos de partidos"<<endl;
    cout<<"8. Tabla de posiciones"<<endl;
    cout<<"9. SALIR"<<endl;
    cout<<"OPCION ";
    cin>>opc;
    system ("cls");

    /*/////////////////////////////CREACION DE EQUIPOS OPCION 1*/
    /*switch (opc){*/
    if (opc==1)
    /*case 1:*/{
    ofstream file;
    file.open("c://Users//user//Desktop//PROYECTO FUTBOL//Equipos.txt", ios::out | ios::app );

    cin.ignore();
    cout<<"NOMBRE DEL EQUIPO: "<<endl;
    getline(cin,equipo);

    cout<<"ESTADIO: "<<endl;
    getline(cin,estadio);

    cout << "DEPARTAMENTO: "<<endl;
    getline(cin,depto);

    cout<<"EQUIPO REGISTRADO CORRECTAMENTE"<<endl;

    file << equipo <<" "<<estadio<<" "<<depto<<"\n";
    file.close();
    system("pause");
    system("cls");
    }/****FIN IF OPC1****/

    /*///////////////////////////////////////CONSULTA DE EQUIPOS INGRESADOS OPCION 2*/
    else if (opc==2)
    //case 2://
    {
    ifstream leer ("Equipos.txt", ios::in );

    while(leer>>equipo>>estadio>>depto){

    cout << "---------INFORMACION DEL EQUIPO-------------" << endl;
    cout << "NOMBRE OFICIAL----: " << equipo << endl;
    cout << "ESTADIO DE LOCAL--------: " << estadio << endl;
    cout << "DEPARTAMENTO--------: " << depto << endl;
    cout << "------------------------" << endl;
    }
    leer.close();
    system("pause");
    system("cls");
    //break;//
    }/****FIN IF OPC2****/
    /*////////////////////////////////////////////INGRESO DE JUGADORES DE LOS EQUIPOS OPCION 3*/
    //case 3://
    else if (opc==3)
    {
    cout<<"CONSULTAR EQUIPOS INGRESADOS ANTERIORMENTE"<<endl;
    ofstream archivo;
    archivo.open("c://Users//user//Desktop//PROYECTO FUTBOL//jugadores.txt", ios::out | ios::app );

    cin.ignore();
    cout << "EQUIPO: "<<endl;
    getline(cin,eq2);

    cout<<"POSICION: "<<endl;
    getline(cin,pos);

    cout<<"NO. DE CAMISOLA: "<<endl;
    getline(cin,cam);

    cout<<"NOMBRE: "<<endl;
    getline(cin,nom);

    cout << "APELLIDO: "<<endl;
    getline(cin,ape);

    cout<<"JUGADOR REGISTRADO CORRECTAMENTE"<<endl;

    archivo <<eq2<<" "<<pos<<" "<<cam<<" "<<nom<<" "<<ape<<" "<<"\n";
    archivo.close();
    system("pause");
    system("cls");
        }/****FIN IF OPC3****/
    /*/////////////////////////////////////////CONSULTA DE JUGADORES POR EQUIPO OPCION 4*/
    //case 4://
    else if (opc==4)
        {
    ifstream leer2("jugadores.txt", ios::in);
string pos,nom,ape,eq2,nom2,cam;
bool encontrado = false;

cout<< "INGRESE NOMBRE DE EQUIPO: ";
cin>>nom2;
leer2>>eq2;

while(!leer2.eof() && !encontrado)
{
    leer2>>pos;
    leer2>>cam;
    leer2>>nom;
    leer2>>ape;

    if (eq2 == nom2){
        cout <<"EQUIPO:--- "<<eq2<<endl;
        cout<<"POSICION:-- "<<pos<<endl;
        cout<<"NUMERO DE CAMISOLA:-- "<<cam<<endl;
        cout<<"NOMBRE:---- "<<nom<<endl;
        cout<<"APELLIDO:-- "<<ape<<endl;
        cout<<"-----------------------------------------------------"<<endl;
        /*encontrado = true;*/
    }
        leer2>> eq2;
}
    if(encontrado){
        cout << "NO SE ENCONTRO EQUIPO" << endl;
    }
    leer2.close();
    system("pause");
    system("cls");
    }/****FIN IF OPC4****/
  //////*/////////////////////////////////////////CONSULTA DE JUGADORES POR EQUIPO OPCION 5*/
    else if (opc==5)
    {
    cout<<"CONSULTAR EQUIPOS INGRESADOS ANTERIORMENTE"<<endl;
    ofstream archivo;
    archivo.open("c://Users//user//Desktop//PROYECTO FUTBOL//encuentros.txt", ios::out | ios::app );

    cin.ignore();
    cout << "FECHA DE ENCUENTRO: "<<endl;
    getline(cin,fec);

    cout<<"EQUIPO LOCAL: "<<endl;
    getline(cin,loc1);

    cout<<"MARCADOR LOCAL: "<<endl;
    getline(cin,m1);

    cout<<"EQUIPO VISITANTE: "<<endl;
    getline(cin,loc2);

    cout << "MARCADOR VISITA: "<<endl;
    getline(cin,m2);

    cout << "ESTADIO JUGADO: "<<endl;
    getline(cin,est);

    cout<<"ENCUENTRO REGISTRADO CORRECTAMENTE"<<endl;

    archivo <<fec<<" "<<loc1<<" "<<m1<<" "<<loc2<<" "<<m2<<" "<<est<<" "<<"\n";
    archivo.close();
    system("pause");
    system("cls");
        }/****FIN IF OPC5****/
 /*/////////////////////////////////////////CONSULTA DE JUGADORES POR EQUIPO OPCION 6*///////////////////////
else if (opc==6)
    {
    ifstream consulta ("encuentros.txt", ios::in );
    consulta>>fec;
    while(!consulta.eof()){

    consulta>>loc1;
    consulta>>m1;
    consulta>>loc2;
    consulta>>m2;
    consulta>>est;
    cout << "---------INFORMACION DE ENCUENTROS REALIZADOS-------------" << endl;
    cout << fec<<endl;
    cout << loc1<<" vrs "<<loc2<<endl;
    cout << m1<<"-"<<m2<<endl;
    cout << est << endl;
    cout << "------------------------" << endl;
    consulta>>fec;
    }
    consulta.close();
    system("pause");
    system("cls");
    //break;//
    }/****FIN IF OPC6****/
     /*/////////////////////////////////////////INGRESO DE DATOS DE ENCUENTROS OPCION 7*////////////////
else if (opc==7)
    {
    cout<<"CONSULTAR ENCUENTROS INGRESADOS ANTERIORMENTE"<<endl;
    ofstream archivo5;
    archivo5.open("c://Users//user//Desktop//PROYECTO FUTBOL//datos.txt", ios::out | ios::app );

    cin.ignore();
    cout << "EQUIPO: "<<endl;
    getline(cin,eq3);

    cout<<"ENCUENTROS JUGADOS: "<<endl;
    getline(cin,jug);

    cout<<"ENCUENTROS GANADOS: "<<endl;
    getline(cin,gan);

    cout<<"ENCUENTROS EMPATADOS: "<<endl;
    getline(cin,emp);

    cout << "ENCUENTROS PERDIDOS: "<<endl;
    getline(cin,perd);

    cout << "PUNTOS: "<<endl;
    getline(cin,pts);

    cout<<"DATOS REGISTRADOS CORRECTAMENTE"<<endl;

    archivo5 <<eq3<<" "<<jug<<" "<<gan<<" "<<emp<<" "<<perd<<" "<<pts<<" "<<"\n";
    archivo5.close();
    system("pause");
    system("cls");
        }/****FIN IF OPC7****/
 /*/////////////////////////////////////////CONSULTA TABLA DE POSICIONES OPCION 8*////////////////
else if (opc==8)
    {ifstream consulta7 ("datos.txt", ios::in );
    consulta7>>eq3;
    while(!consulta7.eof()){

    consulta7>>jug;
    consulta7>>gan;
    consulta7>>emp;
    consulta7>>perd;
    consulta7>>pts;
    cout << "---------TABLA DE POSICIONES-------------" << endl;
    cout << "     EQUIPO     "<<" JJ "<<" JG "<<" JE "<<" JP "<<" PTS "<<endl;
    cout << " "<<eq3<< "     "<<jug<< "   "<<gan<<"   "<<emp<<"   "<<perd<<"   "<<pts<<endl;
    consulta7>>eq3;
    }
    consulta7.close();
    system("pause");
    system("cls");
    }/****FIN IF OPC8****/
    /*/////////////////////////////////////////////////RETORNO A MENU 1 OPC 9*/
    //case 5://
    else if (opc==9){
    return main();}
    ///////////////////////OPCION INVALIDA//////////////////////////////
    //default://
    else if (opc>9){
        cout<<"OPCION INVALIDA"<<endl;
        system("pause");
        system("cls");
    }
    /*//////////////////////////////////////////FIN DE DO-WHILE*/

    }while (opc!=9);/**FIN DO-WHILE MENU2****/
    /*------------------------------------------------------------------CONTINUACION SWITCH DE MENU DE INGRESO---------------------------*/
    encontrado2=true;
    }/*****FIN DEL IF DEL WHILE****/
     leer3>>usu1;
    }/*****FIN DE WHILE****/
    if (!encontrado2)
    {
    leer3.close();
    system("cls");
    cout << "USUARIO Y CLAVE INCORRECTA O NO REGISTRADA" << endl;
    system ("pause");
    system("cls");
    return main ();}
    }/******FIN CASE 2*****/
    case 3: /*SALIDA MENU DE INGRESO*/
        break;
        }/*******FIN DEL SWITCH MENU DE INGRESO****/
           return 0;
}/***********FIN DEL MAIN********/



