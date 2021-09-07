#include <pybind11/pybind11.h>

#include "example.pb.h"
#include "google/protobuf/message.h"
#include "pybind11_protobuf/wrapped_proto_caster.h"


void printMessage(const google::protobuf::Message& msg) {
  std::cout << msg.DebugString();
}

PYBIND11_MODULE(my_extension, m) {
  m.def("print_message",  pybind11::google::WithWrappedProtos(&printMessage));
}
