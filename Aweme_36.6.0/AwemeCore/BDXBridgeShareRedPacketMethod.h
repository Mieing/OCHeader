@interface BDXBridgeShareRedPacketMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)createRedPackageModel:(id)a0;
- (long long)authType;
- (id)methodName;

@end
