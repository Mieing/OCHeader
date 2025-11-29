@class IESLiveWebpLoadingView, AWEVisibleScopeManager, NSTimer, NSString, UIView, NSObject, UITableView;
@protocol AFDSearchUserManagerProtocol;

@interface AWELiveVisibleScopeSearchViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, IESLiveRefreshDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSObject<AFDSearchUserManagerProtocol> *manager;
@property (retain, nonatomic) NSTimer *searchThresholdTimer;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (retain, nonatomic) UIView *refreshFooter;
@property (retain, nonatomic) AWEVisibleScopeManager *visibleManager;
@property (copy, nonatomic) id /* block */ selectUserHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (void)onSearchTimer;
- (void)p_loadMoreData;
- (void)searchUserWithKeyWord:(id)a0;
- (void)endReloadLoading;
- (void)startReloadLoading;
- (void)checkAndRemoveCurrentUser;
- (void)updateFooterRefresh;
- (void)scrollView:(id)a0 willBeginRefreshWithRefreshType:(unsigned long long)a1;
- (id)scrollView:(id)a0 viewForRefreshWithRefreshType:(unsigned long long)a1 refreshState:(unsigned long long)a2;
- (double)scrollView:(id)a0 heightForRefreshViewWithRefreshType:(unsigned long long)a1 refreshState:(unsigned long long)a2;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;

@end
