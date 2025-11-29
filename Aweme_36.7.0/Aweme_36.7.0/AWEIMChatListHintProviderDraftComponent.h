@interface AWEIMChatListHintProviderDraftComponent : AWEIMChatListHintProviderComponentBase

@property (nonatomic) BOOL enableComputationForStrangerConversation;

- (void)componentDidMounted:(id)a0;
- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (void)reloadHintWithCellContext:(id)a0;
- (BOOL)isCompatibleWithTimeText;
- (void)updateCellComponentWhenChatUpdate:(id)a0;
- (void)updateStrangerConversationCellWhenStrangerChatUpdate:(id)a0;
- (void)__didUpdateDraft:(id)a0;
- (void)__updateDraftHintWithDraftModel:(id)a0 conversationId:(id)a1;
- (void)__updateDraftHintWithDraftModel:(id)a0 con:(id)a1;
- (void)dealloc;

@end
