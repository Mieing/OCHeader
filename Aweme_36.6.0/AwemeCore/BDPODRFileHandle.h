@class NSError, NSString, NSFileHandle, BDPODRFileDownloader, BDPODRXDepAnalyzer, NSMutableDictionary, BDPODRXFileBasicModel, NSMutableSet, BDPSTLQueue, NSObject;
@protocol OS_dispatch_queue, BDPFileHandleLifecycleDelegate;

@interface BDPODRFileHandle : NSObject <BDPODRXResolveDelegate, BDPFileHandleFullProtocol> {
    BDPODRFileDownloader *_downloader;
    NSObject<OS_dispatch_queue> *_readOperationProcessQueue;
    NSObject<OS_dispatch_queue> *_fileReadProcessQueue;
    NSError *_loadError;
    BDPODRXDepAnalyzer *_depAnalyzer;
}

@property (retain, nonatomic) BDPODRXFileBasicModel *model;
@property (retain, nonatomic) NSMutableDictionary *downloadProgressBlkDic;
@property (retain, nonatomic) BDPSTLQueue *downloadCompletionQueue;
@property (retain, nonatomic) BDPSTLQueue *fileInfoQueue;
@property (retain, nonatomic) NSMutableSet *fileTaskSet;
@property (nonatomic) long long loadStatus;
@property (nonatomic) long long createLoadStatus;
@property (nonatomic) double downloadProgress;
@property (copy, nonatomic) NSString *appFolderPath;
@property (nonatomic) unsigned long long originalFileOffset;
@property (nonatomic) unsigned long long downloadOffset;
@property (copy, nonatomic) NSString *protectTempPath;
@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (retain, nonatomic) NSError *downloadError;
@property (copy, nonatomic) NSString *downloadScene;
@property (readonly, weak, nonatomic) id<BDPFileHandleLifecycleDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)loadStatusForModel:(id)a0;
+ (id)handleWithBasicModel:(id)a0 delegate:(id)a1 error:(id *)a2;
+ (BOOL)allPackagesDownloadedForModel:(id)a0;

- (id)basic;
- (BOOL)usedCacheMeta;
- (void)readDataWithRPath:(id)a0 pagePath:(id)a1 syncIfDownloaded:(BOOL)a2 dispatchQueue:(id)a3 completion:(id /* block */)a4;
- (void)readDataWithFilePath:(id)a0 syncIfDownloaded:(BOOL)a1 dispatchQueue:(id)a2 completion:(id /* block */)a3;
- (id)urlOfDataWithFilePath:(id)a0 error:(id *)a1;
- (void)readDataWithFilePath:(id)a0 dispatchQueue:(id)a1 completion:(id /* block */)a2;
- (id)readDataWithFilePath:(id)a0 error:(id *)a1;
- (void)fileHandleDidLoadFromCache;
- (void)addCompletionByPagePath:(id)a0 blk:(id /* block */)a1;
- (long long)loadStatusForPagePath:(id)a0;
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
- (void)readDataFromMemoryPkgsWithPath:(id)a0 completion:(id /* block */)a1;
- (void)readDataFromMemoryPkgsWithStartPath:(id)a0 filePath:(id)a1 completion:(id /* block */)a2;
- (id)getPkgInfoWithPath:(id)a0;
- (id)initWithBasicModel:(id)a0 delegate:(id)a1 error:(id *)a2;
- (void)updateAcessInfo;
- (void)updateBasicInfo;
- (void)_startDownloadODR;
- (void)_handleDownloadFinishedWithError:(id)a0;
- (void)_clearDecompressODRFileResource;
- (void)startDownloadTask:(unsigned long long)a0;
- (void)stopDownloadTask;
- (void).cxx_destruct;
- (void)dealloc;

@end
