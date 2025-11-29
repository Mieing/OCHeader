@class NSMutableDictionary, NSTimer, NSString, NSMutableArray;
@protocol AWEIMMessageListComponentCenter, AWEIMMessageTableViewInterface;

@interface AWEIMMsgRefreshUIComponent : AWEIMComponentBase <IESIMMessageListLifeCycleAction, AWEIMMessageListDataAction, AWEIMMessageTableViewAction, IESIMScrollViewContentOffsetAction, AWEIMMessageListComponent>

@property (nonatomic) BOOL firstRefreshFinish;
@property (nonatomic) double lastUpdateTimestamp;
@property (retain, nonatomic) NSMutableArray *refreshHandlers;
@property (retain, nonatomic) NSMutableDictionary *handlerMessagesDic;
@property (retain, nonatomic) NSTimer *timer;
@property (weak, nonatomic) id<AWEIMMessageTableViewInterface> tableViewService;
@property (weak, nonatomic) id<AWEIMMessageListComponentCenter> componentCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)onExchangeMessageUpdated;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)visibleCellModels;
- (void)tableViewAllDidEndScroll:(id)a0;
- (void)msgList_viewDidAppear;
- (void)msgList_firstMsgRendering;
- (void)msg_tableViewFirstLoadCompletion;
- (void)msg_scrollViewDidEndScroll;
- (void)msg_viewDidAppear;
- (void)msg_onExchangeMessageUpdated;
- (void)msg_onTableViewNotFullyFilledReceiveNewMessage;
- (void)didAddToComponentCenter;
- (void)contentSizeNotFillScreenBottomInsert;
- (void)registerRefreshHandlersWithConversationContext:(id)a0;
- (void)onTimerExcuted;
- (void)registerRefreshHandlers;
- (void)refreshMessagesOnScreenWithStrategy:(unsigned long long)a0;
- (void)refreshFeedStateFor:(id)a0 strategy:(unsigned long long)a1;
- (void)refreshCustomizeMessageInfo:(id)a0 strategy:(unsigned long long)a1;
- (void)refreshMessageInfo:(id)a0 strategy:(unsigned long long)a1 refreshHandlers:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)appDidBecomeActive;

@end
