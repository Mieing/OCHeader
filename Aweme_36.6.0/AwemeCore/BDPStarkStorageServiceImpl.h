@class NSString;

@interface BDPStarkStorageServiceImpl : NSObject <BDPStarkStorageService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;

- (long long)sizeWithPath:(id)a0;
- (id)initService;
- (long long)getLastLaunchTimeForAppID:(id)a0;
- (void)cleanPkgAsyncForAppID:(id)a0;
- (void)cleanPkgAsyncForAppID:(id)a0 versionMark:(id)a1;
- (void)cleanAllDeletedPkgAsyncForAppID:(id)a0;
- (void)cleanAllUserCache;
- (void)cleanLogCacheWithAppID:(id)a0;
- (void)cleanExtremely;
- (void)renamePkgToBeDeletedForAppID:(id)a0 versionMark:(id)a1;
- (id)getStoragePath:(unsigned long long)a0;
- (id)getStoragePath:(unsigned long long)a0 appID:(id)a1;
- (long long)sizeWithPaths:(unsigned long long)a0;
- (double)getFileModifiedTimeWithPath:(id)a0;

@end
