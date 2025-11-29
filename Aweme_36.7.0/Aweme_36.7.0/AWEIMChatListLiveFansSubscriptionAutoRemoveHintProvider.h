@class AWEIMChatListLiveFansSubscriptionAutoRemoveHintTracker;

@interface AWEIMChatListLiveFansSubscriptionAutoRemoveHintProvider : AWEIMChatListHintProviderComponentBase

@property (retain, nonatomic) AWEIMChatListLiveFansSubscriptionAutoRemoveHintTracker *tracker;

- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (void)reloadHintWithCellContext:(id)a0;
- (BOOL)isCompatibleWithTimeText;
- (void)updateCellComponentWhenChatUpdate:(id)a0;
- (void)didDisplayedHint:(id)a0 cellContext:(id)a1;
- (void)didClickedHint:(id)a0 cellContext:(id)a1;
- (void)asyncUpdateHintVMWithChatModel:(id)a0;
- (id)__remindTypeForHint:(id)a0;
- (void)__updateVMForConversationId:(id)a0 content:(id)a1;
- (void)__updateHintsWithText:(id)a0 chat:(id)a1;
- (BOOL)p_disableHighLightWithChat:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
