@class AWEHPLandingRollBackSettingsConfig, AWEHPLandingRollBackDisabledConfig;

@interface AWEHPLandingRollBackSettingsConfigManager : NSObject

@property (retain, nonatomic) AWEHPLandingRollBackSettingsConfig *config;
@property (retain, nonatomic) AWEHPLandingRollBackDisabledConfig *disabledConfig;

+ (id)sharedInstance;

- (id)settingsConfig;
- (BOOL)configEnable;
- (void)setupDisabledConfig;
- (BOOL)disableShowRollBackWithChannelID:(id)a0 bizType:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setupConfig;

@end
