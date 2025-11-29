@class NSString, NSURLSessionTask, NSDictionary, NSData, NSMutableData, BDDownloadURLSessionManager, NSNumber;

@interface BDDownloadURLSessionTask : BDDownloadTask <NSURLSessionDownloadDelegate, NSURLSessionDataDelegate, BDWebImageDownloadTaskResponseInfo>

@property (copy, nonatomic) NSDictionary *HTTPResponseHeaders;
@property (copy, nonatomic) NSDictionary *HTTPRequestHeaders;
@property (retain, nonatomic) NSData *resumeData;
@property (retain, nonatomic) NSMutableData *imageData;
@property (nonatomic) BOOL hasContentLength;
@property (retain) NSURLSessionTask *task;
@property (weak, nonatomic) BDDownloadURLSessionManager *sessionManager;
@property (retain, nonatomic) NSNumber *DNSDuration;
@property (retain, nonatomic) NSNumber *connetDuration;
@property (retain, nonatomic) NSNumber *sslDuration;
@property (retain, nonatomic) NSNumber *sendDuration;
@property (retain, nonatomic) NSNumber *waitDuration;
@property (retain, nonatomic) NSNumber *receiveDuration;
@property (retain, nonatomic) NSNumber *totalDuration;
@property (nonatomic) long long cacheControlTime;
@property (retain, nonatomic) NSNumber *isSocketReused;
@property (retain, nonatomic) NSNumber *isFromProxy;
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
@property (readonly, nonatomic) NSNumber *isCached;
@property (readonly, copy, nonatomic) NSString *remoteIP;
@property (readonly, nonatomic) NSNumber *remotePort;
@property (readonly, copy, nonatomic) NSString *requestLog;

- (void)_flex_swizzle_75164684_URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)_flex_swizzle_f30e2ff7_URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (void)_flex_swizzle_4a923ae6_URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)_flex_swizzle_bd52c756_URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)_flex_swizzle_2dd75c3a_URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)resetTask;
- (void)saveTempInfo;
- (void)cleanTempFile;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didResumeAtOffset:(long long)a2 expectedTotalBytes:(long long)a3;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)start;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)_cancel;
- (void)dealloc;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;

@end
