@protocol YataInstanceInnerInterface;

@interface YataProtocolMergeTool : NSObject

@property (weak, nonatomic) id<YataInstanceInnerInterface> instance;

- (id)initWithYataInstance:(id)a0;
- (id)applyPatches:(id)a0 toJSONObject:(id)a1 errorOccurred:(id *)a2;
- (id)mergeProtocolWithLatest:(id)a0 current:(id)a1;
- (BOOL)reportErrorIfNeeded:(id)a0;
- (void)removeUnreachableFacadeNodes:(id)a0 nullNullNodes:(id)a1;
- (void)mergeContainerWithLatest:(id)a0 current:(id)a1;
- (void)mergeGlobalWithLatest:(id)a0 current:(id)a1;
- (void)mergeLinkageWithLatest:(id)a0 current:(id)a1;
- (void)mergeEndpointWithLatest:(id)a0 current:(id)a1;
- (void)mergeDataWithLatest:(id)a0 current:(id)a1;
- (void)mergeFacadeWithLatest:(id)a0 current:(id)a1;
- (id)mergeJSONDict:(id)a0 toJSONDict:(id)a1;
- (id)mergeAndUpdatePopup:(id)a0 popupArray:(id)a1;
- (void).cxx_destruct;

@end
