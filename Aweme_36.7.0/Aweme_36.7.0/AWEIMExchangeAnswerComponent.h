@class AWEIMMessageBaseViewController, AWEIMMessageConversation, NSString;
@protocol AWEIMMessageDataProtocol;

@interface AWEIMExchangeAnswerComponent : AWEIMComponentBase <AWEIMMessageListDataAction>

@property (weak, nonatomic) AWEIMMessageBaseViewController *messageBaseViewController;
@property (weak, nonatomic) id<AWEIMMessageDataProtocol> messageDataController;
@property (weak, nonatomic) AWEIMMessageConversation *conversation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)messageDataControllerDidModified;
- (void)onExchangeAnswerUpdated;
- (void)componentDidMounted:(id)a0;
- (void)updateExchangeIndexIfNeed;
- (void)updateExchangeAnswerEntranceIfNeed;
- (void).cxx_destruct;

@end
