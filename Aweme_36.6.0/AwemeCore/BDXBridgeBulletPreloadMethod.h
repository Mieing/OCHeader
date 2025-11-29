@interface BDXBridgeBulletPreloadMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)onRunloopIdle:(id /* block */)a0;
- (long long)authType;
- (id)methodName;

@end
