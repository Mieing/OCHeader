@class NSString, NSArray, BDECPigeonClientV2, BDECPigeonMultiDelegate, BDECPigeonClientConfigV2;
@protocol BDECPigeonChannelDelegate, BDECPigeonChannelConversationDataSourceInterface;

@interface BDECPigeonChannel : NSObject <BDECPigeonChannelInterface, BDECPigeonConversationPrivateDelegate>

@property (copy, nonatomic) NSString *bizType;
@property (copy, nonatomic) NSArray *inboxes;
@property (nonatomic) unsigned long long communicateType;
@property (nonatomic) unsigned long long conversationType;
@property (copy, nonatomic) NSString *uniqueId;
@property (retain, nonatomic) BDECPigeonClientConfigV2 *config;
@property (weak, nonatomic) BDECPigeonClientV2 *client;
@property (retain, nonatomic) BDECPigeonMultiDelegate<BDECPigeonChannelDelegate> *multiDelegates;
@property (readonly) id<BDECPigeonChannelConversationDataSourceInterface> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)conversationType:(unsigned long long)a0;
+ (id)channelWithBizType:(id)a0 inboxes:(id)a1 communicateType:(unsigned long long)a2 client:(id)a3;
+ (Class)conversationClass;
+ (id)uniqueIdWithBizType:(id)a0 inboxes:(id)a1;
+ (Class)proxyConversationClass;
+ (unsigned long long)communicateType:(unsigned long long)a0;

- (void)sendUserEnterMessageWithRequestModel:(id)a0 dictCompletion:(id /* block */)a1;
- (id)conversationWithId:(id)a0;
- (void)sendUserEnterMessageWithPigeonShopId:(id)a0 conGroupId:(id)a1 extParams:(id)a2 pigeonBizType:(id)a3 completion:(id /* block */)a4;
- (void)onMessageReadUpdatedWithConversationIdList:(id)a0;
- (id)createBizDataSource;
- (id)conversationWithBizId:(id)a0;
- (void)asyncGetConversationWithBizId:(id)a0 completion:(id /* block */)a1;
- (void)asyncGetConversationWithId:(id)a0 completion:(id /* block */)a1;
- (long long)currentPullerStatus;
- (void)createConversationWithParticipantsBizRoleObjects:(id)a0 inbox:(id)a1 completion:(id /* block */)a2;
- (void)fetchConversationInfoWithConversationShortID:(long long)a0 bizConversationID:(id)a1 inbox:(id)a2 completion:(id /* block */)a3;
- (void)checkChatAvailableWithPigeonUid:(id)a0 conGroupId:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
- (void)releaseDataSource;
- (void)fetchMessageReadsWithPigeonConversations:(id)a0 completion:(id /* block */)a1;
- (id)conversationWithInner:(id)a0;
- (void)onMessageSendResponse:(id)a0 message:(id)a1 messageIdentifier:(id)a2 conversation:(id)a3 error:(id)a4;
- (void)conversationDidSendMessageWithMessageID:(id)a0 sendMessage:(id)a1;
- (id)p_finalConversationWithProxyClass:(Class)a0 cachedConversation:(id)a1 conversationId:(id)a2 innerConv:(id)a3 client:(id)a4;
- (id)validInbox:(id)a0;
- (void)trackCreateConversation:(id)a0 startTime:(long long)a1 success:(BOOL)a2 error:(id)a3;
- (void)trackFetchConversation:(id)a0 startTime:(long long)a1 endTime:(long long)a2 success:(BOOL)a3 error:(id)a4;
- (long long)calculateDurationBetweenStartTime:(long long)a0 endTime:(long long)a1;
- (void)createConversationWithOtherParticipants:(id)a0 inbox:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)onConversationDismissed:(id)a0;
- (void)onConversationUpdated:(id)a0;
- (void)onMessageUpdated:(id)a0 conversation:(id)a1;
- (void)onNewP2PMessage:(id)a0 conversation:(id)a1;
- (void)notifyDidInsertNewMessages:(long long)a0 messages:(id)a1 belongingConversationMap:(id)a2;
- (void)notifyDidInsertNewMessages:(long long)a0 messages:(id)a1 trackInfo:(id)a2 belongingConversationMap:(id)a3;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)realDataSource;

@end
