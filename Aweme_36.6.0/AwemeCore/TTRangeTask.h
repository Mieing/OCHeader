@class TTRangeManager, NSMutableDictionary, NSString, NSURL, TTUrlStrategy, DownloadGlobalParameters, TTRangeTracker;
@protocol TTDownloadTaskProtocol;

@interface TTRangeTask : NSObject <TTDownloadTaskProtocol>

@property (retain) NSMutableDictionary *headers;
@property BOOL isNeedCommonParams;
@property (copy) id /* block */ realProgressCallback;
@property (copy) id /* block */ realCompletedCallback;
@property (retain) NSURL *fileSavePath;
@property (retain) NSString *fileSavePathStr;
@property (retain) TTRangeManager *rangeManager;
@property (retain) TTUrlStrategy *urlStrategy;
@property (copy) id /* block */ realHeaderCallback;
@property (retain) id<TTDownloadTaskProtocol> ttnetTask;
@property long long throttleSpeed;
@property long long downloadedLen;
@property long long sliceTotalLen;
@property long long currRangeTotalLen;
@property BOOL isFrist;
@property char remainRetryTimes;
@property (retain) TTRangeTracker *rangeTracker;
@property (copy) NSString *currUrl;
@property BOOL isPcdnType;
@property long long lastLen;
@property (copy) id /* block */ onPcdnStart;
@property (copy) id /* block */ onPcdnEnd;
@property (copy) id /* block */ onCdnStart;
@property (copy) id /* block */ onCdnEnd;
@property BOOL isTrySwitchCdn;
@property (nonatomic) DownloadGlobalParameters *param;
@property (nonatomic) double protectTimeout;
@property (nonatomic) double recvHeaderTimeout;
@property (nonatomic) double readDataTimeout;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) BOOL isHttpCacheEnable;
@property (nonatomic) BOOL isSkipSSLCertificateError;
@property (nonatomic) BOOL isSlice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setThrottleNetSpeed:(long long)a0;
- (BOOL)updateNewRange;
- (void)start:(id /* block */)a0 progressCallback:(id /* block */)a1 completedCallback:(id /* block */)a2;
- (void)setEnableHttpCache:(BOOL)a0;
- (void)setHeaderCallback:(id /* block */)a0;
- (void)setSkipSSLCertificateError:(BOOL)a0;
- (id)initWithParam:(id)a0 cdnUrlsArray:(id)a1 firstSuccessUrl:(id)a2 bizId:(id)a3 urlStrategy:(long long)a4 startRange:(long long)a5 endRange:(long long)a6 stepLen:(long long)a7 headerField:(id)a8 needCommonParams:(BOOL)a9 sliceFullPath:(id)a10 fileSavePath:(id)a11 remainRetryTimes:(char)a12 progressCallback:(id /* block */)a13 completionHandler:(id /* block */)a14 pcdnStartCallback:(id /* block */)a15 pcdnEndCallback:(id /* block */)a16 cdnStartCallback:(id /* block */)a17 cdnEndCallback:(id /* block */)a18 param:(id)a19 isSlice:(BOOL)a20;
- (id)getRangeTracker;
- (void)trySwitchCdn;
- (void).cxx_destruct;
- (void)resume;
- (void)dealloc;
- (void)cancel;

@end
