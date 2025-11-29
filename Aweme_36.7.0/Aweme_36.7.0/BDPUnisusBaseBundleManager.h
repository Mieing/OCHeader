@interface BDPUnisusBaseBundleManager : NSObject

+ (id)getConfigVersionMap;
+ (id)getLocalExistVersionMap;
+ (void)checkUpdateWithCompletion:(id /* block */)a0;
+ (id)selectBestBaseBundle;
+ (void)registerBaseBundleService:(id)a0 builtInAnnieVersion:(id)a1 useV2:(BOOL)a2 useV2Preset:(BOOL)a3 builtInVersionV2:(id)a4 builtInAnnieVersionV2:(id)a5 builtInBizVersionDict:(id)a6;
+ (void)clearLowVersionBaseBundleWithVersion:(long long)a0 bundleType:(id)a1;
+ (long long)currentBaseVersionInt;
+ (id)currentBizVersionIntMap;
+ (void)resetBaseBundle;
+ (void)prepareDebugBaseBundleWithPath:(id)a0 bundleType:(id)a1;

@end
