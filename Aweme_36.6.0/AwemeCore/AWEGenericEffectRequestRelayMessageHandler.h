@interface AWEGenericEffectRequestRelayMessageHandler : AWEGenericEffectMessageBaseHandler

- (id)bizIdentifier;
- (BOOL)canHandle:(id)a0 arg3Info:(id)a1;
- (void)handleMessage:(id)a0 arg3Info:(id)a1 isGlobal:(id)a2;
- (void)p_handleRequestWithJson:(id)a0 taskId:(long long)a1 isGlobal:(id)a2;
- (BOOL)p_isValidUrl:(id)a0;
- (void)p_requestWithMethod:(id)a0 urlString:(id)a1 params:(id)a2 completion:(id /* block */)a3;

@end
