@interface AWEIMMessageAccountCardComponent : AWEIMFlexComponent

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)p_transferToProfileWithUserID:(id)a0 secUserID:(id)a1 additionalParams:(id)a2;
- (void)p_avatarDidTapped;
- (id)conversation;
- (id)displayMessage;

@end
