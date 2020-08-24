#pragma once

#include <Rcpp.h>
using namespace Rcpp;

typedef enum color_t { BLACK, RED } color_t;

struct node {
  color_t color;
  double value;
  node *parent;
  node *left;
  node *right;
};


class RB_tree {
private:
  node *root;
public:
  RB_tree();
  node *insert(node *n);
  void delete_node(node *n);
};
