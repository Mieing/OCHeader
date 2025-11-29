@interface AWEIMChatListHintProviderMentionComponent : AWEIMChatListHintProviderComponentBase

- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (void)reloadHintWithCellContext:(id)a0;
- (BOOL)isCompatibleWithTimeText;
- (void)updateCellComponentWhenChatUpdate:(id)a0;
- (void)didDisplayedHint:(id)a0 cellContext:(id)a1;
- (void)didClickedHint:(id)a0 cellContext:(id)a1;
- (BOOL)p_disableHighLightWithChat:(id)a0;
- (BOOL)isCompatibleWithMention;

@end
