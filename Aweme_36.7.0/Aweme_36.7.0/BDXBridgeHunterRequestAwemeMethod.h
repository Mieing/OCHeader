@interface BDXBridgeHunterRequestAwemeMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (id)configJSBHeader:(id)a0;
- (id)valueForDynamicKeyPath:(id)a0 object:(id)a1;
- (void)invokeXRequestWithParamModel:(id)a0 resultDict:(id)a1 completion:(id /* block */)a2;
- (long long)authType;
- (id)methodName;

@end
