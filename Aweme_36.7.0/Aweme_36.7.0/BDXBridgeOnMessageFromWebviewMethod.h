@interface BDXBridgeOnMessageFromWebviewMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)engineTypes;
- (long long)authType;
- (id)methodName;

@end
