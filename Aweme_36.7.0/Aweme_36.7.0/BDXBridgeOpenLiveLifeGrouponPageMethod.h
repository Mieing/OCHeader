@interface BDXBridgeOpenLiveLifeGrouponPageMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)verifyParam:(id)a0;
- (void)iesll_callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)iesll_verifyParam:(id)a0;
- (long long)authType;
- (id)methodName;

@end
