@interface BDXBridgeSetSessionMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)awegroupon_callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (long long)authType;
- (id)methodName;

@end
