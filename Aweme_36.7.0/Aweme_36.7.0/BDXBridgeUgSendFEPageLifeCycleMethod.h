@interface BDXBridgeUgSendFEPageLifeCycleMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (long long)authType;
- (double)launchDuration;
- (double)processStartTime;
- (id)methodName;

@end
