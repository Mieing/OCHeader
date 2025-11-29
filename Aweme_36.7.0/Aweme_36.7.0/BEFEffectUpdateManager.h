@interface BEFEffectUpdateManager : NSObject

+ (BOOL)isInited;
+ (const char *)getRootDir;
+ (void)initRootDir;
+ (void)init:(BOOL)a0;
+ (void)clearCache;

@end
