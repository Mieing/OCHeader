@class SECWebSafetyShieldPluginSetting, NSString;

@interface SECWebSafetyShieldPlugin : IWKPluginObject <IWKClassPlugin>

@property (retain) SECWebSafetyShieldPluginSetting *setting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)installSeclinkPluginOnWebView:(id)a0 withScene:(id)a1;
+ (void)injectPluginWithSetting:(id)a0;
+ (id)shared;

@end
