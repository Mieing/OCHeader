@interface IESLiveSendPoiLogMethod : IESLiveBridgeMethod

- (Class)paramModelClass;
- (void)iesll_callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)iesll_getValidParameters:(id)a0;
- (id)iesll_getValidBTMResponder:(id)a0;
- (unsigned long long)authType;
- (id)methodName;

@end
