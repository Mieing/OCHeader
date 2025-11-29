@class AWEIMMessage, AWEIMLatestKindOfMessageInConversationComponent, NSString;
@protocol AWEIMMessageListDataInterface;

@interface AWEIMMessageBottomQuickReplyManager : AWEIMComponentBase <AWEIMMessageListDataAction>

@property (retain, nonatomic) AWEIMLatestKindOfMessageInConversationComponent *findTargetMessageComponent;
@property (retain, nonatomic) AWEIMMessage *targetMessage;
@property (weak, nonatomic) id<AWEIMMessageListDataInterface> messageListData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterUpdateData;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)didFetchMsgWithMessageGroupArray:(id)a0 hasMore:(BOOL)a1 direction:(unsigned long long)a2 shouldAutoLoadMore:(BOOL)a3 isFirstLoad:(BOOL)a4;
- (void)p_refreshWithMessageGroupArray:(id)a0;
- (id)findLastMessageFromArray:(id)a0;
- (BOOL)p_isTargetMessage:(id)a0;
- (void).cxx_destruct;

@end
