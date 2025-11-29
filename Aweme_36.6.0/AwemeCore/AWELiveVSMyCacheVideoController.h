@class AWEVSCacheVideoEmptyView, AWELiveVSMyCacheVideoStore, NSString, UIView, UITableView;
@protocol IESVSVideoCacheService;

@interface AWELiveVSMyCacheVideoController : UIViewController <AWERouterViewControllerProtocol, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) id<IESVSVideoCacheService> cacheService;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) AWEVSCacheVideoEmptyView *emptyView;
@property (retain, nonatomic) AWELiveVSMyCacheVideoStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)p_showLoading;
- (void)backBtnClick:(id)a0;
- (void)p_fetchData;
- (void)p_setupNavBar;
- (void)p_removeLoading;
- (void)p_showNetworkAlert;
- (void)p_openRoomSchema:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 editActionsForRowAtIndexPath:(id)a1;
- (void)p_addObservers;

@end
