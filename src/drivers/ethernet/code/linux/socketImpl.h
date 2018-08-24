#include <sys/socket.h>
#include <netinet/in.h> 

class CSocketImp
{
public:
    CSocketImp();
    ~CSocketImp();

    CSocketImp(MyClass &&) = delete;
    CSocketImp(const MyClass &) = delete;
    CSocketImp &operator=(MyClass &&) = delete;
    CSocketImp &operator=(const MyClass &) = delete;
    
    uint32_t open();
    uint32_t close();
    uint32_t send();
    uint32_t receive();
private:
    int32_t m_socketFD = -1;
};