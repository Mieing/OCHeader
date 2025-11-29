@protocol AWEIMUnreadMessagesConsumerDelegate;

@interface AWEIMUnreadMessagesConsumer_SplitBill : AWEIMBaseUnreadMessagesConsumer {
    id<AWEIMUnreadMessagesConsumerDelegate> delegate;
}

+ (BOOL)enableConsumer;

- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (BOOL)isCompatibleWithTimeText;
- (void)didDisplayedHint:(id)a0 cellContext:(id)a1;
- (void)didClickedHint:(id)a0 cellContext:(id)a1;
- (id)targetFilterOption;
- (id)targetFilterOptionsForUnreadMessagesInChat:(id)a0;
- (id)generateHintForConversation:(id)a0 filterOption:(id)a1;
- (BOOL)handleUnreadMessagesFromDB:(id)a0 conversationId:(id)a1 filterOption:(id)a2;
- (id)onConversationDataSourceMessagesCreated:(id)a0 con:(id)a1;
- (BOOL)hasValidMessageWithConversationId:(id)a0 filterOption:(id)a1;
- (BOOL)canQueryWithCon:(id)a0;
- (BOOL)hasValidMessageFromMessages:(id)a0;
- (id)trackingParamsWithCellContext:(id)a0;
- (BOOL)isRelatedUser:(id)a0;
- (void)setHasValidMessageWithConversationId:(id)a0 filterOption:(id)a1;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)a0;

@end
