@interface IESIMConversationPageHelperComponent : AWEIMComponentBase <IESIMConversationPageHelperMessage>

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)conversationContextForCid:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)dealloc;

@end
