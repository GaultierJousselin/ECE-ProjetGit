include <stdlib>

class Projet {
private:
    int m_data;

public:
    Projet();
    virtual ~Projet ();

    void setData(int m){m_data = m;}
    int getData(){return m_data;}
};

int main(int argc, char const *argv[]) {
  std::cout << "hello World";
  std::cout << "\nBonjour le monde\n";

  Projet mdr;
  mdr.setData(15);
  std::cout << mdr.getData << "\n\n";

  //Test
  return 0;
}
