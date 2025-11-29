@class NSDictionary;

@interface AWEIMDecisionDirector : NSObject

@property (copy, nonatomic) NSDictionary *nodeTypeToResolverMap;

+ (void)logDecisionNode:(id)a0 context:(id)a1 isHitNode:(BOOL)a2;
+ (void)dfsFindAllConfigNames:(id)a0 withNode:(id)a1 context:(id)a2;

- (BOOL)syncRecursiveResolveConfigNameWithNode:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (BOOL)syncRecursiveResolveAllValidConfigNamesWithNode:(id)a0 context:(id)a1 diffNames:(id)a2 completion:(id /* block */)a3;
- (BOOL)syncRecursiveResolveReceivingTextMessageInDecesionTreeWithNode:(id)a0 context:(id)a1 recvTextMsgNodeArray:(id)a2 completion:(id /* block */)a3;
- (BOOL)p_syncRecursiveResolveRefreshingInDecesionTreeWithTargetNodeAttributes:(id)a0 node:(id)a1 context:(id)a2;
- (id)initWithResolverMap:(id)a0;
- (id)resolveConfigNameWithDecisionTree:(id)a0 context:(id)a1;
- (id)resolveAllValidConfigNamesWithDecisionTree:(id)a0 context:(id)a1;
- (BOOL)resolveNode:(id)a0 context:(id)a1;
- (BOOL)syncRecursiveResolveRefreshingOtherMessageInDecesionTreeWithNode:(id)a0 context:(id)a1;
- (BOOL)syncRecursiveResolveRefreshingRecentMessageInDecesionTreeWithNode:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
