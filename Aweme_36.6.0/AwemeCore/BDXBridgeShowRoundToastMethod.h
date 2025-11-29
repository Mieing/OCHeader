@interface BDXBridgeShowRoundToastMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)showRoundToastWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (long long)authType;
- (id)methodName;

@end
