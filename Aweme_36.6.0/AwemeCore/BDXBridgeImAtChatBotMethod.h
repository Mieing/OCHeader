@interface BDXBridgeImAtChatBotMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)statusSuccess:(BOOL)a0;
- (long long)authType;
- (id)methodName;

@end
