@class AWEIMMessageBaseViewController, AWEIMMessageConversation, NSString;
@protocol AWEIMGroupExchangeDataManagerProtocol, AWEIMMessageDataProtocol, AWEIMMessageTableViewInterface;

@interface AWEIMExchangeComponent : AWEIMComponentBase <AWEIMMessageListDataAction, AWEIMExchangeAnswerInterface, AWEIMMessageListPlayEntryRegistry, AWEIMConversationP2PMsgNotifyProtocol, AWEIMConversationInfoOtherSubscriberProtocol>

@property (weak, nonatomic) AWEIMMessageBaseViewController *messageBaseViewController;
@property (weak, nonatomic) id<AWEIMMessageDataProtocol> messageDataController;
@property (weak, nonatomic) id<AWEIMMessageTableViewInterface> tableViewService;
@property (weak, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) long long checkIndex;
@property (retain, nonatomic) id<AWEIMGroupExchangeDataManagerProtocol> groupExchangeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearCheckGlobalIndexForConversation:(id)a0;
+ (id)getWaitExchangeMessage;

- (void)messageDataControllerDidModified;
- (void)onExchangeImageMessageFinish;
- (void)onExchangeMessageUpdated;
- (void)hostVC_willDealloc;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)didReceiveNewMessage:(id)a0 reason:(long long)a1;
- (id)conversationInfoOtherRequestParams;
- (void)updateConversationInfoOtherData:(id)a0 source:(id)a1;
- (void)onTapPlayEntryItem:(id)a0;
- (BOOL)canShowInPlayEntryWithContext:(id)a0;
- (id)playEntryBizKey;
- (void)updateExchangeIndexIfNeed;
- (void)transferToExchangeAnswerWithExchangeAnswerMessage:(id)a0 showSharePanel:(BOOL)a1;
- (void)transferToExchangeAnswerWithExchangeAnswerMessage:(id)a0 entrance:(id)a1 enterFrom:(id)a2 showSharePanel:(BOOL)a3;
- (void)transferToExchangeAnswerWithServerMessageID:(long long)a0 entrance:(id)a1 enterFrom:(id)a2;
- (void)receiveP2PMessageNotify:(id)a0;
- (void)updateExchangeFeatureEntranceIfNeed;
- (void)p_loadMessageDetailWithServerMessageID:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
