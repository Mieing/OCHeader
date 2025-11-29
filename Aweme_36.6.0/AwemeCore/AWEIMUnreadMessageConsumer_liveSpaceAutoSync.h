@interface AWEIMUnreadMessageConsumer_liveSpaceAutoSync : AWEIMBaseUnreadMessagesConsumer

+ (BOOL)enableConsumer;

- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (BOOL)isCompatibleWithTimeText;
- (void)didClickedHint:(id)a0 cellContext:(id)a1;
- (BOOL)p_disableHighLightWithCon:(id)a0;
- (id)targetFilterOptionsForUnreadMessagesInChat:(id)a0;
- (id)generateHintForConversation:(id)a0 filterOption:(id)a1;
- (BOOL)handleUnreadMessagesFromDB:(id)a0 conversationId:(id)a1 filterOption:(id)a2;
- (id)onConversationDataSourceMessagesCreated:(id)a0 con:(id)a1;
- (long long)hintLineBreakMode;
- (BOOL)__enableLiveVipSpaceAutoSyncWithCon:(id)a0;
- (id)__targetFilterOption;
- (BOOL)__filterAndCacheMessagesFrom:(id)a0 conversationId:(id)a1 filterOption:(id)a2;
- (BOOL)__canGenerateHintsForConversation:(id)a0 filterOption:(id)a1;

@end
