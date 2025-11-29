@interface AWEIMSDKSettingManager : NSObject

+ (id)sharedInstance;

- (void)flushSettingsToIMCore;
- (id)init;

@end
