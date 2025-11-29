@class AWEIMMessage, NSString, AWEBinding;
@protocol AWEIMSilverWingLoadingTrackInterface;

@interface AWEIMSilverWingPrivateChatLoadingComponent : AWEIMComponentBase <AWEIMMessageListDataAction>

@property (retain, nonatomic) AWEIMMessage *fakeSilverWingLoadingMsg;
@property (nonatomic) BOOL cancelDelayedLoadingMsgDeletion;
@property (copy, nonatomic) NSString *lastCauseLoadingMsgID;
@property (weak, nonatomic) id<AWEIMSilverWingLoadingTrackInterface> loadingTrackComp;
@property (retain, nonatomic) AWEBinding *needLoadingKVO;
@property (retain, nonatomic) AWEBinding *loadingContentKVO;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableComponentWithConversation:(id)a0;
+ (BOOL)enableLoadingWithConversation:(id)a0;
+ (BOOL)messageShouldAIReplyWithSyncedExt:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)willSendNewMessage;
- (void)didReceiveAsyncSendMessageResponse:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)didReceiveNewMessage:(id)a0 reason:(long long)a1;
- (void)didReceiveSendMessageResponse:(id)a0 message:(id)a1 result:(BOOL)a2;
- (void)willDeleteMessage:(id)a0;
- (void)didUpdateWithMessage:(id)a0;
- (void)removeFakeMessageForLoadingDelayTime:(long long)a0 messageID:(id)a1;
- (void)addLoadingIfNeededExt:(id)a0 messageId:(id)a1;
- (BOOL)needNotRemoveLoading:(id)a0;
- (void)removeLoadingMessageIfNeeded;
- (void)p_kvoLoadingContentLastMessageID:(id)a0 loadingMessage:(id)a1;
- (void)insertFakeMessageForLoadingIfNeeded:(id)a0 lastMessageID:(id)a1;
- (void).cxx_destruct;

@end
