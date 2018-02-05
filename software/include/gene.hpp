#include <iostream>

using namespace std;

#ifndef GENE_HPP
#define GENE_HPP

class Gene{
   private:
      int innovation_number;

      float weight;

      Node* output_gene;
      Node* starting_gene;
   protected:
   public:
      Gene(Node *, Node *);
      ~Gene();

      void set_weight(float);

      float get_weight();

      Node* get_output_gene();
      Node* get_starting_gene();
};

#endif