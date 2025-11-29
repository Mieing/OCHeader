@interface BDXBridgeImGetStrategyConfigMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (long long)authType;
- (id)methodName;

@end
