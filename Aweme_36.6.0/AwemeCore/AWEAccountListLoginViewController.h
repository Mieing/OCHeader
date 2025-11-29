@class DYAPassportAccountModel, NSString, DYRouterModel, UIView, AWEUILoadingView, UITableView;

@interface AWEAccountListLoginViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) DYRouterModel *routerModel;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) DYAPassportAccountModel *accountModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didClickButton:(id)a0;
- (void)addLoadingViewToVC;
- (void)removeLoadingViewFromVC;
- (void)trackLoginAlternativeNotify;
- (void)addExtraParams;
- (void)handleCommonVerificationNotification:(id)a0;
- (id)allSubAccounts;
- (id)verifyEventParams;
- (id)transforToModel:(Class)a0 rawData:(id)a1;
- (void)trackLoginFailure:(id)a0;
- (BOOL)isRegisterRow:(id)a0;
- (void)trackLoginAlternativeSubmit:(id)a0;
- (void)processLoginFailure:(id)a0 JSON:(id)a1;
- (void)processLoginSuccess:(id)a0;
- (BOOL)shouldShowRegisterRow;
- (id)userContext;
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
