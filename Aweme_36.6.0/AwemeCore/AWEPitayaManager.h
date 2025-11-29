@interface AWEPitayaManager : NSObject

+ (BOOL)enablePitaya;
+ (id)sharedInstance;

- (void)bytedSettingDidChange;
- (void)initCepEngine;
- (id)init;
- (void)start;
- (BOOL)checkVersion;

@end
