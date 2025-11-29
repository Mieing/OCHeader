@interface BDXBridgeImUpdateCollectCardMessageMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (id)resultSuccess:(BOOL)a0;
- (id)statusSuccess:(BOOL)a0;
- (long long)authType;
- (id)methodName;

@end
