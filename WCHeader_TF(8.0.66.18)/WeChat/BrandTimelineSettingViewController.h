@class WCTimeLineFooterView, WCTableViewSectionManager, MMTableViewInfo;
@protocol BrandTimelineSettingViewControllerDelegate;

@interface BrandTimelineSettingViewController : MMUIViewController

@property (retain, nonatomic) MMTableViewInfo *tableViewInfo;
@property (retain, nonatomic) WCTimeLineFooterView *tableViewFooterView;
@property (nonatomic) BOOL personalRecommendSwitch;
@property (nonatomic) BOOL personalRecommendSwitchClickLimit;
@property (nonatomic) BOOL personalShowUserHeadForPaySwitch;
@property (nonatomic) BOOL personalShowUserHeadForPaySwitchClickLimit;
@property (nonatomic) BOOL creationCenterNotifySwitch;
@property (nonatomic) BOOL creationCenterNotifySwitchClickLimit;
@property (nonatomic) BOOL finderRecommendSwitch;
@property (nonatomic) BOOL finderRecommendSwitchClickLimit;
@property (retain, nonatomic) WCTableViewSectionManager *firstSection;
@property (retain, nonatomic) WCTableViewSectionManager *secondSection;
@property (nonatomic) BOOL hasGotSetting;
@property (nonatomic) int personalizedOpt;
@property (weak, nonatomic) id<BrandTimelineSettingViewControllerDelegate> m_delegate;
@property (nonatomic) BOOL isFromFlutterPersonalCenter;

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)initFooterView;
- (void)reloadSections;
- (void)genPersonalRecommendSetting;
- (void)genFinderRecommendSetting;
- (void)genPayForHeadSetting;
- (void)genCreationCenterNotifyCountSetting;
- (void)viewDidLayoutSubviews;
- (void)onPersonalRecommendSwitch:(id)a0;
- (void)onPersonalHeadForPaySwitch:(id)a0;
- (void)onPersonalCreationCenterNotifySwitch:(id)a0;
- (void)onFinderRecommendSwitch:(id)a0;
- (void)_getTimelineSetting;
- (void)showTableViewFooterView;
- (void)_setPersonalRecommendSwitch:(BOOL)a0;
- (void)_setPersonalHeadForPaySwitch:(BOOL)a0;
- (void)_setCreationCenterNotifySwitch:(BOOL)a0;
- (void)_setFinderRecommendSwitch:(BOOL)a0;
- (void)dealWithPersonalRecommendSwitch:(BOOL)a0 error:(id)a1 needReloadSections:(BOOL)a2;
- (void)dealWithHeadForPaySwitch:(BOOL)a0 error:(id)a1 needReloadSections:(BOOL)a2;
- (void)dealWithCreationCenterNotifySwitch:(BOOL)a0 error:(id)a1 needReloadSections:(BOOL)a2;
- (void)dealWithFinderRecommendSwitch:(BOOL)a0 error:(id)a1 needReloadSections:(BOOL)a2;
- (void)showFailAlertView:(id)a0 retryBlock:(id /* block */)a1 returnBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end
