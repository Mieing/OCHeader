@class NSString, NSCache, NSURLSession;

@interface WCSightLoader : MMUserService <NSURLSessionDelegate, NSURLSessionDownloadDelegate, WCFacadeExt, MMServiceProtocol>

@property (retain, nonatomic) NSString *sightCacheDirectory;
@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSCache *observerCache;
@property (retain, nonatomic) NSCache *downloadItemCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (unsigned long long)preCleanGetCacheSize;

- (void)onServiceInit;
- (void)onServiceClearData;
- (id)sightPathForUrl:(id)a0;
- (BOOL)saveSightAtPath:(id)a0 forUrl:(id)a1;
- (void)loadSightForUrl:(id)a0 Observer:(id)a1 atScene:(unsigned int)a2 isPreload:(BOOL)a3;
- (id)md5ForURL:(id)a0;
- (id)genMp4PathForUrl:(id)a0;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)onDownloadFinish:(id)a0 downloadType:(long long)a1;
- (void).cxx_destruct;

@end
