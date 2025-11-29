@class NSDate, NSString, AWEConcernYellowDotModel;

@interface AWEConcernYellowDotSettingsManager : NSObject <AWESettingsComboRequestProtocol, AWEUserMessage>

@property (retain, nonatomic) AWEConcernYellowDotModel *settingModel;
@property (nonatomic) long long followNumberDotCount;
@property (nonatomic) long long followTabDotCount;
@property (nonatomic) long long familiarCount;
@property (retain, nonatomic) NSDate *lastDemotionTime;
@property (nonatomic) BOOL isYellowDotDemotionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (id)settingsRequestParamsDictionary;
+ (id)settingsRequestPath;
+ (void)updateSettingsWithDictionary:(id)a0;
+ (void)doOriginalActions;
+ (void)asynJsonModeWithConcernYellowSetting:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (BOOL)isSocialCountDemotionState;
- (BOOL)socialCountDemotionSwitch;
- (void)clearSocialCountDemotionState;
- (void)updateSocialDemotionStateWithFollowTabPointCount:(long long)a0 followTabNumberCount:(long long)a1 familiarTabCount:(long long)a2;
- (void)tabBarDidChangeNotification:(id)a0;
- (id)yellowDotSettingParamsWithCodeLaunch;
- (void)handleFetchedModel:(id)a0;
- (void)__checkYellowDotDemotion;
- (void)fetchColdLaunchYellowDotSettingWithContext:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
