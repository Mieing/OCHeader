@class NSString, NSArray, AWEAwemeOfflineSettingsHeaderView, AWEAwemeOfflineSettingsFooterView, AWEBinding, UIButton, UITableView, AWEAwemeOfflineTableViewController, AWEAwemeOfflineSettingsStateView, UIViewController, UILabel, NSIndexPath;
@protocol AFDHalfScreenHostViewControllerProtocol;

@interface AWEAwemeOfflineSettingsViewController : UIViewController <AWEAwemeOfflineTableViewCellDelegate, AWEAwemeOfflineSettingsFooterViewDelegate, AWEAwemeOfflineHeaderViewDelegate, UITableViewDelegate, UITableViewDataSource, AFDHalfScreenPresentationProtocol>

@property (retain, nonatomic) AWEAwemeOfflineSettingsHeaderView *headerView;
@property (retain, nonatomic) AWEAwemeOfflineSettingsFooterView *footerView;
@property (retain, nonatomic) AWEAwemeOfflineSettingsStateView *stateView;
@property (retain, nonatomic) AWEBinding *stateBinding;
@property (retain, nonatomic) AWEBinding *countBinding;
@property (retain, nonatomic) AWEBinding *cachedSizeBinding;
@property (retain, nonatomic) UILabel *leftSpaceTipsLabel;
@property (retain, nonatomic) UILabel *offlineTitle;
@property (retain, nonatomic) UIButton *quitButton;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSIndexPath *currentDownloadIndexPath;
@property (nonatomic) BOOL isAutoUpdates;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) NSArray *models;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) long long selectedIndexOfRadio;
@property (nonatomic) long long videoCount;
@property (weak, nonatomic) AWEAwemeOfflineTableViewController *tableViewController;
@property (nonatomic) long long currentType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController<AFDHalfScreenHostViewControllerProtocol> *halfScreenHostViewController;

- (void)p_addKVO;
- (void)onClearCacheButtonAction;
- (void)onClickPauseAndContinueButtonAction;
- (void)onClickDownloadAndUpdateButtonAction;
- (void)onChangeSwitchAction:(BOOL)a0;
- (void)onClickWifiDesButtonAction;
- (void)onDownloadButtonClickWithTag:(long long)a0;
- (void)modelsInit;
- (double)p_contentHeight;
- (void)adaptDownloadState;
- (void)updateLeftSpace;
- (void)updateSettingVCWithType:(long long)a0;
- (void)onClickQuitButtonAction;
- (double)cellHeightInSection:(long long)a0;
- (void)downloadWithTag:(long long)a0;
- (void)recordClickSettingButtonWith:(long long)a0;
- (void)onDownloadButtonActionWithCancelBlock:(id /* block */)a0 ConfirmBlock:(id /* block */)a1 Count:(id)a2;
- (BOOL)wantsDimmingView;
- (id)currentOfflineSettingsModel;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)setupUI;

@end
