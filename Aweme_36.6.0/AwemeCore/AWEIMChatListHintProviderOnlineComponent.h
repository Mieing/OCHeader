@interface AWEIMChatListHintProviderOnlineComponent : AWEIMChatListHintProviderComponentBase

- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (void)reloadHintWithCellContext:(id)a0;
- (BOOL)isCompatibleWithTimeText;
- (void)updateCellComponentWhenChatUpdate:(id)a0;
- (void)__updateHintWithContent:(id)a0 conversationId:(id)a1;
- (BOOL)isCompatibleWithSnapshot;

@end
