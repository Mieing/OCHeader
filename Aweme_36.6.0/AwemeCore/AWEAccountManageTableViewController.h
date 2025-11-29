@class AWEAccountManageViewModel, NSString;

@interface AWEAccountManageTableViewController : AWESettingBaseViewController <AWEUserMessage, AWERouterViewControllerProtocol>

@property (readonly, nonatomic) AWEAccountManageViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishUpdateCurrentFullUserForReason:(unsigned long long)a0;
- (void)didFinishBindPhone;
- (void)didFinishSetPassword;
- (BOOL)configWithRouterParamDict:(id)a0;
- (id)vcTitle;
- (BOOL)isHitAccountManageWithGroup;
- (void)refreshTableView;
- (id)initWithPreRedDot:(BOOL)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)setupView;

@end
