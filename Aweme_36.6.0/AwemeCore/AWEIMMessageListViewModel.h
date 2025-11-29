@class AWEIMMessageConversation, NSArray, NSString, NSTimer, AWEIMMessageViewModel, NSIndexPath;
@protocol AWEIMMessageListComponentCenter, IESIMMessageReadDataManagerProtocol, IESIMMessageListViewControllerProtocol;

@interface AWEIMMessageListViewModel : NSObject <AWEIMMessageListComponent>

@property (retain, nonatomic) NSIndexPath *currentGetReadDataIndexPath;
@property (retain, nonatomic) AWEIMMessageViewModel *currentGetReadDataViewModel;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) NSArray *groups;
@property (nonatomic) BOOL firedFirstReloadDataTransaction;
@property (nonatomic) long long lastLatestMsgGlobalIndex;
@property (copy, nonatomic) NSString *readTaskToken;
@property (retain, nonatomic) NSTimer *refreshReadDataTimer;
@property (nonatomic) BOOL hasTrackedReadStatus;
@property (nonatomic) long long lastReadStatusInCurrentVC;
@property (retain, nonatomic) id<IESIMMessageReadDataManagerProtocol> readDataManager;
@property (nonatomic) long long type;
@property (nonatomic) BOOL useInStrangerChat;
@property (weak, nonatomic) id<IESIMMessageListViewControllerProtocol> listViewController;
@property (weak, nonatomic) id<AWEIMMessageListComponentCenter> componentCenter;
@property (nonatomic) BOOL isInCurrentVC;
@property (retain, nonatomic) NSIndexPath *lastDisplayEmojiReplyViewIndexPath;
@property (nonatomic) BOOL isKeepingDisplayingMessageEmojiGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewModelWithConversation:(id)a0 listViewController:(id)a1;

- (id)latestMessage;
- (int)allMessageListCellCount;
- (void)scrollToTargetMessageWithNotEnqueue:(id)a0 completion:(id /* block */)a1;
- (id)indexPathOfMsgWithMsgID:(id)a0;
- (void)updateMessageGroupList:(id)a0 hasMore:(BOOL)a1 direction:(unsigned long long)a2;
- (void)updateMessageGroupList:(id)a0 hasMore:(BOOL)a1;
- (void)reloadMessagesWithChangeInfo:(id)a0 currentGroupList:(id)a1 context:(id)a2;
- (void)deleteMessagesWithChangeInfo:(id)a0 messageArray:(id)a1 currentGroupList:(id)a2 dataManager:(id)a3 context:(id)a4 deleteMessageCompletion:(id /* block */)a5 completeBlock:(id /* block */)a6;
- (void)updateMessageGroupListWithoutScroll:(id)a0;
- (void)updateMessageGroupWithTargeMessage:(id)a0 groups:(id)a1;
- (void)updateMessageGroupList:(id)a0 hasMore:(BOOL)a1 direction:(unsigned long long)a2 withCompletion:(id /* block */)a3;
- (void)foldGroupWithTopGroup:(id)a0 task:(id /* block */)a1;
- (id)latestCellModel;
- (void)messageMarkRead;
- (id)messageViewModelAtIndexPath:(id)a0;
- (id)groupAtSection:(unsigned long long)a0;
- (void)p_safeRefreshTableView;
- (void)p_cancelRefreshReadDataTimer;
- (int)cellCountForGroups:(id)a0;
- (void)p_updateDataWithMessageGroups:(id)a0;
- (void)updateLastDisplayEmojiReplyViewIndexPathWithType:(long long)a0;
- (void)enqueueReloadTask:(id)a0;
- (void)trackMessagePerformanceWithContext:(id)a0;
- (void)enqueueTrackMessagePerformanceWithContext:(id)a0 task:(id)a1;
- (void)p_receiveMsgPerformanceTrackerWithContext:(id)a0;
- (BOOL)p_checkIsMsgLinkEvent:(id)a0;
- (id)p_refreshMsgVMReadDataWithNeedScrollToBottom:(BOOL)a0;
- (id)p_findShowAlreadyLabelIndexPath;
- (void)p_clearAndCancelGetCurrentReadData;
- (void)p_setMsgVMAndGetLocalReadDataAndRefreshUI:(id)a0 needScrollToBottom:(BOOL)a1;
- (void)p_setMsgVMAndGetLocalReadDataAndRefreshUI:(id)a0;
- (void)p_reloadReadReceiptFromServer;
- (void)p_updateUIWithFinishedParticipantIDs:(id)a0 expectedParticipantIDs:(id)a1 needScrollToBottom:(BOOL)a2;
- (void)p_startRepeatFetchReadStatusTimer;
- (void)p_safeRefreshTableViewWithNeedScrollToBottom:(BOOL)a0;
- (id)indexPathOfLatestShowEmojiGuideMsg;
- (id)msgViewModelsWithItemID:(id)a0;
- (id)p_refreshMsgVMReadData;
- (void)p_reloadCurrentReadDataNow;
- (void).cxx_destruct;
- (void)dealloc;

@end
