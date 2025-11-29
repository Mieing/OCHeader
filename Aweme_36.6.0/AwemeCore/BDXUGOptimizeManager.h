@interface BDXUGOptimizeManager : NSObject

+ (id)p_BDX_registerInfo_AWEUGOptimizeSettingsAdapterBDXUGOptimizeSettingsProtocol;
+ (id)BDX_registerInfo_AWEUGOptimizeSettingsAdapterBDXUGOptimizeSettingsProtocol;
+ (id)sharedInstance;

- (void)updateConfig:(id)a0;
- (void)triggerOnLogin;
- (void)triggerOnLogout;
- (void)triggerOnFeedReady;

@end
