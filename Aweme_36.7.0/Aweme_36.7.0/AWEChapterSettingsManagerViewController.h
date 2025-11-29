@class NSString, AWEChapterSettingsManagerModel, UITableView;

@interface AWEChapterSettingsManagerViewController : UIViewController <AFDSettingSearchDelegate, AWERouterViewControllerProtocol, UITableViewDelegate, UITableViewDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEChapterSettingsManagerModel *viewModel;
@property (nonatomic) long long highlightType;
@property (nonatomic) BOOL needInvisibleToast;
@property (copy, nonatomic) NSString *enterMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (id)settingSearchRegisterDic;
+ (unsigned long long)itemStatusWithSettingItem:(id)a0;
+ (BOOL)shouldShowChapterRecommendAuto;
+ (BOOL)shouldShowChapterRecommendDisplay;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)backBtnClick:(id)a0;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
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
