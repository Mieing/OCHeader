@class NSString;
@protocol AWEIMChatListHintProviderUpdateHintInterface, AWEIMUnreadMessagesConsumerDelegate;

@interface AWEIMUnreadMessagesConsumer_B2CReachOutMessages : AWEIMBaseUnreadMessagesConsumer {
    id<AWEIMUnreadMessagesConsumerDelegate> delegate;
}

@property (copy) NSString *strangerBoxLatestMsgBelongingCid;
@property (weak, nonatomic) id<AWEIMChatListHintProviderUpdateHintInterface> updateHintInterface;

+ (BOOL)enableConsumer;

- (void)afterInitialComponentAllResolved:(id)a0;
- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (BOOL)isCompatibleWithTimeText;
- (id)targetFilterOption;
- (id)targetFilterOptionsForUnreadMessagesInChat:(id)a0;
- (id)generateHintForConversation:(id)a0 filterOption:(id)a1;
- (BOOL)handleUnreadMessagesFromDB:(id)a0 conversationId:(id)a1 filterOption:(id)a2;
- (id)onConversationDataSourceMessagesCreated:(id)a0 con:(id)a1;
- (BOOL)canQueryWithStrangerCon:(id)a0;
- (id)p_filterOptionWithValue:(long long)a0 cid:(id)a1;
- (void)setHasValidMessageWithConversationId:(id)a0 filterOption:(id)a1 hasValid:(BOOL)a2;
- (id)generateHintForStrangerConversation:(id)a0 filterOptions:(id)a1;
- (id)generateHintForStrangerConversation:(id)a0 filterOption:(id)a1;
- (void)__tryUpdateStrangerBoxHint:(id)a0 filterOption:(id)a1;
- (BOOL)hasValidMessageWithConversationId:(id)a0 filterOption:(id)a1;
- (id)p_hintContent:(id)a0;
- (BOOL)p_needAppendLastMessage:(id)a0;
- (BOOL)isInExperiment:(id)a0;
- (id)generateHintModelForStrangerConversation:(id)a0 filterOptions:(id)a1;
- (BOOL)canQueryWithCon:(id)a0;
- (BOOL)hasValidMessageFromMessages:(id)a0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)a0;

@end
