#include <boost/python.hpp>

// http://d.hatena.ne.jp/moriyoshi/20091214/1260779899

int add(int lhs, int rhs)
{
  return lhs + rhs;
}


class accumulator {
public:
  int operator()(int v) {
    v_ += v;
    return v_;
  }

  int value() const {
    return v_;
  }
  
  int add(int i,int j) {
    return i+j;
  }
  
  int multi(int i,int j) {
    return i*j;
  }
  
private:
  int v_;
};


BOOST_PYTHON_MODULE(pythonWapper)
{
  using namespace boost::python;
  def("add", &add);
  
  /*
  //class_<accumulator>("accumulator")
  //  .def( "multi",&accumulator::multi );  
  class_<accumulator>("accumulator")
    .def("__call__",&accumulator::operator())
    .add_property("value", &accumulator::value)
    .add_property("add", &accumulator::add);
  
  //class_<analysis3v2>("analysis3v2")
  //  .def( "calcasymfill",&analysis3v2::calcasymfill );  
  */
}
