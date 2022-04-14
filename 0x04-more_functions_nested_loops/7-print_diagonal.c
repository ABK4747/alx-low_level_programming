Abeni, [14-Apr-22 7:25 PM]

[In reply to Tesfay Teshome]

nice and i wish u many more



Tesfay Teshome, [14-Apr-22 7:27 PM]

#include "main.h"



/**
 *
 *  * print_diagonal - draws a diagonal line on the terminal
 *
 *   * @n: number of times the character \ should be printed
 *
 *    */

void print_diagonal(int n)

{

	if (n <= 0)

	{

		_putchar('\n');

	}

	else

	{

		int i, j;



		for (i = 0; i < n; i++)

		{

			for (j = 0; j < n; j++)

			{

				if (j == i)

					_putchar('\\');

				else if (j < i)

					_putchar(' ');

			}

			_putchar('\n');

		}

	}

}beni, [14-Apr-22 7:25 PM]

[In reply to Tesfay Teshome]

nice and i wish u many more



Tesfay Teshome, [14-Apr-22 7:27 PM]

#include "main.h"



/**
 *
 *  * print_diagonal - draws a diagonal line on the terminal
 *
 *   * @n: number of times the character \ should be printed
 *
 *    */

void print_diagonal(int n)

{

	if (n <= 0)

	{

		_putchar('\n');

	}

	else

	{

		int i, j;



		for (i = 0; i < n; i++)

		{

			for (j = 0; j < n; j++)

			{

				if (j == i)

					_putchar('\\');

				else if (j < i)

					_putchar(' ');

			}

			_putchar('\n');

		}

	}

}

