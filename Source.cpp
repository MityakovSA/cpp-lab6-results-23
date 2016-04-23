#include <iostream>
#include <stdexcept>
using namespace std;


template <typename T>
class Matrix
{
	T** _mas;
	int _m;
	int _n;
public:
	Matrix(int m, int n)
	{
		_mas = new T*[m];
		for (int i = 0; i < m; i++)
			_mas[i] = new T[n];
		_m = m;
		_n = n;
	}
	Matrix(T t, int m, int n)
	{
		_mas = new T*[m];
		for (int i = 0; i < m; i++)
			_mas[i] = new T[n];
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				_mas[i][j] = t;
		_m = m;
		_n = n;
	}
	Matrix(const Matrix<T> &M)
	{
		_m = M._m;
		_n = M._n;
		_mas = new T*[_m];
		for (int i = 0; i < _m; i++)
			_mas[i] = new T[_n];
		for (int i = 0; i < _m; i++)
			for (int j = 0; j < _n; j++)
				_mas[i][j] = M._mas[i][j];
	}
	void print() const
	{
		for (int i = 0; i < _m; i++)
		{
			for (int j = 0; j < _n; j++)
				cout << _mas[i][j] << " ";
			cout << endl;
		}
	}
};


int main()
{
	Matrix<int>;
	Matrix<int> M(1, 4, 4);
	M.print();
	Matrix<int> N(M);
	N.print();
	system("pause");
	return 0;
}