@interface BDXBridgePoiLocationServiceMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (id)buildLocationServiceConfigWithParamModel:(id)a0;
- (void)iesll_callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)iesll_buildLocationServiceConfigWithParamModel:(id)a0;
- (long long)authType;
- (id)methodName;

@end
