@class NSMutableDictionary, NSString, NSDate, NSMutableArray;

@interface BDWebSecureLinkSettings : NSObject

@property (retain, nonatomic) NSMutableArray *urlArray;
@property (retain, nonatomic) NSMutableDictionary *settingsDic;
@property (retain, nonatomic) NSMutableDictionary *globalSettingsDic;
@property (retain, nonatomic) NSMutableDictionary *scenesSettingsDic;
@property (retain, nonatomic) NSDate *lastSuccessTime;
@property BOOL isRequesting;
@property (nonatomic) double period;
@property (retain, nonatomic) NSString *seclinkSettingsVersion;
@property (nonatomic) BOOL customSettingsBizFirst;

+ (id)getSettingsUrlDefaultArray;
+ (id)getHardCodeDefaultSettings;
+ (id)sharedInstance;

- (void)fetchSettings;
- (BOOL)shouldRequest;
- (BOOL)isCustomSettingsBizFirst;
- (BOOL)shouldDisableSeclinkWithScene:(id)a0;
- (id)getQueryParamsSettingsVersion;
- (BOOL)isFirstRequestSwitchBizFirstWithScene:(id)a0;
- (BOOL)switchOnFirstRequestSecureCheckWithScene:(id)a0;
- (BOOL)isAsyncModeBizFirstWithScene:(id)a0;
- (BOOL)asyncModeWithScene:(id)a0;
- (BOOL)isStrictModeBizFirstWithScene:(id)a0;
- (BOOL)strictModeWithScene:(id)a0;
- (id)loadLocalSettings;
- (void)handleErrorTriggerNotification:(id)a0;
- (void)fetchIfNeedFetchSettingsImmediately;
- (void)updateLocalSettings;
- (void)fetchSettingsAtUrlArrayIndex:(unsigned long long)a0;
- (void)fetchSettingsWithUrl:(id)a0 completion:(id /* block */)a1;
- (BOOL)getBoolSwitchFromSettingsWithKey:(id)a0 scene:(id)a1 defaultValue:(BOOL)a2;
- (void)checkAndFetchSettings;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)updateSettings;

@end
