@class NSString;
@protocol IESIMMessageReadDataManagerProtocol, AWEIMMessageTableViewInterface, AWEIMMessageListDataInterface, AWEIMMessageListComponentCenter, IESLCConnectManagerProtocol, IESIMMessageListUITaskService;

@interface AWEIMMsgStateUIComponent : AWEIMComponentBase <IESIMScrollViewContentOffsetAction, AWEIMMessageListDataAction, IESIMThreadUnreadTipsAction, IESLCConnectService, IESIMChatDataManagerDelegate, AWEIMMessageListComponent>

@property (retain, nonatomic) id<IESIMMessageReadDataManagerProtocol> readDataManager;
@property (copy, nonatomic) NSString *pullingTimerName;
@property (nonatomic) BOOL isFirstLoading;
@property (nonatomic) BOOL isThreadTipsTapped;
@property (nonatomic) BOOL markAsReadWhenAppActive;
@property BOOL isLCConnected;
@property BOOL isDeleteMsg;
@property (weak, nonatomic) id<AWEIMMessageListDataInterface> messageListData;
@property (weak, nonatomic) id<AWEIMMessageTableViewInterface> tableViewService;
@property (weak, nonatomic) id<IESIMMessageListUITaskService> messageListUITaskService;
@property (weak, nonatomic) id<AWEIMMessageListComponentCenter> componentCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLCConnectManagerProtocol> connectManager;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)iesim_chatDataManager:(id)a0 chatListDidUpdateWithDeletedChats:(id)a1 insertedChats:(id)a2 firstPage:(BOOL)a3 reason:(long long)a4;
- (void)iesim_chatDataManager:(id)a0 totalUnreadCountUpdate:(long long)a1;
- (void)iesim_onConversationDataSourceMessagesDeleted:(id)a0 belongingConversationMap:(id)a1;
- (id)cellModels;
- (void)ieslc_onConnectionStateChanged:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2;
- (void)afterUpdateData;
- (void)afterReloadData;
- (void)vm_reloadDataTransactionCompleted:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)myLatestCellModel;
- (long long)chatType;
- (void)registerNotification;
- (id)listViewModel;
- (void)iesim_messageUpdated:(id)a0 inConversation:(id)a1 reason:(long long)a2;
- (id)convContext;
- (void)onReceiveReadReceiptUpdatedNotification:(id)a0;
- (void)msg_reloadDataTransactionCompleted:(id)a0;
- (void)msg_afterReloadData;
- (void)msg_afterUpdateData;
- (void)msg_emojiReplayLayoutChange;
- (void)msg_tapThreadTipsAnchor;
- (void)msg_handOverScrollOperate:(id /* block */)a0 resultAsynBlock:(id /* block */)a1;
- (void)didAddToComponentCenter;
- (void)handOverScrollOperate:(id /* block */)a0 resultAsynBlock:(id /* block */)a1;
- (void)tapThreadTipsAnchor;
- (void)updateAllCellModels;
- (void)cancelPullingTimer;
- (void)onReceiveApplicationBecomeActiveNotification:(id)a0;
- (id)anchorCellModel;
- (void)startPullReadReceiptForCellModelIfNeed:(id)a0;
- (void)updateAllCellModelsWithAnimationNew:(id /* block */)a0 needUpdateBlock:(id /* block */)a1;
- (id)modifyCellModels;
- (id)correspondingUserMsgCellForCellModel:(id)a0;
- (BOOL)updateStateViewModelIfNeed:(id)a0 isAnchor:(BOOL)a1;
- (id)refactorCellStateComponent:(id)a0;
- (id)refactorCellTailStateComponent:(id)a0;
- (id)correspondingUserMsgCellForCellModel:(id)a0 visibleCells:(id)a1;
- (id)stateViewModelToShowForCellModel:(id)a0 readStateEnable:(BOOL)a1;
- (BOOL)hideCellModelIfNeeded:(id)a0;
- (void)updateAllCellModelsWithAnimation;
- (void)updateStateViewForCellModel:(id)a0;
- (BOOL)delayUpdateStateViewIfNeededForCellModel:(id)a0 withModel:(id)a1;
- (void)updateStateViewForCellModel:(id)a0 needReloadCell:(BOOL)a1;
- (id)p_currentTimeStr;
- (id)visibleCells;
- (void).cxx_destruct;
- (id)tableView;
- (id)init;
- (id)conversationID;
- (void)unregisterNotification;
- (id)conversation;
- (void)dealloc;

@end
