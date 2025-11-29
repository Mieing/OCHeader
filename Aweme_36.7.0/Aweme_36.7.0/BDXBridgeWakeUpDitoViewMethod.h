@interface BDXBridgeWakeUpDitoViewMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)getValideDitoViewController:(id)a0;
- (void)iesll_callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)iesll_getValideLLDitoViewController:(id)a0;
- (long long)authType;
- (id)methodName;

@end
