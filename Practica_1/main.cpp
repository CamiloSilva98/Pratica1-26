#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a, b, min=0, hor=0, tt, sum, mins, hors, mint, hort, D = 0, bill, con;
    long double div = 1.0, e = 1.0;

    long int x, A, B, maxPal;
    cout<<"Ingrese el numero del ejercicio. (Debe ser par o cero para salir) ";
    cin>>a;
    do
    {
        bool p= false;
        switch(a)
        {
        case 2:
            cout << "Problema 2: \n"
                    "Ingrese el monto a retirar: ";
            cin >> bill;
            while (cin.fail())
            {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Ingrese un valor valido";
                cin >> bill;
            }
            if(bill/100000 != 0)
            {
                con= bill/100000;
                bill= bill%100000;
                cout<<con<<" Billetes de 100.000. \n";
            }
            if(bill/50000 != 0)
            {
                con= bill/50000;
                bill= bill%50000;
                cout<<con<<" Billetes de 50.000. \n";
            }
            if(bill/20000 != 0)
            {
                con= bill/20000;
                bill= bill%20000;
                cout<<con<<" Billetes de 20.000. \n";
            }
            if(bill/10000 != 0)
            {
                con= bill/10000;
                bill= bill%10000;
                cout<<con<<" Billetes de 10.000. \n";
            }
            if(bill/5000 != 0)
            {
                con= bill/5000;
                bill= bill%5000;
                cout<<con<<" Billetes de 5.000. \n";
            }
            if(bill/2000 != 0)
            {
                con= bill/2000;
                bill= bill%2000;
                cout<<con<<" Billetes de 2.000. \n";
            }
            if(bill/1000 != 0)
            {
                con= bill/1000;
                bill= bill%1000;
                cout<<con<<" Monedas de 1.000. \n";
            }
            if(bill/500 != 0)
            {
                con= bill/500;
                bill= bill%500;
                cout<<con<<" Monedas de 500. \n";
            }
            if(bill/200 != 0)
            {
                con= bill/200;
                bill= bill%200;
                cout<<con<<" Monedas de 200. \n";
            }
            if(bill/100 != 0)
            {
                con= bill/100;
                bill= bill%100;
                cout<<con<<" Monedas de 100. \n";
            }
            if(bill/50 != 0)
            {
                con= bill/50;
                bill= bill%50;
                cout<<con<<" Monedas de 50. \n";
            }
            if(bill > 0)
            {
                cout<<"Faltan "<<bill<<'\n';
            }
            break;
        case 4:
            D=0;
            cout<<"Problema 4: \n"
                    "Ingrese un numero de 4 digitos o menos: ";
            cin>>tt;
            min=tt%100;
            hor=tt/100;
            while (min>59 || hor>23)
            {
                cout<<tt<<" No es tiempo valido, Ingrese otro valor: ";
                cin>>tt;
                min=tt%100;
                hor=tt/100;
            }
            cout << "Ingrese otro valor de 4 digitos: ";
            cin >> sum;
            mins=sum%100;
            hors=sum/100;
            while (mins>59 || hors>23)
            {
                cout<<sum<<" No es tiempo valido, Ingrese otro valor: ";
                cin>>sum;
                mins=sum%100;
                hors=sum/100;
            }
            hort= hor+hors;
            mint= min+mins;
            if(mint>59)
            {
                mint=mint-60;
                hort++;
            }
            if(hort>=24)
            {
                D=hort/24;
                hort=hort%24;
            }

            cout<<D<<'\n';
            if (hort<10)
            {
                cout<<"0";
            }
            cout<<hort;
            if (mint<10)
            {
                cout<<"0";
            }
            cout<<mint<<'\n';
            break;
        case 6:
            cout<<"Problema 6.\n";
            div=1.0;
            e=1.0;
            cout << "Ingrese un numero: ";
            cin >> b;
            for (int i=1;i<=b;i++)
            {
                div/=i;
                e+=div;
            }
            cout<<"e es aproximadamente: "<< setprecision(18)<<e<<'\n';
            break;
        case 8:
            sum=0;
            cout<<"Problema 8.\n"
                    "Ingrese el numero A: ";
            cin>>min;
            cout<< "Ingrese el numero B: ";
            cin>>b;
            cout<<"Ingrese el numero C: ";
            cin>>con;
            for(int i=2;i<con;i++)
            {
                if(i%min==0 || i%b==0)
                {
                    if(p)
                    {
                        cout<<" + ";
                    }
                    cout<<i;
                    sum+=i;
                    p=true;
                }
            }
            cout<<" = "<<sum<<'\n';
            break;
        case 10:
            cout<<"Problema 10. \n"
                    "Ingrese un numero: ";
            cin>>b;
            con=0;
            min=2;
            while(con<b)
            {
                p=true;
                for(int i=2;i*i<=min;i++)
                {
                    if (min%i==0)
                    {
                        p=false;
                        break;
                    }
                }
                if (p)
                {
                    con++;
                }
                min++;
            }
            cout<<"El primo numero "<<b<<" es: "<<min-1<<'\n';
            break;
        case 12:
            min=1;
            cout<<"Problema 12.\n"
                    "Ingrese un numero: ";
            cin>> b;
            for(int i=b/2; i>=2; i--)
            {
                if(b%i==0)
                {
                    p=true;
                    for(int j=2;j*j<=i;j++)
                    {
                        if(i%j==0)
                        {
                            p=false;
                            break;
                        }
                    }
                    if(p)
                    {
                        min = i;
                        break;
                    }
                }
            }
            if(min==1)
            {
                min=b;
            }
            cout << "El mayor factor primo de "<<b<<" es: "<<min<<'\n';
            break;
        case 14:
            maxPal=0;
            cout<<"Problema 14.\n";
            for (int i=101;i<=999;i++)
            {
                for(int j=i;j<=999;j++)
                {
                    A= i*j;
                    B=A;
                    x=0;
                    while(A!=0)
                    {
                        x=10*x+A%10;
                        A/=10;
                    }
                    if(x==B && B>maxPal)
                    {
                        maxPal=B;
                        b=i;
                        min=j;
                    }
                }
            }
            cout<<b<<" * "<<min<<" = "<<maxPal<<'\n';
            break;
        case 16:
            con=1;
            cout<<"Problema 16.\n"
                    "Ingrese un numero: ";
            cin>>b;
            min=b;
            hor=0;
            for(int i=2;i<=b;i++)
            {
                tt=i;
                while(tt>1)
                {
                    if(tt%2==0)
                    {
                        tt/=2;
                        con++;
                    }
                    else
                    {
                        con++;
                        tt=(3*tt)+1;
                    }
                }
                if(hor<con)
                {
                    hor=con;
                    min=i;
                }
                con=0;
            }
            tt=min;
            cout<<min<<", ";
            while(tt>1)
            {
                if(tt%2==0)
                {
                    tt/=2;
                    con++;
                    if(tt==1)
                    {
                        cout<<tt<<".\n";
                    }
                    else
                    {
                        cout<<tt<<", ";
                    }
                }
                else
                {
                    con++;
                    tt=(3*tt)+1;
                    cout<<tt<<", ";
                }
            }
            cout<<"La serie mas larga con la semilla "<<min<<" teniendo "<<hor<<" terminos.\n";
            break;
        default:
            cout<<"Opcion invalida, intente nuevamente.\n";
            break;

        }

        cout<<"Ingrese el numero del ejercicio. (Debe ser par o cero para salir) ";
        cin>>a;

    }
    while(a!=0);
}
