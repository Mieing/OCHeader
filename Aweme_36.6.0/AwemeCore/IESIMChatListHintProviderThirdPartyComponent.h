@interface IESIMChatListHintProviderThirdPartyComponent : AWEIMChatListHintProviderComponentBase

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (BOOL)isCompatibleWithTimeText;
- (void)updateCellComponentWhenChatUpdate:(id)a0;
- (void)didDisplayedHint:(id)a0 cellContext:(id)a1;
- (void)p_reloadHintWithCellContext:(id)a0;

@end
