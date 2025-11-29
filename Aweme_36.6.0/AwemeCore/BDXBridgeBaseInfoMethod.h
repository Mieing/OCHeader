@interface BDXBridgeBaseInfoMethod : BDXBridgeMethod

+ (id)metaInfo;

- (id)attachingDIContext;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (long long)authType;
- (id)methodName;

@end
