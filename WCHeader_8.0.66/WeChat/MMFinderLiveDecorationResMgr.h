@class MMLiveResourceFetcherRootFlowAction, NSRecursiveLock, NSString, NSMutableSet;

@interface MMFinderLiveDecorationResMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) MMLiveResourceFetcherRootFlowAction *downloader;
@property (retain, nonatomic) NSMutableSet *downloadKeyList;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (BOOL)isDownloading:(id)a0;
- (BOOL)downloadMaterialResource:(id)a0;
- (void)p_downloadMaterialResource:(id)a0;
- (void).cxx_destruct;

@end
