@interface BDUGLuckyCatRequestNetXBridge : BDUGLuckyXBridgeMethod

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (id)configHeaderForNetworkJSBParams:(id)a0;
- (id)addAddtionHeaderForNetworkJSB:(id)a0 originHeader:(id)a1 containerType:(id)a2 invokeUrl:(id)a3 invokeFeId:(id)a4;
- (id)methodName;

@end
