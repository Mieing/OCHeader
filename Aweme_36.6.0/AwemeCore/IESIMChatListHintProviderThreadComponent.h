@interface IESIMChatListHintProviderThreadComponent : AWEIMChatListHintProviderComponentBase

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (BOOL)isCompatibleWithTimeText;
- (void)updateCellComponentWhenChatUpdate:(id)a0;
- (void)didDisplayedHint:(id)a0 cellContext:(id)a1;
- (BOOL)p_disableHighLightWithCon:(id)a0;
- (BOOL)isCompatibleWithMention;
- (void)p_reloadHintWithCellContext:(id)a0;
- (BOOL)p_shouldShowHintWithContext:(id)a0;

@end
