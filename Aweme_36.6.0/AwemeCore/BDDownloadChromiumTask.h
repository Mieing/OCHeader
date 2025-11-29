@class NSString, NSProgress, NSDictionary, NSMutableData, TTHttpTask, NSNumber;

@interface BDDownloadChromiumTask : BDDownloadTask <BDWebImageDownloadTaskResponseInfo>

@property (retain, nonatomic) NSProgress *downloadProgress;
@property (nonatomic) long long expectedSize;
@property (nonatomic) long long realSize;
@property (retain, nonatomic) NSMutableData *imageData;
@property (retain, nonatomic) TTHttpTask *task;
@property (retain, nonatomic) NSNumber *DNSDuration;
@property (retain, nonatomic) NSNumber *connetDuration;
@property (retain, nonatomic) NSNumber *sslDuration;
@property (retain, nonatomic) NSNumber *sendDuration;
@property (retain, nonatomic) NSNumber *waitDuration;
@property (retain, nonatomic) NSNumber *receiveDuration;
@property (retain, nonatomic) NSNumber *totalDuration;
@property (nonatomic) long long cacheControlTime;
@property (retain, nonatomic) NSNumber *isSocketReused;
@property (retain, nonatomic) NSNumber *isCached;
@property (retain, nonatomic) NSNumber *isFromProxy;
@property (copy, nonatomic) NSString *remoteIP;
@property (retain, nonatomic) NSNumber *remotePort;
@property (copy, nonatomic) NSString *requestLog;
@property (copy, nonatomic) NSString *mimeType;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *nwSessionTrace;
@property (copy, nonatomic) NSDictionary *responseHeaders;
@property (retain, nonatomic) NSNumber *isHitCDNCache;
@property (copy, nonatomic) NSString *imageXDemotion;
@property (copy, nonatomic) NSString *imageXWantedFormat;
@property (copy, nonatomic) NSString *imageXRealGotFormat;
@property (retain, nonatomic) NSNumber *imageXConsistent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)callbackActionWithError:(id)a0 Obj:(id)a1 response:(id)a2;
- (void)responseCache:(id)a0;
- (id)creat_complete_handle_queue;
- (id)creat_prefetch_request_complete_handle_queue;
- (id)creat_normal_request_complete_handle_queue;
- (id)creat_origin_complete_handle_queue;
- (void)_updateThrottleNetSpeed:(long long)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)start;
- (void)_cancel;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)startDownload;

@end
