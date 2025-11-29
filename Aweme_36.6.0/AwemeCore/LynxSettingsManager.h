@class NSDictionary;

@interface LynxSettingsManager : NSObject

@property (copy) NSDictionary *settings;

+ (id)sharedInstance;

- (long long)settingsTime;
- (void)updateSettings:(id)a0 withTime:(long long)a1;
- (id)objectFromSettings:(id)a0;
- (id)stringFromSettings:(id)a0;
- (void).cxx_destruct;
- (void)updateSettings:(id)a0;
- (id)init;
- (void)loadSettings;

@end
