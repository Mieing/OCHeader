@class NSString, NSDictionary, AWESearchHomeNewStyleSearchBarController, UIViewController;

@interface AWESearchResultHybridSearchBarModule : AWESearchResultHybridBaseContainerModules <AWESearchHomeNewStyleSearchBarControllerDelegate, AWESearchResultHybridContainerProtocol>

@property (retain, nonatomic) AWESearchHomeNewStyleSearchBarController *searchBarController;
@property (weak, nonatomic) UIViewController *viewController;
@property (copy, nonatomic) NSDictionary *logPb;
@property (copy, nonatomic) NSString *searchID;
@property (nonatomic) BOOL fixBottomBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isInnerFeed;
- (void)setupUI:(id)a0;
- (void)searchHybird_aiStreamReceiveFirstDataWithConversationID:(id)a0 isReAnswer:(BOOL)a1 searchID:(id)a2 extra:(id)a3;
- (void)searchHybrid_aiReceiveInputBoxCopilotInfo:(id)a0;
- (void)searchHybird_willStartSSESearchWithQuery:(id)a0 card:(id)a1;
- (void)searchHybird_currentConversationWillEndWithConversationID:(id)a0;
- (void)customFeedWillBeginDragging:(id)a0;
- (void)searchBarControllerStop;
- (void)searchBarControllerDelete;
- (void)searchAutoOpenDeepThink:(BOOL)a0 searchID:(id)a1;
- (void)notiInputControllerCostAniEvent:(BOOL)a0;
- (BOOL)fetchDeepThinkIsOpen;
- (void)aiStartRequestQuery:(id)a0;
- (void)aiReceiveDataFinishWithSearchID:(id)a0;
- (void)voiceInputEntranceLongPressBegan;
- (void)searchBarSendQuery:(id)a0;
- (void)searchBarControllerVoice;
- (void)searchBarControllerInspiration;
- (void)willExpandInputViewController;
- (void)sendInspirationPreRequest:(id)a0;
- (id)resultPageServiceManager;
- (void)aiSearchWillStart:(id)a0;
- (id)searchResult_getEnterFrom;
- (id)searchResult_getSearchBarController;
- (void)dispatchRouterModel:(id)a0;
- (void)historyBarPageDidChange:(BOOL)a0;
- (void)fadeOutSearchBar;
- (BOOL)enableDeepThinkStatusSyncFromVideoDetail;
- (void)setupTrackerChain;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
