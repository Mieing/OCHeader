@interface BDXBridgePoiCommentDraftQueueMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (void)sendAlogOnStart:(id)a0;
- (void)sendAlogOnEnd:(BOOL)a0 paramModel:(id)a1 resultModel:(id)a2;
- (long long)authType;
- (id)methodName;

@end
