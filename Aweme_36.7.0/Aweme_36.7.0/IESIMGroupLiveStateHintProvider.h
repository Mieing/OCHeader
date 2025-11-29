@interface IESIMGroupLiveStateHintProvider : AWEIMChatListHintProviderComponentBase

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (void)reloadHintWithCellContext:(id)a0;
- (BOOL)isCompatibleWithTimeText;
- (id)init;

@end
