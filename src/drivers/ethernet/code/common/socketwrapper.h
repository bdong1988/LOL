#include "common.h"

class ISocketWrapper
{
  public:
    virtual ~ISocketWrapper() = 0;
    virtual uint32_t Initilize() = 0;
    virtual uint32_t Destroy() = 0;
    virtual uint32_t Send() = 0;
    virtual uint32_t Receive() = 0;
};

class CRawSocket : public ISocketWrapper
{
  public:
    uint32_t Initilize() override;
    uint32_t Destroy() override;
    uint32_t Send() override;
    uint32_t Receive() override;

    CRawSocket(const CRawSocket &) = delete;
    CRawSocket(CRawSocket &&) = delete;
    CRawSocket& operator = (const CRawSocket &) = delete;
    CRawSocket& operator = (CRawSocket &&) = delete;

  private:

};