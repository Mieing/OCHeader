@interface BDXBridgeCommentOpenEvaluationCardMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (id)currentController:(id)a0;
- (void)transferToNewPage:(id)a0 completionHandler:(id /* block */)a1;
- (void)renderCardOnContainer:(id)a0 completionHandler:(id /* block */)a1;
- (long long)authType;
- (void)observeEvent:(id)a0;
- (id)methodName;

@end
