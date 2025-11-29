@interface AWEIMDiskManager : NSObject

+ (void)registerDiskCacheConfig;
+ (void)syncStartDiskCleanIfNeeded;
+ (id)extraCleanPaths;
+ (void)_registerDiskCacheRuleConfig;
+ (void)transformForAWEIMDYOfficialDataManagerReverse:(BOOL)a0;
+ (void)transformForAWEIMActivityDynamicResourceManagerReverse:(BOOL)a0;
+ (void)transformForAWEIMProjectXConfigManagerReverse:(BOOL)a0;
+ (void)transformForAWEIMContactWCDBManagerReverse:(BOOL)a0;
+ (void)moveDirItems:(id)a0 to:(id)a1 reverse:(BOOL)a2;
+ (id)cleanPathsOfCurrentUser;
+ (void)startCleanPaths:(id)a0;
+ (void)_transfromDataIfNeedWithReverse:(BOOL)a0;
+ (id)config;
+ (long long)totalCacheSize;

@end
