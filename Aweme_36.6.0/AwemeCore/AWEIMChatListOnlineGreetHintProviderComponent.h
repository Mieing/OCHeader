@interface AWEIMChatListOnlineGreetHintProviderComponent : AWEIMChatListHintProviderComponentBase

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (void)reloadHintWithCellContext:(id)a0;
- (BOOL)isCompatibleWithTimeText;
- (void)updateCellComponentWhenChatUpdate:(id)a0;
- (void)__updateHintWithContent:(id)a0 conversationId:(id)a1;
- (void)updateHintShow:(BOOL)a0 chat:(id)a1;
- (BOOL)isCompatibleWithSnapshot;

@end
