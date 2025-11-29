@interface FBSDKGraphRequestPiggybackManager : NSObject

+ (void)addPiggybackRequests:(id)a0;
+ (void)addRefreshPiggyback:(id)a0 permissionHandler:(id /* block */)a1;
+ (void)addRefreshPiggybackIfStale:(id)a0;
+ (void)addServerConfigurationPiggyback:(id)a0;

@end
