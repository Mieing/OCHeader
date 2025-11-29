@class UILabel, NSString, NSNumber, UIView, NSMutableArray, UITableView;

@interface AWEBizDowngradeSettingViewController : UIViewController <AFDSettingSearchDelegate, UITableViewDataSource, UITableViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSMutableArray *itemArray;
@property (retain, nonatomic) UIView *sectionFooterView;
@property (retain, nonatomic) UILabel *discriptionLabel;
@property (readonly, copy, nonatomic) NSString *referString;
@property (retain, nonatomic) NSNumber *preFluencySwitch;
@property (retain, nonatomic) NSNumber *prePowerSwitch;
@property (nonatomic) long long highlightType;
@property (nonatomic) BOOL needInvisibleToast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)settingSearchRegisterDic;
+ (unsigned long long)itemStatusWithSettingItem:(id)a0;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)presentHalfScreenVC:(id)a0 withView:(id)a1;
- (void)highlightCellIfNeeded;
- (id)selectItemModelWithTitle:(id)a0 settingIndexValue:(long long)a1 isSelected:(BOOL)a2;
- (void)createDataSource;
- (void)p_highlightCellIfNeeded;
- (void)highlightCellWithIndex:(id)a0;
- (id)p_highlightIndexPathWithType:(long long)a0;
- (void)speedPerformancePageShow;
- (void)setFooterView;
- (id)powerSwitchNum;
- (void)speedPerformancePageLeave;
- (id)fluencyItem;
- (id)energyItem;
- (void)fluencySwitchValueChanged:(BOOL)a0;
- (id)energyDetail;
- (void)didTapEnergyItem;
- (void)speedPerformanceButtonClick:(BOOL)a0;
- (id)prepareSheetItemsOnVC:(id)a0;
- (id)subtitleSelectItemModelWithTitle:(id)a0 subtitle:(id)a1 settingIndexValue:(long long)a2 isSelected:(BOOL)a3;
- (void)actionAfterTap;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;

@end
