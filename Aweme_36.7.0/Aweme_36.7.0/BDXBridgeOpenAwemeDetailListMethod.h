@interface BDXBridgeOpenAwemeDetailListMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)invokeCallback:(id /* block */)a0 withInvalidParam:(id)a1;
- (long long)authType;
- (id)methodName;

@end
