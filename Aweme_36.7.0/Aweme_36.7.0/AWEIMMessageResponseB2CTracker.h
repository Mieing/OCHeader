@class NSString;
@protocol AWEIMMessageListDataInterface;

@interface AWEIMMessageResponseB2CTracker : AWEIMComponentBase <AWEIMMessageListDataAction, AWEIMMessageListEnterChatSubscriberProtocol>

@property (weak, nonatomic) id<AWEIMMessageListDataInterface> messageListData;
@property (nonatomic) BOOL currentUserIsCustomer;
@property (nonatomic) BOOL peerUserIsCustomer;
@property (nonatomic) BOOL firstFrameOpt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_afterFirstRender;
- (id)messageListEnterChatRequestParamsForRequestSource:(long long)a0;
- (void)updateMessageListEnterChatData:(id)a0 requestSource:(long long)a1;
- (void)p_updateIsCustomer;
- (void)p_handleTrackMessage:(id)a0 conversationID:(id)a1;
- (void)p_caculateCsParams:(id)a0 messageID:(id)a1 conversationID:(id)a2;
- (void)p_caculateCommonParams:(id)a0 messageID:(id)a1 conversationID:(id)a2;
- (id)sendMethodFromMessage:(id)a0;
- (void).cxx_destruct;

@end
