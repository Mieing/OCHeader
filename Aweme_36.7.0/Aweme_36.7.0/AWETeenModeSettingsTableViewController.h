@class AWETeenModeSettingsViewModel, NSString, UILabel, UIView, UITableView;

@interface AWETeenModeSettingsTableViewController : UIViewController <AWEUserMessage, AWERouterViewControllerProtocol, AWETeenModeSettingViewModelDelegate, UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWETeenModeSettingsViewModel *viewModel;
@property (retain, nonatomic) UILabel *versionLabel;
@property (retain, nonatomic) UIView *userInfoView;
@property (nonatomic) long long colorStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWETeenModeSettingsViewModelCommonAdapterClass;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)backBtnClick:(id)a0;
- (void)addNoti;
- (id)aAWETeenModeSettingsViewModelCommonAdapter;
- (void)setupCacheCleanCell;
- (void)showUserInfo;
- (void)_calculateCacheSizeWithCompletion:(id /* block */)a0;
- (void)updateSettingsCell;
- (id)getCurrentVersionStr;
- (void)uidLabelTapped:(id)a0;
- (void)didLabelTapped:(id)a0;
- (void)_popSettingsViewController;
- (void)awe_setLoadingView:(id)a0;
- (id)awe_loadingView;
- (void)showLoadingViewWithTitle:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)setupUI;
- (id)versionString:(id)a0;
- (void)hideLoadingView;

@end
