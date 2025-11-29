@class MMListenUserConfig, NSString, MMTableViewInfo, SettingsTingSwitchConfig;

@interface SettingsTingViewController : MMUIViewController <ITingPlayCenterMgrExt>

@property (retain, nonatomic) MMTableViewInfo *tableViewInfo;
@property (retain, nonatomic) MMListenUserConfig *userConfig;
@property (retain, nonatomic) SettingsTingSwitchConfig *switchConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)initSettingConfig;
- (void)syncSettingConfig;
- (void)reloadSections;
- (void)viewWillLayoutSubviews;
- (void)syncConfigWithCompletion:(id /* block */)a0;
- (void)onAutoPlayMvSwitch:(id)a0;
- (void)onRecommendSwitch:(id)a0;
- (void)onTaskBarConfigHideChanged:(id)a0;
- (void)enEnableNetworkHighQualitySwitch:(id)a0;
- (void)onTimerCellClicked;
- (void).cxx_destruct;

@end
