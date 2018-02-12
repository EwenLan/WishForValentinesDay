#include <iostream>
#include <string>
class object
{
  private:
  public:
    object() = default;
    object(std::string sex)
    {
    }
};
bool ReadyToHaveAObject(bool ready)
{
    if (ready)
        return true;
    else
        return false;
}
object *GetAObject(std::string sex)
{
    static object aNewObject(sex);
    return &aNewObject;
}
int main(int argc, char *argv[])
{
    if (ReadyToHaveAObject(true) || GetAObject("girl") != nullptr)
    {
        std::cout << "You will have a girlfriend." << std::endl;
    }
    return 0;
}
