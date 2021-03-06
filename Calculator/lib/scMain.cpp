#include "scCalc.hh"  // defines MyClass

using namespace std;

//Main function to test the Spice Curvature Calculator Class
int main()
{
	// double spiral[16][3] = {{0.0, 0.0, 0.0},
 //                           {1.0, 1.0, 0.0},
 //                           {0.5, 2.0, 1.0},
 //                           {0.0, 3.0, 0.0},
 //                           {1.0, 1.0, 0.0},
 //                           {0.5, 2.0, 1.0},
 //                           {0.0, 3.0, 0.0},
 //                           {1.0, 1.0, 0.0},
 //                           {0.5, 2.0, 1.0},
 //                           {0.0, 3.0, 0.0},
 //                           {1.0, 1.0, 0.0},
 //                           {0.5, 2.0, 1.0},
 //                           {0.0, 3.0, 0.0},
 //                           {1.0, 4.0, 0.0},
 //                           {0.5, 5.0, 1.0},
 //                           {0.0, 6.0, 0.0}};

	ScCalc *calculator = new ScCalc();

    double spiral[50][3];

    // for (int i = 0; i < 30; ++i)
    //  {
    //  	spiral[i] = (double *) malloc(3 * sizeof(double));;
    //  } 

    for (int i = 0; i < 50; i++)
    {
    	for (int j = 0; j < 3; j++)
    	{
			spiral[i][j] = i*i;
    	}
    }

    double trans[4][4] = {{1.0, 0.0, 0.0, 100.0},
                            {0.0, 1.0, 0.0, 0.0},
                            {0.0, 0.0, 1.0, 0.0},
                            {0.0, 0.0, 0.0, 1.0}};

    calculator->loadSpine1(spiral, 50);
    calculator->loadTransofrm(trans);
    calculator->printSpine1();
    calculator->transformSpine1();
    calculator->printSpine1();
    //calculator->compareSpines();

    // double (*ptr)[3] = spine1;
 

    // for (int i = 0; i < 40; ++i)
    // {
    // 	cout << "derivative = " << calcualtor->curveDerivative(ptr);
    // 	cout << " second derivative = " << calcualtor->curveSecDerivative(ptr++);
    // 	cout << endl;
    // }

	return 0;
}