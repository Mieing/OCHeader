@class DYAPassportAccountModel, UIViewController, DYRouterModel, NSString, UIView, AWEUILoadingView, UITableView;

@interface DYFindPasswordAccountListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) DYRouterModel *routerModel;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) DYAPassportAccountModel *accountModel;
@property (retain, nonatomic) UIViewController *targetViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didClickButton:(id)a0;
- (void)addLoadingViewToVC;
- (void)removeLoadingViewFromVC;
- (id)allSubAccounts;
- (void)trackAccountListViewShow;
- (void)trackListButtonClick:(id)a0;
- (void).cxx_destruct;
- (void)closeAction;
- (id)initWithContext:(id)a0;
- (long long)preferredStatusBarStyle;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setupNavigationBar;

@end
