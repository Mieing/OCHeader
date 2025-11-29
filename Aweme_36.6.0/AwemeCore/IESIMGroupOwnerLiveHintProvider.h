@interface IESIMGroupOwnerLiveHintProvider : AWEIMChatListHintProviderComponentBase

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (BOOL)isCompatibleWithTimeText;
- (id)init;

@end
