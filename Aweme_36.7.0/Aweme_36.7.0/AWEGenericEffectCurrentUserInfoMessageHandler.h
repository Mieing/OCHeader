@interface AWEGenericEffectCurrentUserInfoMessageHandler : AWEGenericEffectMessageBaseHandler

- (id)bizIdentifier;
- (BOOL)canHandle:(id)a0 arg3Info:(id)a1;
- (void)handleMessage:(id)a0 arg3Info:(id)a1 isGlobal:(id)a2;
- (void)p_handleUserProfileWithTaskId:(long long)a0 isGlobal:(id)a1;
- (void)p_imageCachePathWithUrl:(id)a0 completion:(id /* block */)a1;

@end
