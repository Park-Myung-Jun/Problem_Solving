using System;

namespace Firstproject
{
    class Program
    {
        static void Main(string[] args)
        {
            int k = 1;
            int q = 1;
            int r = 2;
            int b = 2;
            int n = 2;
            int p = 8;

            string[] num = (Console.ReadLine().Split());

            int kk = int.Parse(num[0]);
            int qq = int.Parse(num[1]);
            int rr = int.Parse(num[2]);
            int bb = int.Parse(num[3]);
            int nn = int.Parse(num[4]);
            int pp = int.Parse(num[5]);

            Console.WriteLine((k - kk) + " " + (q - qq) + " " + (r - rr) + " " + (b - bb) + " " + (n - nn) + " " + (p - pp));
        }
    }
}
