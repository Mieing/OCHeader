@class AWEIMMessageConversation, NSString, NSMutableDictionary, UIImage, NSMutableArray;
@protocol AWEIMMessageTableViewInterface, AWEIMMessageVisibleCellInterface, AWEIMMessageListDataInterface, IESIMThreadInterface, IESIMThreadUnreadTipsAction, AWEIMTopAnchorInterface;

@interface IESIMThreadUnreadTipsComponent : AWEIMComponentBase <IESIMThreadUnreadTipsInterface, AWEIMMessageListDataAction>

@property (weak, nonatomic) id<AWEIMMessageListDataInterface> messageListData;
@property (weak, nonatomic) id<AWEIMTopAnchorInterface> topAnchorService;
@property (weak, nonatomic) id<AWEIMMessageTableViewInterface> tableViewService;
@property (weak, nonatomic) id<AWEIMMessageVisibleCellInterface> visibleCellService;
@property (weak, nonatomic) id<IESIMThreadInterface> threadService;
@property (weak, nonatomic) id<IESIMThreadUnreadTipsAction> threadUnreadTipsAction;
@property (retain, nonatomic) NSMutableArray *unreadMessageList;
@property (retain, nonatomic) NSMutableArray *unreadThreadList;
@property (retain, nonatomic) NSMutableDictionary *messageDic;
@property (nonatomic) long long threadUnreadCount;
@property (copy, nonatomic) NSString *currentTapMessageID;
@property (retain, nonatomic) UIImage *redDotImage;
@property (retain, nonatomic) UIImage *arrowImage;
@property (weak, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) BOOL isProcessingClickEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)didUpdateWithThreads:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)tableViewAllDidEndScroll:(id)a0;
- (void)p_updateUI;
- (id)tipsTitle;
- (void)setupThreadMsgData;
- (BOOL)realCanShowThreadMsgTips;
- (void)showThreadMsgTips;
- (id)tapOnThreadMessageTips;
- (void)p_trackUnreadTipsShow;
- (void)p_trackUnreadTipsClick;
- (void)p_trackUnreadTipsWithEvent:(id)a0;
- (BOOL)p_enableAutoShowOpt;
- (BOOL)p_shouldShowThreadMsgTips;
- (void)p_trackDataFetchException;
- (BOOL)p_enableJumpOrderOpt;
- (void)p_updateMessageDicWithMessages:(id)a0;
- (void)p_updateUnreadThreadsListWithThreads:(id)a0;
- (void)p_updateUnreadMessageListWithMessages:(id)a0;
- (void)p_readAndHighLightCell;
- (id)p_getMsgVMAndIndex:(id)a0 section:(long long *)a1 row:(long long *)a2;
- (void)p_afterAutoScroll:(id)a0;
- (void)p_scrollToMessageLocationIfNeedWithSection:(long long)a0 row:(long long)a1 completion:(id /* block */)a2;
- (void)p_removeMessageFromUnreadList:(id)a0;
- (id)p_getLocalMessageWithID:(id)a0;
- (void)p_fetchTargetMessageWithThread:(id)a0;
- (BOOL)p_isUnreadThreadMessage:(id)a0;
- (id)p_visibleUnreadThreadMessageCells;
- (id)p_getMessagesWithCellList:(id)a0;
- (void)p_updateIconImageView;
- (id)p_getNextStepUnreadMessage;
- (void).cxx_destruct;

@end
