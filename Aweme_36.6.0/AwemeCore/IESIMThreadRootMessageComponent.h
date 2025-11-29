@class AWEIMMessageViewModel, AWEIMMessageConversation, NSString;
@protocol AWEIMMessageListDataInterface;

@interface IESIMThreadRootMessageComponent : AWEIMComponentBase <IESIMThreadRootMessageInterface, AWEIMMessageListDataAction, AWEIMMessageUpateMessage, IESIMThreadReportMessage>

@property (weak, nonatomic) id<AWEIMMessageListDataInterface> msgListService;
@property (retain, nonatomic) AWEIMMessageConversation *parentConversation;
@property (retain, nonatomic) AWEIMMessageViewModel *rootMessageViewModel;
@property (retain, nonatomic) AWEIMMessageConversation *originalParentConversation;
@property (retain, nonatomic) AWEIMMessageViewModel *originalRootMessageViewModel;
@property (nonatomic) BOOL didInsertPlaceholderGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)didFetchMsgWithMessageGroupArray:(id)a0 hasMore:(BOOL)a1 direction:(unsigned long long)a2 shouldAutoLoadMore:(BOOL)a3 isFirstLoad:(BOOL)a4;
- (void)injectParentConversation:(id)a0 originalParentConversation:(id)a1 originalRootMessageViewModel:(id)a2;
- (long long)validThreadMessageCount;
- (void)transferToThreadReportWithThreadId:(id)a0 selectMsgList:(id)a1 rootMsgInfo:(id)a2 completion:(id /* block */)a3;
- (void)didChangedMessageProperty:(id)a0 inConversation:(id)a1;
- (void)didReloadMessage:(id)a0 inConversation:(id)a1;
- (void)p_deleteWithNotification:(id)a0;
- (void)p_insertPlaceholderGroup;
- (void)p_deleteWithMessageID:(id)a0;
- (void)p_popWithRootMsgId:(id)a0;
- (void)injectParentConversation:(id)a0 rootMessageViewModel:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
