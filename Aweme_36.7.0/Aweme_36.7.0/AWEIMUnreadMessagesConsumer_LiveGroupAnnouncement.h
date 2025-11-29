@protocol AWEIMUnreadMessagesConsumerDelegate;

@interface AWEIMUnreadMessagesConsumer_LiveGroupAnnouncement : AWEIMBaseUnreadMessagesConsumer {
    id<AWEIMUnreadMessagesConsumerDelegate> delegate;
}

+ (BOOL)enableConsumer;

- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (BOOL)isCompatibleWithTimeText;
- (BOOL)p_disableHighLightWithCon:(id)a0;
- (id)targetFilterOptionsForUnreadMessagesInChat:(id)a0;
- (id)generateHintForConversation:(id)a0 filterOption:(id)a1;
- (BOOL)handleUnreadMessagesFromDB:(id)a0 conversationId:(id)a1 filterOption:(id)a2;
- (id)onConversationDataSourceMessagesCreated:(id)a0 con:(id)a1;
- (BOOL)__canQueryForLiveGroupAnnouncementWithChatModel:(id)a0;
- (BOOL)__filterAndSortAndCacheMessageFrom:(id)a0 conversationId:(id)a1 filterOption:(id)a2;
- (id)__filteredLiveGroupAnnouncementMessagesFrom:(id)a0;
- (BOOL)__canQueryForLiveGroupAnnouncementWithCon:(id)a0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)a0;

@end
