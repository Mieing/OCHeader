@class NSString;

@interface WeAppCore.GamePowerSavingModeUtils : NSObject

@property (class, nonatomic, readonly) NSString *MMKV_GAME_POWER_SAVING_CONFIG;
@property (class, nonatomic, readonly) NSString *MMKV_GAME_POWER_SAVING_KEY_PREFIX;

+ (id)getGamePowerSavingKey:(id)a0 appId:(id)a1;

- (id)init;
- (void).cxx_destruct;

@end
