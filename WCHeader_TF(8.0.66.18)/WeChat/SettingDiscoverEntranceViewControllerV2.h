@class DelaySwitchSettingLogic, DiscoverEntranceSettingReporter, NSString;

@interface SettingDiscoverEntranceViewControllerV2 : NewSettingBaseViewController <DiscoverEntranceSettingHandlerDelegate>

@property (retain, nonatomic) DelaySwitchSettingLogic *delaySwitchSettingLogic;
@property (retain, nonatomic) DiscoverEntranceSettingReporter *reporter;
@property (nonatomic) unsigned long long enterScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)initTableView;
- (id)arrangedEntranceTypeList;
- (void)initReporter;
- (void)initView;
- (void)initData;
- (id)genTableHeaderView;
- (void)onReturn;
- (void)showEntranceSettingWithType:(unsigned long long)a0;
- (void)reloadTableView;
- (void).cxx_destruct;

@end
