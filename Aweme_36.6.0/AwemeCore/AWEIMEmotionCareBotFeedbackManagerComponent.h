@class AWEIMMessage, NSString;
@protocol AWEIMMessageListDataInterface, AWEIMEmotionCareBotFeedbackMessageProtocol;

@interface AWEIMEmotionCareBotFeedbackManagerComponent : AWEIMComponentBase <AWEIMMessageListDataAction, AWEIMMessageListUserInfoAction>

@property (weak, nonatomic) AWEIMMessage<AWEIMEmotionCareBotFeedbackMessageProtocol> *message;
@property (weak, nonatomic) id<AWEIMMessageListDataInterface> messageListData;
@property (nonatomic) BOOL effect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterUpdateData;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)didFetchMsgWithMessageGroupArray:(id)a0 hasMore:(BOOL)a1 direction:(unsigned long long)a2 shouldAutoLoadMore:(BOOL)a3 isFirstLoad:(BOOL)a4;
- (void)didFetchFullDetailUser:(id)a0 fullDetailUser:(id)a1;
- (id)findLastMessageFromArray:(id)a0;
- (void)p_refreshFeedbackViewWithMessageGroupArray:(id)a0;
- (void).cxx_destruct;

@end
