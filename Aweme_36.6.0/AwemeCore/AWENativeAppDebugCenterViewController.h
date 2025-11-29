@class UIView, NSString, NSArray, DUXNavigationBar, DUXNavigationBarImageAction, NSDictionary, UITableView, DUXSwitch, DUXButton, UILabel;
@protocol AWENativeAppDebugCenterDelegate;

@interface AWENativeAppDebugCenterViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEAboutEaterEggTableViewProtocol>

@property (retain, nonatomic) DUXNavigationBar *duxNaviBar;
@property (retain, nonatomic) DUXNavigationBarImageAction *duxImageAction;
@property (retain, nonatomic) DUXSwitch *versionTypeSwitch;
@property (retain, nonatomic) UILabel *versionTypeLabel;
@property (retain, nonatomic) UIView *groudView;
@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) DUXButton *deleteButton;
@property (retain, nonatomic) UILabel *debugLabel;
@property (retain, nonatomic) DUXSwitch *debugSwitch;
@property (nonatomic) BOOL isExistTestVersion;
@property (nonatomic) BOOL isScanSchemaValid;
@property (copy, nonatomic) NSArray *dataSource;
@property (copy, nonatomic) NSArray *secondaryDataSource;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appTypeStr;
@property (copy, nonatomic) NSString *schemaPrefixStr;
@property (nonatomic) long long appType;
@property (nonatomic) long long localVersionType;
@property (copy, nonatomic) NSDictionary *selectLatestVersionInfo;
@property (weak, nonatomic) id<AWENativeAppDebugCenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onBackButtonClicked;
- (void)openCameraForScan;
- (void)requestForTestVersionTypeNeedShowToast:(BOOL)a0;
- (void)buildDataSourceNeedReload:(BOOL)a0 latestVersionInfo:(id)a1 needUpdateLatestVersion:(BOOL)a2;
- (void)TapDeleteButton;
- (void)versionTypeSwitchOnChange;
- (void)updateEasterEggUserDefaultsForParams:(id)a0;
- (long long)checkSchemaValid:(id)a0;
- (void)getSchemaFromURL:(id)a0 completion:(id /* block */)a1;
- (void)scanCodeWithModel:(id)a0 completion:(id /* block */)a1;
- (id)initWithAppID:(id)a0 appName:(id)a1 appType:(long long)a2;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)setupUI;

@end
