@interface BDXBridgeSetBulletContentStorageMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)p_trySetBulletContentStorageWithParams:(id)a0 completion:(id /* block */)a1;
- (long long)authType;
- (id)methodName;

@end
