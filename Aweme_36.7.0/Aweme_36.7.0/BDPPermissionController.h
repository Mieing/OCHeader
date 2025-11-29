@class NSString, BDPPermissionTableViewController, NSArray, UILabel, UITableView;

@interface BDPPermissionController : BDPBusinessXScreenViewController <UITableViewDelegate, UITableViewDataSource> {
    id /* block */ _onDeallocCallback;
    UILabel *_tipLabel;
    UITableView *_tableView;
    NSArray *_scopeGroups;
    unsigned long long _pendingNum;
}

@property (retain, nonatomic) BDPPermissionTableViewController *permissionTableViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (void)calculateCellHeight;
- (void)updateContainerView;
- (BOOL)XScreenWindowShouldShowCustomButton:(id)a0;
- (BOOL)XScreenWindowShouldShowLeftCustomButton:(id)a0;
- (id)initWithUniqueID:(id)a0 onDealloc:(id /* block */)a1;
- (void)navLoading:(BOOL)a0;
- (void)setUpSystemDataWithDefaultGroup:(id)a0 itemGroup:(id)a1;
- (void)setUpImAuthMessageWithImAuthGroup:(id)a0 itemGroup:(id)a1;
- (void)setUpHostDataWithHostGroup:(id)a0 itemGroup:(id)a1;
- (void)updateScopeGroupsWithAwemeGroup:(id)a0 dafaultGroup:(id)a1 imAuthGroup:(id)a2;
- (void)fitSizeForTipLabel;
- (BOOL)isAweType;
- (id)accessRecordPermissionGroup;
- (BOOL)shouldShowPhoneNumManage;
- (id)phoneNumManageGroup;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (id)initWithUniqueID:(id)a0;
- (void)updateNavigationTitle;

@end
