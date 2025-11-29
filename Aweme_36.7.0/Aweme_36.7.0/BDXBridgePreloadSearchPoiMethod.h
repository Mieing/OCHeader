@interface BDXBridgePreloadSearchPoiMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)preloadInfo;
- (void)setPreloadInfo:(id)a0;
- (void)preloadPOIDetailWithOutput:(id)a0;
- (id)settingValueWithDefaultValueForKey:(id)a0;
- (void)runPitayaTaskWithParams:(id)a0 completion:(id /* block */)a1;
- (long long)authType;
- (id)init;
- (void)dealloc;
- (id)methodName;

@end
