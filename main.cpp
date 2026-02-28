#include <iostream>
#include <cmath>

int main()
{
    std::cout << "======================" << std::endl;
    std::cout << "Cálculadora Cientifica" << std::endl;
    std::cout << "======================" << std::endl;

    // Variables
    double num1, num2, resultado, valorTemporal;
    char elección1, elección2;
    int cantidadNumeros;

    do
    {
        std::cout << "\n1. Aritmética Básica";
        std::cout << "\n2. Potencias y Raíces";
        std::cout << "\n3. Trigonometría";
        std::cout << "\n4. Logaritmos y Exponenciales";
        std::cout << "\n5. Operaciones Adicionales y Redondeo";
        std::cout << "\n6. Salir" << std::endl;

        std::cout << "\nQué operación desea realizar? (1, 2, 3, 4, 5, 6): ";
        std::cin >> elección1;

        switch (elección1)
        {
        case '1':
            do
            {
                std::cout << "\n1. Suma";
                std::cout << "\n2. Resta";
                std::cout << "\n3. Multiplicación";
                std::cout << "\n4. División";
                std::cout << "\n5. Módulo";
                std::cout << "\n6. Atrás" << std::endl;

                std::cout << "\nAhora elige una opción (1, 2, 3, 4, 5, 6): ";
                std::cin >> elección2;

                switch (elección2)
                {
                case '1':
                    std::cout << "\n====";
                    std::cout << "\nSuma";
                    std::cout << "\n====\n";

                    std::cout << "\nCuántos números deseas sumar?: ";
                    std::cin >> cantidadNumeros;

                    if (cantidadNumeros <= 0)
                    {
                        std::cout << "\nLa cantidad de número debe ser mayor a 0.";
                        std::cout << "\n=========================================\n";
                        break;
                    }

                    resultado = 0;

                    for (size_t i = 1; i <= cantidadNumeros; i++)
                    {
                        std::cout << "\nIngresá el valor " << i << ": ";
                        std::cin >> valorTemporal;
                        resultado += valorTemporal;
                    }

                    std::cout << "\n\nEl resultado es: " << resultado;
                    std::cout << "\n===========================================\n";
                    break;
                case '2':
                    std::cout << "\n=====";
                    std::cout << "\nResta";
                    std::cout << "\n=====\n";

                    std::cout << "\nCuántos números deseas restar?: ";
                    std::cin >> cantidadNumeros;

                    if (cantidadNumeros <= 0)
                    {
                        std::cout << "\nLa cantidad de número debe ser mayor a 0.";
                        std::cout << "\n=========================================\n";
                        break;
                    }

                    std::cout << "\nIngresa el valor base: ";
                    std::cin >> resultado;

                    for (size_t i = 2; i <= cantidadNumeros; i++)
                    {
                        std::cout << "\nIngresá el valor a restar " << i << ": ";
                        std::cin >> valorTemporal;
                        resultado -= valorTemporal;
                    }

                    std::cout << "\n\nEl resultado es: " << resultado;
                    std::cout << "\n===========================================\n";
                    break;
                case '3':
                    std::cout << "\n==============";
                    std::cout << "\nMultiplicación";
                    std::cout << "\n==============\n";

                    std::cout << "\nCuántos números deseas multiplicar?: ";
                    std::cin >> cantidadNumeros;

                    if (cantidadNumeros <= 0)
                    {
                        std::cout << "\nLa cantidad de número debe ser mayor a 0.";
                        std::cout << "\n=========================================\n";
                        break;
                    }

                    resultado = 1;

                    for (size_t i = 1; i <= cantidadNumeros; i++)
                    {
                        std::cout << "\nIngresá el valor " << i << ": ";
                        std::cin >> valorTemporal;
                        resultado *= valorTemporal;
                    }

                    std::cout << "\n\nEl resultado es: " << resultado;
                    std::cout << "\n===========================================\n";
                    break;
                case '4':
                    std::cout << "\n========";
                    std::cout << "\nDivisión";
                    std::cout << "\n========\n";

                    std::cout << "\nCuántos números deseas dividir?: ";
                    std::cin >> cantidadNumeros;

                    if (cantidadNumeros <= 0)
                    {
                        std::cout << "\nLa cantidad de número debe ser mayor a 0.";
                        std::cout << "\n=========================================\n";
                        break;
                    }

                    std::cout << "\nIngresa el valor base: ";
                    std::cin >> resultado;

                    for (size_t i = 2; i <= cantidadNumeros; i++)
                    {
                        std::cout << "\nIngresá el valor a restar " << i << ": ";
                        std::cin >> valorTemporal;

                        if (valorTemporal == 0)
                        {
                            std::cout << "\nError: No se puede dividir entre cero.\n";
                            break;
                        }

                        resultado /= valorTemporal;
                    }

                    std::cout << "\n\nEl resultado es: " << resultado;
                    std::cout << "\n===========================================\n";
                    break;
                case '5':
                    std::cout << "\n======";
                    std::cout << "\nMódulo";
                    std::cout << "\n======\n";

                    std::cout << "\nIngresá el primer valor: ";
                    std::cin >> num1;
                    std::cout << "Ingresá el segundo valor: ";
                    std::cin >> num2;

                    resultado = fmod(num1, num2);

                    std::cout << "\n\nEl resultado es: " << resultado;
                    std::cout << "\n===========================================\n";
                    break;
                case '6':
                    std::cout << "\nVolviendo al inicio...\n";
                    std::cout << "======================\n";
                    break;
                default:
                    std::cout << "\nLa opción elegida no existe, por favor vuelvelo a intentar.";
                    std::cout << "\n===========================================================\n";
                    break;
                }
            } while (elección2 != '6');
            break;
        case '2':
            do
            {
                std::cout << "\n1. Potencia al cuadrado";
                std::cout << "\n2. Potencia al Cubo";
                std::cout << "\n3. Potencia a la n";
                std::cout << "\n4. Raíz Cuadrada";
                std::cout << "\n5. Raíz Cúbica";
                std::cout << "\n6. Atrás" << std::endl;

                std::cout << "\nAhora elige una opción (1, 2, 3, 4, 5, 6): ";
                std::cin >> elección2;

                switch (elección2)
                {
                case '1':
                    std::cout << "\n====================";
                    std::cout << "\nPotencia al cuadrado";
                    std::cout << "\n====================\n";

                    std::cout << "\nIngresá la base: ";
                    std::cin >> num1;

                    resultado = pow(num1, 2);

                    std::cout << "\n\nEl resultado es: " << resultado;
                    std::cout << "\n===========================================\n";
                    break;
                case '2':
                    std::cout << "\n================";
                    std::cout << "\nPotencia al Cubo";
                    std::cout << "\n================\n";

                    std::cout << "\nIngresá la base: ";
                    std::cin >> num1;

                    resultado = pow(num1, 3);

                    std::cout << "\n\nEl resultado de tu suma es: " << resultado;
                    std::cout << "\n===========================================\n";
                    break;
                case '3':
                    std::cout << "\n================";
                    std::cout << "\nPotencia a la n";
                    std::cout << "\n================\n";

                    std::cout << "\nIngresá el primer valor (base): ";
                    std::cin >> num1;
                    std::cout << "Ingresá el segundo valor (exponente): ";
                    std::cin >> num2;

                    resultado = pow(num1, num2);

                    std::cout << "\n\nEl resultado es: " << resultado;
                    std::cout << "\n===========================================\n";
                    break;
                case '4':
                    std::cout << "\n=============";
                    std::cout << "\nRaíz Cuadrada";
                    std::cout << "\n=============\n";

                    std::cout << "\nIngresá el valor del radicando: ";
                    std::cin >> num1;

                    resultado = sqrt(num1);

                    std::cout << "\n\nEl resultado es: " << resultado;
                    std::cout << "\n===========================================\n";
                    break;
                case '5':
                    std::cout << "\n===========";
                    std::cout << "\nRaíz Cúbica";
                    std::cout << "\n===========\n";

                    std::cout << "\nIngresá el valor del radicando: ";
                    std::cin >> num1;

                    resultado = cbrt(num1);

                    std::cout << "\n\nEl resultado es: " << resultado;
                    std::cout << "\n===========================================\n";
                    break;
                case '6':
                    std::cout << "\nVolviendo al inicio...\n";
                    std::cout << "======================\n";
                    break;
                default:
                    std::cout << "\nLa opción elegida no existe, por favor vuelvelo a intentar.";
                    std::cout << "\n===========================================================\n";
                    break;
                }
            } while (elección2 != '6');
            break;
        case '3':
            do
            {
                std::cout << "\n1. Seno";
                std::cout << "\n2. Coseno";
                std::cout << "\n3. Tangente";
                std::cout << "\n4. Arcoseno";
                std::cout << "\n5. Arcocoseno";
                std::cout << "\n6. Arcotangente";
                std::cout << "\n7. Atrás" << std::endl;

                std::cout << "\nAhora elige una opción (1, 2, 3, 4, 5, 6, 7): ";
                std::cin >> elección2;

                switch (elección2)
                {
                case '1':
                    std::cout << "\n====";
                    std::cout << "\nSeno";
                    std::cout << "\n====\n";

                    std::cout << "\nIngresá el ángulo en grados: ";
                    std::cin >> num1;

                    resultado = sin(num1 * (M_PI / 180.0));

                    std::cout << "\n\nEl resultado es: " << resultado;
                    std::cout << "\n===========================================\n";
                    break;
                case '2':
                    std::cout << "\n======";
                    std::cout << "\nCoseno";
                    std::cout << "\n======\n";

                    std::cout << "\nIngresá el ángulo en grados: ";
                    std::cin >> num1;

                    resultado = cos(num1 * (M_PI / 180.0));

                    std::cout << "\n\nEl resultado de tu suma es: " << resultado;
                    std::cout << "\n===========================================\n";
                    break;
                case '3':
                    std::cout << "\n========";
                    std::cout << "\nTangente";
                    std::cout << "\n========\n";

                    std::cout << "\nIngresá el ángulo en grados: ";
                    std::cin >> num1;

                    resultado = tan(num1 * (M_PI / 180.0));

                    std::cout << "\n\nEl resultado es: " << resultado;
                    std::cout << "\n===========================================\n";
                    break;
                case '4':
                    std::cout << "\n========";
                    std::cout << "\nArcoseno";
                    std::cout << "\n========\n";

                    std::cout << "\nIngresá el ángulo en grados: ";
                    std::cin >> num1;

                    resultado = asin(num1 * (M_PI / 180.0));

                    std::cout << "\n\nEl resultado es: " << resultado;
                    std::cout << "\n===========================================\n";
                    break;
                case '5':
                    std::cout << "\n==========";
                    std::cout << "\nArcocoseno";
                    std::cout << "\n==========\n";

                    std::cout << "\nIngresá el ángulo en grados: ";
                    std::cin >> num1;

                    resultado = acos(num1 * (M_PI / 180.0));

                    std::cout << "\n\nEl resultado es: " << resultado;
                    std::cout << "\n===========================================\n";
                    break;
                case '6':
                    std::cout << "\n============";
                    std::cout << "\nArcotangente";
                    std::cout << "\n============\n";

                    std::cout << "\nIngresá el ángulo en grados: ";
                    std::cin >> num1;

                    resultado = atan(num1 * (M_PI / 180.0));

                    std::cout << "\n\nEl resultado es: " << resultado;
                    std::cout << "\n===========================================\n";
                    break;
                case '7':
                    std::cout << "\nVolviendo al inicio...\n";
                    std::cout << "======================\n";
                    break;
                default:
                    std::cout << "\nLa opción elegida no existe, por favor vuelvelo a intentar.";
                    std::cout << "\n===========================================================\n";
                    break;
                }
            } while (elección2 != '7');
            break;
        case '4':
            do
            {
                std::cout << "\n1. Logaritmo Natural (Base e)";
                std::cout << "\n2. Logaritmo Base 10";
                std::cout << "\n3. Exponencial";
                std::cout << "\n4. Atrás" << std::endl;

                std::cout << "\nAhora elige una opción (1, 2, 3, 4): ";
                std::cin >> elección2;

                switch (elección2)
                {
                case '1':
                    std::cout << "\n==========================";
                    std::cout << "\nLogaritmo Natural (Base e)";
                    std::cout << "\n==========================\n";

                    std::cout << "\nIngresá el valor del argumento: ";
                    std::cin >> num1;

                    resultado = log(num1);

                    std::cout << "\n\nEl resultado es: " << resultado;
                    std::cout << "\n===========================================\n";
                    break;
                case '2':
                    std::cout << "\n=================";
                    std::cout << "\nLogaritmo Base 10";
                    std::cout << "\n=================\n";

                    std::cout << "\nIngresá el valor del argumento: ";
                    std::cin >> num1;

                    resultado = log10(num1);

                    std::cout << "\n\nEl resultado es: " << resultado;
                    std::cout << "\n===========================================\n";
                    break;
                case '3':
                    std::cout << "\n===========";
                    std::cout << "\nExponencial";
                    std::cout << "\n===========\n";

                    std::cout << "\nIngresá el valor del exponente: ";
                    std::cin >> num1;

                    resultado = exp(num1);

                    std::cout << "\n\nEl resultado es: " << resultado;
                    std::cout << "\n===========================================\n";
                    break;
                case '4':
                    std::cout << "\nVolviendo al inicio...\n";
                    std::cout << "======================\n";
                    break;
                default:
                    std::cout << "\nLa opción elegida no existe, por favor vuelvelo a intentar.";
                    std::cout << "\n===========================================================\n";
                    break;
                }
            } while (elección2 != '4');
            break;
        case '5':
            do
            {
                std::cout << "\n1. Valor Absoluto";
                std::cout << "\n2. Redondeo hacia arriba";
                std::cout << "\n3. Redondeo hacia abajo";
                std::cout << "\n4. Redondeo al más cercano";
                std::cout << "\n5. Factorial";
                std::cout << "\n6. Atrás" << std::endl;

                std::cout << "\nAhora elige una opción (1, 2, 3, 4, 5, 6): ";
                std::cin >> elección2;

                switch (elección2)
                {
                case '1':
                    std::cout << "\n==============";
                    std::cout << "\nValor Absoluto";
                    std::cout << "\n==============\n";

                    std::cout << "\nIngresá el valor del número: ";
                    std::cin >> num1;

                    resultado = fabs(num1);

                    std::cout << "\n\nEl resultado es: " << resultado;
                    std::cout << "\n===========================================\n";
                    break;
                case '2':
                    std::cout << "\n=====================";
                    std::cout << "\nRedondeo hacia arriba";
                    std::cout << "\n=====================\n";

                    std::cout << "\nIngresá el valor del número: ";
                    std::cin >> num1;

                    resultado = ceil(num1);

                    std::cout << "\n\nEl resultado es: " << resultado;
                    std::cout << "\n===========================================\n";
                    break;
                case '3':
                    std::cout << "\n====================";
                    std::cout << "\nRedondeo hacia abajo";
                    std::cout << "\n====================\n";

                    std::cout << "\nIngresá el valor del número: ";
                    std::cin >> num1;

                    resultado = floor(num1);

                    std::cout << "\n\nEl resultado es: " << resultado;
                    std::cout << "\n===========================================\n";
                    break;
                case '4':
                    std::cout << "\n=======================";
                    std::cout << "\nRedondeo al más cercano";
                    std::cout << "\n=======================\n";

                    std::cout << "\nIngresá el valor del número: ";
                    std::cin >> num1;

                    resultado = round(num1);

                    std::cout << "\n\nEl resultado es: " << resultado;
                    std::cout << "\n===========================================\n";
                    break;
                case '5':
                    std::cout << "\n=========";
                    std::cout << "\nFactorial";
                    std::cout << "\n=========\n";

                    std::cout << "\nIngresá el valor del número: ";
                    std::cin >> num1;

                    if (num1 < 0)
                    {
                        std::cout << "\nEl factorial no está definido para números negativos.";
                        std::cout << "\n=====================================================\n";
                        break;
                    }
                    else if (num1 == 0)
                    {
                        resultado = 1;
                        std::cout << "\n\nEl resultado es: " << resultado;
                        std::cout << "\n====================\n";
                        break;
                    }
                    else if (num1 > 0)
                    {
                        resultado = 1;

                        for (size_t i = 1; i <= num1; i++)
                        {
                            resultado *= i;
                        }

                        std::cout << "\n\nEl resultado es: " << resultado;
                        std::cout << "\n===========================================\n";
                        break;
                    }
                    break;
                case '6':
                    std::cout << "\nVolviendo al inicio...\n";
                    std::cout << "======================\n";
                    break;
                default:
                    std::cout << "\nLa opción elegida no existe, por favor vuelvelo a intentar.";
                    std::cout << "\n===========================================================\n";
                    break;
                }
            } while (elección2 != '6');
            break;
        case '6':
            std::cout << "\nGracias por usar mi calculadora, ten un buen dia.\n";
            std::cout << "=================================================\n";
            break;
        default:
            std::cout << "\nLa opción elegida no existe, por favor vuelvelo a intentar.";
            std::cout << "\n===========================================================\n";
            break;
        }
    } while (elección1 != '6');

    return 0;
}