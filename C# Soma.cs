DISCLAIMER: Os códigos apresentados foram desenvolvidos com o intuito de preparação para uma avaliação
utilizando os métodos e abordagens solicitados pelo professor. Eles não visam, de forma alguma, representar soluções
finais ou definitivas, mas sim servir como um exercício de aprendizado e aplicação dos conceitos requeridos para a
avaliação.
Os sistemas solicitados estão comentados no código para que não sejam executadas, mas fiquem salvas no arquivo.
Essa abordagem foi adotada para manter o histórico de todos os exercícios realizados.

using Calculadora;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace testedll
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int Num1=0, Num2=0,opcao=0, resultado=0;
           
           
            Calc calculadora= new Calc();
            Console.WriteLine("Qual operação você deseja");
            Console.WriteLine("1.Soma 2.Multiplicação");
            opcao = Convert.ToInt32(Console.ReadLine());
            if (opcao == 1)
            {
                Console.WriteLine("Digite o valor que deseja somar");
                Num1 = Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("Digite o valor que deseja somar");
                Num2 = Convert.ToInt32(Console.ReadLine());
                resultado = calculadora.Soma(Num1, Num2);

                Console.WriteLine("Soma = {0}", resultado);
            }
            else if (opcao == 2)
            {
                Console.WriteLine("Digite o valor que deseja somar");
                Num1 = Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("Digite o valor que deseja somar");
                Num2 = Convert.ToInt32(Console.ReadLine());
                resultado = calculadora.Multiplicacao(Num1, Num2);

                Console.WriteLine("Multiplicação = {0}", resultado);
            }

        }
    }
}
