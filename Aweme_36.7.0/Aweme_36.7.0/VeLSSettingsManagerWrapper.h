@interface VeLSSettingsManagerWrapper : NSObject

@property (nonatomic) struct shared_ptr<livestrategy::ISettingsManager> { struct ISettingsManager *__ptr_; struct __shared_weak_count *__cntrl_; } settingsManager;

+ (id)sharedInstance;

- (void)StartPeriodicRequest;
- (void)GetLSSettings;
- (void)GetStrategySDKSettings;
- (id)GetRTMPlayer;
- (id)GetLivePlayerSettings;
- (id)GetAbrAutoSettings;
- (id)GetQuicSettings;
- (id)GetStrategyConfigByName:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
