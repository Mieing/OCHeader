@interface BDXBridgePoiPreviewImageMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (void)sendAlogOnStart:(id)a0;
- (void)sendAlogOnEnd:(id)a0 resultModel:(id)a1;
- (long long)authType;
- (id)methodName;

@end
