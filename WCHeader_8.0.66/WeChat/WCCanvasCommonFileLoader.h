@class NSMutableDictionary, NSMutableArray;

@interface WCCanvasCommonFileLoader : MMObject <ICdnComMgrExt>

@property (retain, nonatomic) NSMutableDictionary *requestObjectDict;
@property (retain, nonatomic) NSMutableArray *waittingRequestObjectQueue;
@property (retain, nonatomic) NSMutableArray *downloadingRequestObjectQueue;

+ (id)fetchCommonFileBasePath;
+ (id)fetchCommonFileDownloadTmpPath;
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (unsigned long long)preCleanGetCacheSize;

- (id)init;
- (void)dealloc;
- (void)stopAllDownloads;
- (id)fetchCommonFilePathWithUrl:(id)a0 fileMD5:(id)a1;
- (void)loadCommonFileWithUrl:(id)a0 fileMD5:(id)a1;
- (void)retryToDownloadForRequestObject:(id)a0;
- (void)resumeToDownloadNextRequest;
- (void)downloadDoneForUrl:(id)a0 fileMD5:(id)a1;
- (void)notifyDownloadDoneEventForUrl:(id)a0 fileMD5:(id)a1;
- (void)OnCdnDownload:(id)a0;
- (void)verifyDownloadFileWithUrl:(id)a0 fileMD5:(id)a1 tmpPath:(id)a2;
- (id)generateFilePathWithUrl:(id)a0 fileMD5:(id)a1;
- (id)generateFileTempPathWithUrl:(id)a0 fileMD5:(id)a1;
- (id)generateFileKeyWithUrl:(id)a0 fileMD5:(id)a1;
- (id)generateRequestObjectWithUrl:(id)a0 fileMD5:(id)a1 filePath:(id)a2 requestKey:(id)a3;
- (void)idKeyReportForKey:(unsigned int)a0;
- (void).cxx_destruct;

@end
