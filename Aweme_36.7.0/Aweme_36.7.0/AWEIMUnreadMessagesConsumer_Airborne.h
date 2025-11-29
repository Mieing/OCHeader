@class NSString, NSMutableSet;
@protocol AWEIMUnreadMessagesConsumerDelegate;

@interface AWEIMUnreadMessagesConsumer_Airborne : AWEIMBaseUnreadMessagesConsumer <AWEUserMessage> {
    id<AWEIMUnreadMessagesConsumerDelegate> delegate;
}

@property (retain, nonatomic) NSMutableSet *requestingUserSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableConsumer;
+ (double)timeIntervalFromLastShowAirborneHintWithCid:(id)a0;
+ (BOOL)canShowAirborneHintWithCid:(id)a0;
+ (BOOL)canShowAirborneHintForFrequencyControlWithCon:(id)a0;
+ (BOOL)canShowAirborneHintForMuteSettingWithCon:(id)a0;
+ (void)inserGroupOwnerMeessage:(id)a0 toArray:(id)a1;

- (void)didFinishLogoutWithUid:(id)a0;
- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (BOOL)isCompatibleWithTimeText;
- (void)didDisplayedHint:(id)a0 cellContext:(id)a1;
- (void)didClickedHint:(id)a0 cellContext:(id)a1;
- (BOOL)p_disableHighLightWithCon:(id)a0;
- (BOOL)__canGenerateHintsForConversationId:(id)a0 filterOption:(id)a1;
- (id)targetFilterOptionsForUnreadMessagesInChat:(id)a0;
- (id)generateHintForConversation:(id)a0 filterOption:(id)a1;
- (BOOL)handleUnreadMessagesFromDB:(id)a0 conversationId:(id)a1 filterOption:(id)a2;
- (id)onConversationDataSourceMessagesCreated:(id)a0 con:(id)a1;
- (long long)hintLineBreakMode;
- (BOOL)__filterAndCacheMessagesFrom:(id)a0 conversationId:(id)a1 filterOption:(id)a2;
- (id)__getNewestValidMessageForConversationId:(id)a0 filterOption:(id)a1;
- (id)__airborneHintsWithName:(id)a0 message:(id)a1 con:(id)a2 filterOption:(id)a3;
- (void)__queryAndCacheUserSid:(id)a0;
- (BOOL)__canQueryForAirboneWithChatModel:(id)a0;
- (BOOL)__filterAndCacheAllOwnerMessagesFrom:(id)a0 conversationId:(id)a1 filterOption:(id)a2;
- (BOOL)__canQueryForAirboneWithCon:(id)a0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)a0;

@end
