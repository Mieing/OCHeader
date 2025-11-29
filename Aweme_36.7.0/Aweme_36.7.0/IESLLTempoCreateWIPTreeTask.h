@class IESLLTempoNode, NSDictionary, IESLLTempoContext;

@interface IESLLTempoCreateWIPTreeTask : NSObject

@property (weak, nonatomic) IESLLTempoContext *context;
@property (retain, nonatomic) IESLLTempoNode *workInProgress;
@property (retain, nonatomic) IESLLTempoNode *current;
@property (copy, nonatomic) NSDictionary *globalProps;
@property (retain, nonatomic) NSDictionary *originTreeMap;
@property (retain, nonatomic) NSDictionary *effectMap;

+ (id)createWIPTreeWithContext:(id)a0 currentTree:(id)a1 effectMap:(id)a2;

- (void)diffWithError:(id *)a0;
- (void)insertWipNode:(id)a0 componentID:(id)a1;
- (void)reuseCurNode:(id)a0 updateWipNode:(id)a1 componentID:(id)a2;
- (id)getChildrenWithNode:(id)a0 treeType:(id)a1 envData:(id)a2;
- (BOOL)isPreloadEffect;
- (BOOL)isLoadEffect;
- (id)getEnvDataWithProps:(id)a0 data:(id)a1 globalProps:(id)a2;
- (void)copyCurNode:(id)a0 toWipNode:(id)a1;
- (void).cxx_destruct;

@end
