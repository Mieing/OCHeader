@interface BDXBridgeShowOpenAuthMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (void)callbackSuccess:(id /* block */)a0 info:(id)a1;
- (void)callbackError:(id /* block */)a0 errMsg:(id)a1 info:(id)a2;
- (long long)authType;
- (id)methodName;

@end
