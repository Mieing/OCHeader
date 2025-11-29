@interface BDXBridgeSendPoiLogMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)getValidParameters:(id)a0;
- (id)getValidBTMResponder:(id)a0;
- (void)iesll_callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)iesll_getValidParameters:(id)a0;
- (id)iesll_getValidBTMResponder:(id)a0;
- (long long)authType;
- (id)methodName;

@end
