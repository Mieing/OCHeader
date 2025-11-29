@interface AWEIMChatListHintProviderUnreadCountComponent : AWEIMChatListHintProviderComponentBase

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (void)reloadHintWithCellContext:(id)a0;
- (BOOL)isCompatibleWithTimeText;
- (void)updateCellComponentWhenChatUpdate:(id)a0;

@end
