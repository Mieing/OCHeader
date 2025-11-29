@class NSString;

@interface AWEIMMessageListElfBotComponent : AWEIMComponentBase <AWEIMConversationInfoOtherSubscriberProtocol, AWEIMStreakPetElfPrefetchAction, AWEIMInputViewAtMessage, AWEIMElfBotFetchAggregationJSBMessage, AWEIMMessageConversationDelegate>

@property (nonatomic) long long aggrDelayCheckTime;
@property (nonatomic) BOOL didUpdateElfMemory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (void)hostVC_afterFirstRender;
- (void)participantsDidUpdate;
- (void)botsDidUpdate;
- (void)atMessageWithParams:(id)a0 completion:(id /* block */)a1;
- (id)conversationInfoOtherRequestParams;
- (void)updateConversationInfoOtherData:(id)a0 source:(id)a1;
- (void)setupObserver;
- (id)listViewModel;
- (void)didGetServerDataWithRequestInfo:(id)a0;
- (void)didCallFetchAggregationEnterChatJSBMessageWithConversationID:(id)a0;
- (void)updateElfMemory;
- (void)updateElfUserIfNeeded;
- (void)recoveryElfBotNameAndAvatarIfNeeded;
- (void)updateAllElfBotMsg;
- (void)dealloc;

@end
