@class NSString, NSMutableArray, NSMutableDictionary;
@protocol AWEIMMessageListComponentCenter, IESIMMessageListUITaskService, AWEIMMessageTableViewInterface;

@interface AWEIMMsgUnavaliableUIComponent : AWEIMComponentBase <IESIMMessageListLifeCycleAction, AWEIMMessageTableViewAction, IESIMCombineMessageListTableViewAction, AWEIMMessageListComponent>

@property (nonatomic) double lastUpdateTimestamp;
@property (retain, nonatomic) NSMutableArray *unavaliableItems;
@property (retain, nonatomic) NSMutableDictionary *handlerMessagesDic;
@property (weak, nonatomic) id<AWEIMMessageTableViewInterface> tableViewService;
@property (weak, nonatomic) id<IESIMMessageListUITaskService> messageListUITaskService;
@property (weak, nonatomic) id<AWEIMMessageListComponentCenter> componentCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)tableViewAllDidEndScroll:(id)a0;
- (void)msgList_firstMsgRendering;
- (void)combineMsgList_tableViewFirstLoadCompletion;
- (void)combineMsgList_scrollViewDidEndScroll;
- (void)msg_tableViewFirstLoadCompletion;
- (void)msg_scrollViewDidEndScroll;
- (void)didAddToComponentCenter;
- (void)registUnavaliableItemsWithConversationContext:(id)a0;
- (void)registUnavaliableItems;
- (void)updateUnvaliableStateForMessagesOnScreenRequestScene:(id)a0;
- (id)currentVisibleMessages;
- (id)rebuildDataSource:(id)a0;
- (void)updateFeedUnavailableStateForMessagesOnScreenRequestScene:(id)a0;
- (void)updateCustomizeUnvaliableStateForMessagesOnScreen;
- (id)getFeedItemIdsOnScreen;
- (id)getNeedReloadMessagesByUnavaliableItemIds:(id)a0;
- (void)setUnavailableFlagUpdateTimestampForMessages:(id)a0;
- (void)reloadCellsWithMessages:(id)a0 beforeReloadBlock:(id /* block */)a1;
- (id)messageCellForMessage:(id)a0;
- (id)msgTableView;
- (id)msgVisibleCells;
- (id)getMessageTypeAllItemIds:(id)a0 messages:(id)a1;
- (id)msgVisibleCellModels;
- (void).cxx_destruct;

@end
