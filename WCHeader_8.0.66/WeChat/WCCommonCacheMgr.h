@class NSString, WCCommonCacheDB, NSObject;
@protocol OS_dispatch_queue;

@interface WCCommonCacheMgr : MMUserService <WCPlayerEventExt, MMServiceProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processQueue;
@property (retain, nonatomic) WCCommonCacheDB *cacheDB;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (id)getCommonProcessQueue;
- (BOOL)isCloseCommonCache;
- (id)getCommonCacheWithMD5:(id)a0;
- (BOOL)linkHitCacheFileWithFileMD5:(id)a0 targetPath:(id)a1 mediaType:(unsigned int)a2;
- (BOOL)linkHitCacheFileWithFileMD5:(id)a0 targetPath:(id)a1 mediaType:(unsigned int)a2 consistentSize:(long long)a3;
- (BOOL)addCacheWithFileMD5:(id)a0 filePath:(id)a1 aggregateName:(id)a2 mediaType:(unsigned int)a3;
- (void)removeCachesWithAggregateName:(id)a0;
- (void)removeCachesWithAggregateNames:(id)a0;
- (void)removeCachesWithFilePath:(id)a0;
- (void)loadAndDeleteVideoCacheData;
- (BOOL)changeToHardLink:(id)a0 filePath:(id)a1 aggregateName:(id)a2 mediaType:(unsigned int)a3;
- (void)onPlayerStartDownload:(id)a0;
- (void)onPlayerDownloadComplete:(id)a0 downloadInfo:(id)a1;
- (void).cxx_destruct;

@end
