@interface BDXBridgeImFetchPetAIAggrInfoMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (id)statusSuccess:(BOOL)a0;
- (void)p_callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)processEnterChatSceneWithConversationID:(id)a0 sentinel:(long long)a1;
- (long long)authType;
- (id)methodName;

@end
