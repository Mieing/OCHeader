@class MMTableViewInfo;

@interface SettingDarkModeViewController : MMUIViewController

@property (retain, nonatomic) MMTableViewInfo *tableViewInfo;
@property (nonatomic) long long previousSelectedType;

- (void)viewDidLoad;
- (void)reloadSections;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)onFollowSystemSwitch:(id)a0;
- (void)onSelectDarkMode;
- (void)onSelectLightMode;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
