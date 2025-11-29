@class IESAccountSwitchViewModel, NSString, NSDictionary, IESAccountSwitchAccountNavigationView, UITableView;

@interface IESAccountSwitchFullScreenViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) IESAccountSwitchAccountNavigationView *navView;
@property (retain, nonatomic) UITableView *accountListTableView;
@property (retain, nonatomic) IESAccountSwitchViewModel *viewModel;
@property (nonatomic) BOOL isDeletingUser;
@property (retain, nonatomic) NSDictionary *extraDict;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backBtnClick;
- (void)accountManage;
- (void)showOrHideManageButton;
- (id)logoutDialogBodyWithAccountModel:(id)a0;
- (id)initWithExtraDict:(id)a0;
- (BOOL)isManageState;
- (void)configAction;
- (void)updateCellModels;
- (void)showDeleteAlertWithIndexPath:(id)a0;
- (id)logoutDialogHeading;
- (void)trackLogoutConfirmWindowClickWithModel:(id)a0 clickType:(id)a1;
- (void)trackLogoutConfirmWindowShowWithModel:(id)a0;
- (void)deleteUser:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)fetchAccounts;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)setupUI;

@end
