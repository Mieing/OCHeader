@class NSDictionary;

@interface LSSSettings : NSObject

@property (retain, nonatomic) NSDictionary *requestResults;
@property (retain, nonatomic) NSDictionary *livePlayerProjectSettings;
@property (nonatomic) BOOL isEnableNative;

- (id)getSettings;
- (id)parseJsonString:(id)a0;
- (void)setEnableNativeReqSettings:(BOOL)a0;
- (void)updatePullVapssSettings:(id)a0;
- (id)getGLobalStaticSettingsBundleByProjectKey:(id)a0;
- (id)getGlobalStaticSetttingsByKey:(id)a0 key:(id)a1;
- (void)updateLiveCoreVapssSettings:(id)a0;
- (void)updateLivePlayerVapssSettings:(id)a0;
- (id)getBatchSettingsParams;
- (id)getProjectKey:(id)a0;
- (BOOL)isIdNumberValid:(id)a0;
- (BOOL)checkIdNumber:(id)a0;
- (id)getStrategyCommonTraceInfo;
- (void).cxx_destruct;
- (void)updateSettings:(id)a0;
- (id)init;

@end
