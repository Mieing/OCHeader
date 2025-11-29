@class NSString;

@interface AWEShareSettings : NSObject <AWEShareSettings>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowShareWithWebURL:(id)a0;
+ (BOOL)shouldMuteVideoWhenSharingAweme:(id)a0 toPlatform:(long long)a1;
+ (BOOL)isOverseasUser;
+ (id)defaultFeedShareGuideType;
+ (id)sharePlatformSettingForPlatform:(long long)a0;
+ (id)shareChannelTypes;
+ (id)sharePlatformSDKSetting;
+ (BOOL)shouldUseTencentSharingSDK;
+ (id)defaultSharePlatformSettings;
+ (id)sharePlatformSettings;
+ (id)actionSettings;
+ (id)webURLHostSharingWhitelist;
+ (id)actionChannelTypes;
+ (BOOL)shouldIgnoreOriginRule;
+ (BOOL)shouldIncludeIIDInShareURLWithType:(id)a0;
+ (void)initialize;


@end
