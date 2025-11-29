@interface IESLiveOpenLiveLifeGrouponPageMethod : IESLiveBridgeMethod

- (Class)paramModelClass;
- (void)iesll_callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)iesll_verifyParam:(id)a0;
- (unsigned long long)authType;
- (id)methodName;

@end
