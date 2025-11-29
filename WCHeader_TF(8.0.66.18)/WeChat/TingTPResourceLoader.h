@class NSMutableArray, NSString, WCDownloadArgsWrap, QMStreamEncrypt, NSMutableData, NSObject, WCPlayerDownloader;
@protocol OS_dispatch_queue, TingTPResourceLoaderDelegate;

@interface TingTPResourceLoader : NSObject <WCPlayerDownloaderDelegate, TPAssetResourceLoaderDelegate>

@property (retain, nonatomic) WCPlayerDownloader *downloader;
@property (copy, nonatomic) NSString *dataUrl;
@property (copy, nonatomic) NSString *decryptKey;
@property (copy, nonatomic) NSString *fileCacheId;
@property (copy, nonatomic) NSString *savePathSuffix;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain, nonatomic) NSMutableArray *arrPendingRequests;
@property (retain, nonatomic) WCDownloadArgsWrap *downloadArgs;
@property (retain, nonatomic) QMStreamEncrypt *streamEncryptor;
@property (nonatomic) BOOL hasClearFile;
@property (nonatomic) BOOL hasMoovReady;
@property (nonatomic) BOOL hasStartDownload;
@property (nonatomic) BOOL isLocalFile;
@property (nonatomic) unsigned long long callbackFileLength;
@property (retain, nonatomic) NSMutableData *decryptBuffer;
@property (nonatomic) BOOL needParseDecryptBuffer;
@property (nonatomic) BOOL hasPreload;
@property (nonatomic) int fileSize;
@property (weak, nonatomic) id<TingTPResourceLoaderDelegate> delegate;
@property (nonatomic) BOOL requestsAllDataToEndOfResource;
@property (nonatomic) long long decryptTotalTime;
@property (nonatomic) BOOL hitCache;
@property (nonatomic) BOOL hasDownloadComplete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataUrl:(id)a0 fileCacheId:(id)a1 pathSuffix:(id)a2 referer:(id)a3 decryptKey:(id)a4;
- (void)prepare;
- (BOOL)isEncrypt;
- (void)stopDownload;
- (void)setPreloadInfo:(BOOL)a0 fileSize:(int)a1;
- (void)tpResourceLoader:(id)a0 didCancelLoadingRequest:(id)a1;
- (BOOL)tpResourceLoader:(id)a0 shouldWaitForLoadingOfRequestedResource:(id)a1;
- (BOOL)fillInformationForRequest:(id)a0;
- (void)onReceiveNewLoadingRequest:(id)a0;
- (void)checkBufferTask;
- (void)processPendingRequests;
- (void)removeLoadingRequests:(id)a0;
- (BOOL)respondDataWithLoadingRequest:(id)a0;
- (id)createPlayArgs:(id)a0 downloadArgs:(id)a1;
- (BOOL)useSimpleDns;
- (unsigned long long)playerMode;
- (id)generateDownloadArgsWrap:(id)a0;
- (void)onDataDownloadSuccess:(id)a0;
- (void)onDataAvailable:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)onDataDownloadFail:(id)a0 retcode:(int)a1;
- (void)onDataDownloadFailWithExpired:(BOOL)a0;
- (void)onMoovReady:(id)a0;
- (id)parseMetaData;
- (id)parseMetaDataWithBuffer:(id)a0;
- (void)onDownloader:(id)a0 progressChange:(unsigned long long)a1 total:(unsigned long long)a2;
- (long long)fileLength;
- (void)deleteTargetFile;
- (void).cxx_destruct;

@end
