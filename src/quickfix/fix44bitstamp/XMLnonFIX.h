#ifndef FIX44bitstamp_XMLNONFIX_H
#define FIX44bitstamp_XMLNONFIX_H

#include "Message.h"

namespace FIX44bitstamp
{

  class XMLnonFIX : public Message
  {
  public:
    XMLnonFIX() : Message(MsgType()) {}
    XMLnonFIX(const FIX::Message& m) : Message(m) {}
    XMLnonFIX(const Message& m) : Message(m) {}
    XMLnonFIX(const XMLnonFIX& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("n"); }

  };

}

#endif
