#include <gtest/gtest.h>

#include "raft/node/node_id.hpp"

TEST(NodeIDTest, Equals) {
  raft::NodeID node1("Node 1");
  raft::NodeID node2("Node 2");
  raft::NodeID node3("Node 1");

  EXPECT_TRUE(node1.equals(node3));
  EXPECT_FALSE(node1.equals(node2));
  EXPECT_FALSE(node2.equals(node3));
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}