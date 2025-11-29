@class NSTimer, NSString;
@protocol IESIMMessageListUITaskService, AWEIMMessageTableViewInterface;

@interface IESIMUnavailableConversationComponent : AWEIMComponentBase <AWEIMMessageListDataAction, AWEIMMessageTableViewAction, IESIMUnavailableStateNotifyProtocol>

@property (nonatomic) BOOL isFirstPageLoaded;
@property (retain, nonatomic) NSTimer *safetyCheckTimer;
@property (weak, nonatomic) id<AWEIMMessageTableViewInterface> tableViewService;
@property (weak, nonatomic) id<IESIMMessageListUITaskService> messageListUITaskService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)reloadDataTransactionCompleted;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)tableViewAllDidEndScroll:(id)a0;
- (id)p_visibleCells;
- (void)p_tableViewAllDidEndScroll;
- (id)messageCellForMessage:(id)a0;
- (void)p_safetyPollingCheck;
- (void)p_refreshScreenVisibleMessagesWithSource:(id)a0;
- (id)p_messageListVC;
- (id)findVisibleFeedMessageFromViewModels:(id)a0;
- (void)reloadUIWithMessages:(id)a0;
- (void)p_onlyUpdateScreenMessagesUIWithStateChangedMap:(id)a0;
- (void)unavailableStateDidUpdate:(id)a0;
- (id)p_visibleCellModels;
- (id)p_cellModels;
- (id)p_tableView;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)dealloc;

@end
