@interface BDXBridgeLocalLifeBatchPreloadPoiDetailMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)preloadInfo;
- (void)setPreloadInfo:(id)a0;
- (void)runPitayaTaskWithParams:(id)a0 business:(id)a1 completion:(id /* block */)a2;
- (void)batchPreloadPOIDetailWithOutput:(id)a0;
- (long long)authType;
- (id)init;
- (id)methodName;

@end
