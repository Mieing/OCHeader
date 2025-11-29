@interface AWEAppStoreManager : NSObject

+ (BOOL)isAppStoreURL:(id)a0;
+ (id)appsJumpConfigs;
+ (Class)aAWEAppStoreManagerCommonAdapterClass;
+ (id)__appStoreSchemes;
+ (id)__appStoreHosts;
+ (id)topVCString;
+ (id)sceneStringWithType:(unsigned long long)a0;
+ (BOOL)enableHookStoreKit;
+ (BOOL)__isInHouseURL:(id)a0;
+ (id)hostAndPathForURLString:(id)a0;
+ (void)trackDisableAppsJumpWithScene:(unsigned long long)a0 appsJumpDisable:(BOOL)a1 itunesURL:(id)a2 URLScene:(id)a3 appID:(id)a4 extra:(id)a5;

- (id)aAWEAppStoreManagerCommonAdapter;

@end
