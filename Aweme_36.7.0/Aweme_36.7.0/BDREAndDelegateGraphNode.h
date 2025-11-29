@class BDREAndGraphNode;

@interface BDREAndDelegateGraphNode : BDREGraphNode

@property (retain, nonatomic) BDREAndGraphNode *andNode;

- (id)pointNodes;
- (BOOL)canPassWithFootPrint:(id)a0;
- (id)initWithAndNode:(id)a0;
- (void).cxx_destruct;
- (long long)maxIndex;

@end
