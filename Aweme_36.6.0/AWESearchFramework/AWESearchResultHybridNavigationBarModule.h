@class AWESearchHomePageHistoryViewController, AWESearchHomePageNaviBar, UIViewController, NSString, AWESearchHomePageSideBarManager;

@interface AWESearchResultHybridNavigationBarModule : AWESearchResultHybridBaseContainerModules <AWESearchHybridInspirationPanelDataSource>

@property (retain, nonatomic) AWESearchHomePageNaviBar *naviBar;
@property (retain, nonatomic) AWESearchHomePageHistoryViewController *historyListVC;
@property (retain, nonatomic) AWESearchHomePageSideBarManager *sideBarManager;
@property (nonatomic) double enterTimeStamp;
@property (weak, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupUI:(id)a0;
- (void)searchHybrid_conversationServiceWillScrollToConversation:(id)a0 searchID:(id)a1 timeStamp:(double)a2;
- (void)searchHybrid_conversationServiceWillRefreshWithConversation:(id)a0 searchID:(id)a1 timeStamp:(double)a2;
- (id)inspiration_naviBar;
- (void)p_requestLoginActionWithCompletion:(id /* block */)a0;
- (void)p_sideBarShowWithLoginCheckLoginBlock:(id /* block */)a0 unLoginBlock:(id /* block */)a1;
- (void)nav_slideHideLeftSideBar:(id)a0;
- (id)resultPageServiceManager;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
