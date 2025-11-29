@class MemoryMappedKV, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MJTemplateResourceManager : MMRootService <MMResourceMgrExt, MMServiceProtocol> {
    NSObject<OS_dispatch_queue> *_operationQueue;
}

@property (readonly, nonatomic) MemoryMappedKV *mmkv;
@property (readonly, nonatomic) unsigned int albumResType;
@property (readonly, nonatomic) unsigned int cameraResType;
@property (readonly, copy, nonatomic) NSString *albumResourceDirectory;
@property (readonly, copy, nonatomic) NSString *cameraResourceDirectory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportResourceCachedState;
- (void)reportResourceCachedStateWithResType:(unsigned int)a0;
- (id)safeJSONStringWithObject:(id)a0;
- (id)safeStringWithString:(id)a0;
- (unsigned long long)MMCleanCacheMgr_evaluateCacheSize;
- (unsigned long long)MMCleanCacheMgr_cleanCache;
- (id)init;
- (void)initResourceManager;
- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)shouldMergeResourceWithResType:(unsigned int)a0 resSubtype:(unsigned int)a1 targetVersion:(unsigned int)a2;
- (void)updateResourceTargetVersion:(unsigned int)a0 withResType:(unsigned int)a1 resSubtype:(unsigned int)a2;
- (void)mergeResourceFilesIfNeededWithResType:(unsigned int)a0 resSubtype:(unsigned int)a1;
- (void)checkUnmergedResourceFilesWithResType:(unsigned int)a0;
- (void)consumeResourcePackageIfNeededWithResType:(unsigned int)a0 resSubtype:(unsigned int)a1;
- (void)consumeResourcePackageIfNeededWithResType:(unsigned int)a0;
- (void)onResUpdateFinish:(long long)a0 resType:(unsigned int)a1 subResType:(unsigned int)a2;
- (void)cleanAllResourceFiles;
- (void)cleanMMKVFile;
- (void)cleanResourceFilesForResType:(unsigned int)a0;
- (void).cxx_destruct;

@end
