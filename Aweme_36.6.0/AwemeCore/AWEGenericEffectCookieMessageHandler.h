@interface AWEGenericEffectCookieMessageHandler : AWEGenericEffectMessageBaseHandler

- (id)bizIdentifier;
- (void)p_handleCookieWithEffectBody:(id)a0 taskId:(long long)a1 isGlobal:(id)a2;
- (BOOL)canHandle:(id)a0 arg3Info:(id)a1;
- (void)handleMessage:(id)a0 arg3Info:(id)a1 isGlobal:(id)a2;

@end
