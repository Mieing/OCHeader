@class BDREAndDelegateGraphNode;

@interface BDREAndGraphNode : BDREGraphNode

@property (weak, nonatomic) BDREAndDelegateGraphNode *leftDelegateNode;
@property (weak, nonatomic) BDREAndDelegateGraphNode *rightDelegateNode;

- (void)updateIndex:(long long)a0;
- (BOOL)canPassWithFootPrint:(id)a0;
- (void)setLeftNode:(id)a0 rightNode:(id)a1;
- (void).cxx_destruct;

@end
