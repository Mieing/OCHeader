@class NSTimer, NSString;
@protocol IESIMMessageListUITaskService;

@interface IESIMUnavailableCombineConversationComponent : AWEIMComponentBase <AWEIMMessageListDataAction, AWEIMMessageTableViewAction, IESIMUnavailableStateNotifyProtocol>

@property (nonatomic) BOOL isFirstPageLoaded;
@property (retain, nonatomic) NSTimer *safetyCheckTimer;
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
- (void)p_tableViewAllDidEndScroll;
- (id)messageCellForMessage:(id)a0;
- (void)p_safetyPollingCheck;
- (void)p_refreshScreenVisibleMessagesWithSource:(id)a0;
- (id)p_messageListVC;
- (id)findVisibleFeedMessageFromViewModels:(id)a0;
- (void)reloadUIWithMessages:(id)a0;
- (void)p_onlyUpdateScreenMessagesUIWithStateChangedMap:(id)a0;
- (void)unavailableStateDidUpdate:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
