@class BDRETrieNode;

@interface BDRETrieGraphNode : BDREGraphNode

@property (retain, nonatomic) BDRETrieNode *rootNode;

- (void)visitWithFootPrint:(id)a0 previousNode:(id)a1;
- (void)travelWithFootPrint:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
