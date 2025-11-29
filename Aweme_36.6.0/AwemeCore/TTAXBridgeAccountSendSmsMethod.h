@interface TTAXBridgeAccountSendSmsMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (long long)authType;
- (void)messageComposeViewController:(id)a0 didFinishWithResult:(long long)a1;
- (id)methodName;

@end
