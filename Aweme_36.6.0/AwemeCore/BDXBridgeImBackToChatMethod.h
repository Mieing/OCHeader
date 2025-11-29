@interface BDXBridgeImBackToChatMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)bringViewControllerToFront:(id)a0 completion:(id /* block */)a1;
- (long long)authType;
- (id)methodName;

@end
