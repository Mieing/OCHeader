@class AWEUserModel, UITableView, NSString, NSNumber, NSMutableArray;

@interface AWEConcernBellPushVideoStrategyManagerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) int mockIndex;
@property (retain, nonatomic) NSMutableArray *strategyAllUsersArray;
@property (retain, nonatomic) NSMutableArray *strategyNoneUsersArray;
@property (retain, nonatomic) NSMutableArray *sectionHeaderStrs;
@property (retain, nonatomic) NSMutableArray *dataSourceArray;
@property (nonatomic) BOOL needCheckPermissionWhenApplicationDidBecomeActive;
@property (retain, nonatomic) AWEUserModel *needCheckPermissionSystemPushModelWhenApplicationDidBecomeActive;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backBtnClick:(id)a0;
- (id)initWithCachedStrategyAllListResponse:(id)a0 cachedStrategyNoListResponse:(id)a1;
- (void)handleApplicationDidBecomeActiveNotification;
- (id)titleForSystemPermissionWithSystemEnable:(BOOL)a0 douyinEnable:(BOOL)a1 releationEnable:(BOOL)a2;
- (void)openPermissionIfNeededWithIgnoreSystemPush:(BOOL)a0 model:(id)a1;
- (void)handleForOpenPermissionEnd:(BOOL)a0 model:(id)a1;
- (void)buildDataSourceArray;
- (void)showLoadingOnTableView;
- (void)hideLoadingOnTableView;
- (id)allUsersArray;
- (unsigned long long)strategyForModel:(id)a0;
- (void)strategyDataSourceArrayRemoveWithModel:(id)a0;
- (void)loadMoreData;
- (id)showAlertWithTitle:(id)a0 description:(id)a1 headerImage:(id)a2 actionButtonTitle:(id)a3 cancelButtonTitle:(id)a4 actionBlock:(id /* block */)a5 cancelBlock:(id /* block */)a6;
- (void)reloadData;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)setupUI;

@end
