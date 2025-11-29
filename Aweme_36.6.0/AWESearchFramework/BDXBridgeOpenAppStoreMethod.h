@interface BDXBridgeOpenAppStoreMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)bindFlowAuthTokenIfNeededWithUGRouteParams:(id)a0 storeVC:(id)a1;
- (long long)authType;
- (id)methodName;

@end
