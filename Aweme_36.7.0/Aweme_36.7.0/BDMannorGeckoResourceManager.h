@interface BDMannorGeckoResourceManager : NSObject

+ (void)handleSettingsNotification:(id)a0;
+ (void)loadGeckoResourceWithChannelList:(id)a0;
+ (void)observeADSettingsReady;
+ (void)loadGeckoResourceWithScene:(id)a0;
+ (id)geckoResourceWithPath:(id)a0 channel:(id)a1;
+ (BOOL)hasGeckoResourceWithChannel:(id)a0;
+ (void)clearResourceWithChannel:(id)a0;

@end
