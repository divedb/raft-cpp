#ifndef RAFT_CPP_NODE_NODE_ID_HPP_
#define RAFT_CPP_NODE_NODE_ID_HPP_

#include <string>
#include <string_view>

namespace raft {

class NodeID {
 public:
  NodeID(std::string_view value) : _value(value) {}

  inline bool equals(const NodeID& other) const {
    return _value == other._value;
  }

 private:
  std::string _value;
};

}  // namespace raft

#endif  // RAFT_CPP_NODE_NODE_ID_HPP_
