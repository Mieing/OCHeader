@interface BDXBridgeOpenJumpProfileMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)showCommonErrorToast;
- (BOOL)checkScope:(id)a0 inClientScopesArray:(id)a1;
- (void)jumpToProfile:(id)a0 withClientKey:(id)a1;
- (long long)authType;
- (id)methodName;

@end
