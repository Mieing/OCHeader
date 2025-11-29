@class NSObject;
@protocol OS_dispatch_queue;

@interface BDPDiskManager : NSObject {
    NSObject<OS_dispatch_queue> *_ioQueue;
}

+ (void)clearAllUserCache;
+ (id)aliveAppIds;
+ (void)cleanUnUsedPkgs;
+ (id)sharedManager;

- (void)clearDiskWithCompletion:(id /* block */)a0 isAuto:(BOOL)a1;
- (void)clearDiskExtremelyWithCompletion:(id /* block */)a0;
- (long long)calculateCleanCacheSizeWithTriggerType:(long long)a0 cleanLevel:(long long)a1;
- (void)reportDiskInfo;
- (BOOL)disablePreloadIfHitDiskExperiment;
- (id)urlsOnDiskPaths;
- (void)calculateSizeWithCompletion:(id /* block */)a0;
- (void)autoCleanUnusedPkgWithCompletion:(id /* block */)a0;
- (void)gameCleanUnusedPkgWithCleanType:(long long)a0 completion:(id /* block */)a1;
- (void)manualCleanUnusedPkgWithCompletion:(id /* block */)a0;
- (void)cleanUnusedClientAIFiles;
- (void)cleanUnusedUserFiles;
- (void)cleanUnusedMPPluginFiles;
- (void)cleanOldDynamicPluginFiles;
- (void)cleanExtraUnusePkgIfNeeded;
- (id)mpidSetInDisk;
- (id)starkSetInDisk;
- (id)beforeCleanInfo;
- (void)cleanUserStorageForAppIds:(id)a0;
- (void)trackGameDiskCleanInfo:(id)a0 unUsedCnt:(long long)a1 lessUsedCnt:(long long)a2 cleanType:(long long)a3;
- (id)starkListInDisk;
- (id)mpidListInDisk;
- (void)removeFilesInDirectory:(id)a0;
- (long long)calculateCleanCacheSizeWithType:(long long)a0;
- (long long)calculateCleanCacheSizeWithSet:(id)a0 cleanTime:(long long)a1 isStark:(BOOL)a2;
- (id)calculateAccessAndUseOfAppidSet:(id)a0;
- (long long)calculateSizeInPath:(id)a0 bySpecialName:(id)a1;
- (long long)calculateSizeInPath:(id)a0 bySpecialNameList:(id)a1;
- (id)subPathsArrWithPath:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
