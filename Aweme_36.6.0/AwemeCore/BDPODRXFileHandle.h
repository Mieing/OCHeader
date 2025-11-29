@class NSHashTable, BDPQueue, NSString, BDPODRXDepAnalyzer, NSMutableDictionary, BDPODRXFileBasicModel, NSObject, BDPExceptionLoader, NSMutableSet;
@protocol BDPFileHandleLifecycleDelegate, OS_dispatch_semaphore;

@interface BDPODRXFileHandle : NSObject <BDPODRXLoaderDelegate, BDPFileHandleFullProtocol> {
    NSObject<OS_dispatch_semaphore> *_loaderLock;
    BDPExceptionLoader *_exceptionLoader;
    BDPODRXDepAnalyzer *_depAnalyzer;
    NSMutableSet *_loadersSet;
    NSMutableDictionary *_readyLoaders;
    NSHashTable *_unsafePromises;
}

@property (weak, nonatomic) id<BDPFileHandleLifecycleDelegate> delegate;
@property (retain, nonatomic) BDPODRXFileBasicModel *basic;
@property (nonatomic) int downloadMax;
@property (nonatomic) double createTime;
@property (nonatomic) long long loadStatus;
@property (nonatomic) long long createLoadStatus;
@property (retain, nonatomic) NSMutableDictionary *downloadingLoaders;
@property (retain, nonatomic) BDPQueue *unreadyLoaders;
@property (readonly, nonatomic) float loadProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)loadStatusForModel:(id)a0;
+ (id)handleWithBasicModel:(id)a0 delegate:(id)a1 error:(id *)a2;
+ (BOOL)allPackagesDownloadedForModel:(id)a0;
+ (long long)loadStatusForModel:(id)a0 pagePath:(id)a1;
+ (void)copyReuseableFilesIfNeededFromOldMeta:(id)a0 toMeta:(id)a1;
+ (long long)loadStatusForModel:(id)a0 pagePath:(id)a1 checkStatusBlk:(id /* block */)a2;
+ (id)fileModelWithBasicModel:(id)a0 pkgInfo:(id)a1;
+ (long long)checkExistSpFileWithModel:(id)a0 pkgInfo:(id)a1 ttModel:(id)a2;

- (BOOL)usedCacheMeta;
- (void)readDataWithRPath:(id)a0 pagePath:(id)a1 syncIfDownloaded:(BOOL)a2 dispatchQueue:(id)a3 completion:(id /* block */)a4;
- (void)preparePackageIfNeededWithFilePath:(id)a0 highPriority:(BOOL)a1 from:(long long)a2;
- (void)readDataWithFilePath:(id)a0 syncIfDownloaded:(BOOL)a1 dispatchQueue:(id)a2 completion:(id /* block */)a3;
- (id)urlOfDataWithFilePath:(id)a0 error:(id *)a1;
- (void)readDataWithFilePath:(id)a0 dispatchQueue:(id)a1 completion:(id /* block */)a2;
- (id)readDataWithFilePath:(id)a0 error:(id *)a1;
- (void)fileHandleDidLoadFromCache;
- (void)checkStartPageLoaderIfNeededWithPath:(id)a0;
- (void)addCompletionByPagePath:(id)a0 blk:(id /* block */)a1;
- (long long)createLoadStatusForPkgInfo:(id)a0;
- (long long)loadStatusForPagePath:(id)a0;
- (void)preparePackageIfNeededWithPagePath:(id)a0 highPriority:(BOOL)a1 from:(long long)a2;
- (void)getDependedPkgsFileInfosForPath:(id)a0 withCompletion:(id /* block */)a1;
- (long long)fileSizeInPkgAtPath:(id)a0;
- (void)readDataURLWithFilePath:(id)a0 dispatchQueue:(id)a1 completion:(id /* block */)a2;
- (void)addPkgHeaderDidParseBlk:(id /* block */)a0;
- (void)appContainerWillBeClosed;
- (void)cancelAllReadDataCompletionBlks;
- (void)addLoadProgressBlk:(id /* block */)a0;
- (void)removeAllLoadProgressBlks;
- (void)notifyPagePath:(id)a0 loadProgressBlk:(id /* block */)a1;
- (void)checkExistedFileInPkg:(id)a0 withCompletion:(id /* block */)a1;
- (void)getFileSizeInPkg:(id)a0 withCompletion:(id /* block */)a1;
- (void)getContentsOfDirAtPath:(id)a0 withCompletion:(id /* block */)a1;
- (void)addCompletionBlk:(id /* block */)a0;
- (BOOL)fileExistsInPkgAtPath:(id)a0;
- (id)contentsOfPkgDirAtPath:(id)a0;
- (BOOL)fileIsDirectoryInPkgAtPath:(id)a0;
- (long long)loadStatusForPagePath:(id)a0 withModel:(id)a1;
- (void)readDataFromMemoryPkgsWithPath:(id)a0 completion:(id /* block */)a1;
- (void)readDataFromMemoryPkgsWithStartPath:(id)a0 filePath:(id)a1 completion:(id /* block */)a2;
- (id)getPkgInfoWithPath:(id)a0;
- (id)initWithBasicModel:(id)a0 delegate:(id)a1 error:(id *)a2;
- (void)copyReuseableFilesIfNeededFromOldMeta:(id)a0;
- (void)startDownloadTask:(unsigned long long)a0;
- (void)stopDownloadTask;
- (void)pluginPkgLoaderPreConfigWithPkgInfo:(id)a0;
- (void)pr_preparePackageIfNeededWithPkgInfos:(id)a0 highPriority:(BOOL)a1 from:(long long)a2;
- (void)loader:(id)a0 notifyDownloadFinished:(id)a1 withError:(id)a2;
- (void)loader:(id)a0 retryDownloadTask:(id)a1 withError:(id)a2;
- (void).cxx_destruct;

@end
