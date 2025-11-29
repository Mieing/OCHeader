@interface IESGurdClearCacheManager : NSObject

+ (void)clearCacheForAccessKey:(id)a0 channel:(id)a1;
+ (void)clearCacheForAccessKey:(id)a0 channel:(id)a1 completion:(id /* block */)a2;
+ (void)clearCacheWithUniversalStrategies:(id)a0 isPush:(BOOL)a1 logInfo:(id)a2;
+ (void)clearCacheWithCleanTasks:(id)a0 isPush:(BOOL)a1 logInfo:(id)a2;
+ (void)clearCacheForAccessKey:(id)a0 channel:(id)a1 isSync:(BOOL)a2 completion:(id /* block */)a3;
+ (id)sharedManager;

@end
