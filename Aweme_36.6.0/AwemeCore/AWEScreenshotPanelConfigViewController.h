@class NSString, AWEScreenshotPanelConfigModel, UITableView;

@interface AWEScreenshotPanelConfigViewController : UIViewController <AFDSettingSearchDelegate, AWERouterViewControllerProtocol, UITableViewDelegate, UITableViewDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEScreenshotPanelConfigModel *viewModel;
@property (nonatomic) long long highlightType;
@property (nonatomic) BOOL needInvisibleToast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)settingSearchRegisterDic;
+ (unsigned long long)itemStatusWithSettingItem:(id)a0;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)backBtnClick:(id)a0;
- (void)highlightCellIfNeeded;
- (void)p_highlightCellIfNeeded;
- (void)highlightCellWithIndex:(id)a0;
- (id)p_highlightIndexPathWithType:(long long)a0;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupUI;

@end
