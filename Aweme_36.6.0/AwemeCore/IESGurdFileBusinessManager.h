@interface IESGurdFileBusinessManager : NSObject

+ (void)addCacheWhitelistWithAccessKey:(id)a0 channels:(id)a1;
+ (void)getResData:(id)a0 callback:(id /* block */)a1;
+ (void)clearCache:(BOOL)a0;
+ (id)dataForAccessKey:(id)a0 channel:(id)a1 path:(id)a2 options:(unsigned long long)a3;
+ (void)asyncExecuteBlock:(id /* block */)a0 accessKey:(id)a1 channel:(id)a2;
+ (BOOL)hasCacheForAccessKey:(id)a0 channel:(id)a1 path:(id)a2;
+ (id)offlineDataForAccessKey:(id)a0 channel:(id)a1 path:(id)a2;
+ (void)getResPath:(id)a0 isAccess:(BOOL)a1 callback:(id /* block */)a2;
+ (id)recreateDirIfNeeded:(id)a0;
+ (void)cleanCacheForAccessKey:(id)a0 channel:(id)a1 isSync:(BOOL)a2 completion:(id /* block */)a3;
+ (void)_clearTempFilesIfNeeded;
+ (id)_cachePathForAccessKey:(id)a0 channel:(id)a1 path:(id)a2;
+ (id)_internalPackageCachePathForAccessKey:(id)a0 channel:(id)a1 path:(id)a2;
+ (id)_internalPackageDataForAccessKey:(id)a0 channel:(id)a1 path:(id)a2 options:(unsigned long long)a3 dataAccessPolicy:(long long)a4;
+ (id)_dataWithCachePath:(id)a0 options:(unsigned long long)a1;
+ (id)getOfflineRes:(id)a0 channel:(id)a1 bundle:(id)a2 isPath:(BOOL)a3;
+ (void)updateResDataByWaitUpdate:(id)a0 resParams:(id)a1 isPath:(BOOL)a2 callback:(id /* block */)a3;
+ (void)_cleanActiveCacheForAccessKey:(id)a0 channel:(id)a1 errorMessage:(id *)a2;
+ (void)_cleanInactiveCacheForAccessKey:(id)a0 channel:(id)a1 errorMessage:(id *)a2;
+ (id)removeErrorMessageWithPath:(id)a0 error:(id)a1;
+ (void)syncExecuteBlock:(id /* block */)a0 accessKey:(id)a1 channel:(id)a2;
+ (void)setup;

@end
