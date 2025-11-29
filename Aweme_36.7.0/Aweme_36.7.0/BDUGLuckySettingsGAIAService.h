@interface BDUGLuckySettingsGAIAService : NSObject

+ (void)sdkSettingsUpdate;
+ (void)initializeSettingsModule;
+ (void)refreshSettingsModuleWhenSDKRestart;
+ (void)onReceiveLogInEvent;
+ (void)onReceiveLogoutEvent;
+ (void)onReceiveTeenModeChangedEvent;
+ (void)onReceiveBaseModeChangedEvent;
+ (void)refreshActHashSuccessWithRefreshScene:(id)a0;
+ (void)refreshActHashFailedWithRefreshScene:(id)a0;

@end
