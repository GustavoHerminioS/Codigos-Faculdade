using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Calculadora
{
    public class Calc
    {
        public int Soma(int x, int y)
        {
            return x + y; 
        }
         public int Multiplicacao(int x, int y)
        {
            return x * y;
        }

        public int Divisao (int x, int y)
        {
            return x / y;

        }

        public int Subtracao (int x, int y)
        {
            return x - y;
        }
    }
}
