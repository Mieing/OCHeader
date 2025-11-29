@class NSString, NSDictionary, AWEIMMessage, RxDeferred;

@interface AWEIMHiHiEnterChatInsertNoticeComponent : AWEIMComponentBase <AWEIMMessageListEnterChatSubscriberProtocol>

@property (nonatomic) BOOL enableStrangerChatOpt;
@property (nonatomic) BOOL enableHiHiSenderNotice;
@property (copy, nonatomic) NSDictionary *brandSettings;
@property (copy, nonatomic) NSString *brandName;
@property (copy, nonatomic) NSString *brandIconName;
@property (retain, nonatomic) RxDeferred *hasFetchedEnterChat;
@property (retain, nonatomic) AWEIMMessage *fakeNoticeMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (id)messageListEnterChatRequestParamsForRequestSource:(long long)a0;
- (void)updateMessageListEnterChatData:(id)a0 requestSource:(long long)a1;
- (id)vcParent;
- (void)handleReceiveTipsNoticeNty:(id)a0;
- (void)insertFromHiHiMatchNoticeIfNeeded;
- (BOOL)isHiHiMatchChat;
- (void)insertToHiHiNotice:(BOOL)a0;
- (void).cxx_destruct;
- (id)lastMessage;
- (id)conversation;

@end
