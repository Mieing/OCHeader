@interface IESIMGroupOwnerLiveHintProvider : AWEIMChatListHintProviderComponentBase

- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (BOOL)isCompatibleWithTimeText;
- (id)init;

@end
