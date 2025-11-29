@protocol AWEIMUnreadMessagesConsumerDelegate;

@interface AWEIMUnreadMessageConsumer_companyHasBeenUrgedReply : AWEIMBaseUnreadMessagesConsumer {
    id<AWEIMUnreadMessagesConsumerDelegate> delegate;
}

+ (BOOL)enableConsumer;

- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (BOOL)isCompatibleWithTimeText;
- (BOOL)__canQueryForCompanyHasBeenUrgedReplyWithCon:(id)a0;
- (id)targetFilterOption;
- (BOOL)__canGenerateHintsForConversationId:(id)a0 filterOption:(id)a1;
- (BOOL)__filterAndCacheMessagesFrom:(id)a0 conversationId:(id)a1 filterOption:(id)a2 checkUnread:(BOOL)a3;
- (id)__processCreatedOrUpdatedMessages:(id)a0 con:(id)a1 checkUnread:(BOOL)a2;
- (id)targetFilterOptionsForUnreadMessagesInChat:(id)a0;
- (id)generateHintForConversation:(id)a0 filterOption:(id)a1;
- (BOOL)handleUnreadMessagesFromDB:(id)a0 conversationId:(id)a1 filterOption:(id)a2;
- (id)onConversationDataSourceMessagesUpdated:(id)a0 con:(id)a1;
- (id)onConversationDataSourceMessagesCreated:(id)a0 con:(id)a1;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)a0;

@end
