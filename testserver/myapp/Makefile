all:
	g++ -I`python -c 'from distutils.sysconfig import *; print get_python_inc()'` -DPIC -shared -fPIC -o pythonWapper.so pythonWapper.cpp -lboost_python
