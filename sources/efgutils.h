//
// FILE: efgutils.h -- Declaration of useful global functions for the 
//                      extensive form
//
// $Id$
//

#ifndef EFGUTILS_H
#define EFGUTILS_H

#include "efg.h"
#include "node.h"
#include "glist.h"

// returns a glist of all nodes in the extensive form
void Nodes (const Efg &befg, gList <Node *> &list);

void Nodes (const Efg &befg, Node *n, gList <Node *> &list);

// returns the number of nodes in the extensive form
int NumNodes (const Efg &befg);

// returns the number of nodes given a starting node
int CountNodes (const Efg &e, Node *n);

// returns the action leading up to the node
Action* LastAction(const Efg &e, Node *node);

// returns the list of nodes which are marked as the roots of subgames
void MarkedSubgameRoots(const Efg &efg, gList<Node *> &list);

// returns the list of nodes which are valid roots of subgames
void LegalSubgameRoots(const Efg &efg, gList<Node *> &list);
void LegalSubgameRoots(const Efg &efg, Node *, gList<Node *> &);
bool HasSubgames(const Efg &efg);
bool HasSubgames(const Efg &, Node * n);

bool AllSubgamesMarked(const Efg &efg);

// returns the list of nodes which are roots of child subgames
void ChildSubgames(const Efg &, Node *, gList<Node *> &);

// determines if a game is perfect recall.  
// if not, returns a pair of infosets violating the definition
bool IsPerfectRecall(const Efg &);
bool IsPerfectRecall(const Efg &, Infoset *&, Infoset *&);

void RandomEfg(const FullEfg &);
FullEfg *CompressEfg(const FullEfg &, const EFSupport &);

#endif // EFGUTILS_H




