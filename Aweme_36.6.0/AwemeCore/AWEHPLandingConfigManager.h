@class NSLock, NSString, NSArray, AWEHPLandingStrategyModel, AWEHPLandingResultModel, MMKV, NSDictionary, AWEHPLandingPitayaResultModel;

@interface AWEHPLandingConfigManager : NSObject <AWEAppAwemeSettingMessage>

@property (retain, nonatomic) NSDictionary *settingsLandingConfig;
@property (retain, nonatomic) NSArray *settingsStrategyBlackList;
@property (retain, nonatomic) NSDictionary *landingConfig;
@property (retain, nonatomic) AWEHPLandingResultModel *currentResultModel;
@property (retain, nonatomic) AWEHPLandingStrategyModel *currentStrategyModel;
@property (retain, nonatomic) AWEHPLandingResultModel *nextResultModel;
@property (retain, nonatomic) AWEHPLandingPitayaResultModel *defaultPitayaResultModel;
@property (retain, nonatomic) MMKV *landingMMMKV;
@property (retain, nonatomic) MMKV *strategyMMMKV;
@property (retain, nonatomic) NSLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEHPLandingConfigCommonAdapterClass;
+ (id)sharedInstance;

- (void)awemeSettingDidChange;
- (void)p_addNotifications;
- (void)p_removeNotifications;
- (id)safeGetCurrentLandingResultModel;
- (id)safeGetNextLandingResultModel;
- (id)safeGetLandingConfig;
- (id)safeGetCurrentLandingStrategyModel;
- (BOOL)safeSetNextLandingPitayaResult:(id)a0;
- (BOOL)p_tryUpdateSettings;
- (id)p_getSettingsLandingConfig;
- (id)p_getSettingsStrategyBlackList;
- (id)p_generateLandingConfigWithConfig:(id)a0 blackList:(id)a1;
- (id)p_getCurrentUserId;
- (id)p_readResult;
- (id)p_generateLandingResultWithLandingConfig:(id)a0 userId:(id)a1 landingResult:(id)a2;
- (id)p_generateResultModelWithPitaya:(id)a0 isDefault:(BOOL)a1 userId:(id)a2;
- (BOOL)p_setNextLandingResultModel:(id)a0;
- (BOOL)p_removeResult;
- (BOOL)p_writeResult:(id)a0;
- (id)p_getDefaultConfig;
- (id)aAWEHPLandingConfigCommonAdapter;
- (void)safeSetCurrentLandingStrategyModel:(id)a0;
- (BOOL)tryIncrementLandingCountWithLandingResult:(id)a0;
- (void)safeRemoveNextLandingResult;
- (id)getStrategyMMKV;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
