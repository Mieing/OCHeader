@class AWESettingThemeHelper, AWEUITheme, AWESettingThemeManagerModel, AWEThemeChooseTimeModel, AWESettingThemeObserveWindow;

@interface AWESettingThemeManager : NSObject

@property (retain, nonatomic) AWESettingThemeObserveWindow *observeWindow;
@property (retain, nonatomic) AWEUITheme *lightTheme;
@property (retain, nonatomic) AWEUITheme *darkTheme;
@property (retain, nonatomic) AWESettingThemeManagerModel *storageModel;
@property (nonatomic) BOOL lastModeLightEnable;
@property (retain, nonatomic) AWESettingThemeHelper *settingThemeHelper;
@property (nonatomic) int lastABValue;
@property (nonatomic, getter=isAutoChangeEnable) BOOL autoChangeEnable;
@property (nonatomic, getter=isLightMode) BOOL lightMode;
@property (nonatomic) unsigned long long changeType;
@property (retain, nonatomic) AWEThemeChooseTimeModel *darkTime;
@property (retain, nonatomic) AWEThemeChooseTimeModel *lightTime;

+ (Class)aAWEUserCenterModuleServiceCommonAdapterClass;
+ (id)sharedInstance;

- (id)aAWEUserCenterModuleServiceCommonAdapter;
- (void)setThemeFollowSystem;
- (void)p_trackerThemeSettingWithLightMode:(BOOL)a0;
- (void)getLocalUserCustom;
- (void)addNotificationOfApplication;
- (void)storageCurrentUserCustom;
- (void)startAutoChangeTheme;
- (void)applicationStateChange;
- (void)startAutoChangeThemeCanRequest:(BOOL)a0;
- (void)startAutoChaneWithFollowSystem;
- (void)startAutoChaneWithUserCustom;
- (void)setThemeFollowUserCustom;
- (BOOL)checkUserCustomTimeLightEnable;
- (void)changeThemeStyleLightModeEnable:(BOOL)a0;
- (void)addObserveWindowMonitorSystemState;
- (id)launchThemeDOUYINLiteAdapter;
- (id)defaultLaunchFollowSystemTheme;
- (void)setUserCustomTimeDark:(id)a0 light:(id)a1;
- (id)launchTheme;
- (void)setUp;
- (void).cxx_destruct;

@end
