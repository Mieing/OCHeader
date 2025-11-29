@class NSURLSession, NSString, NSTimer, GTMSessionFetcherService, NSMutableDictionary;

@interface GTMSessionFetcherSessionDelegateDispatcher : NSObject <NSURLSessionDelegate> {
    GTMSessionFetcherService *_parentService;
    NSMutableDictionary *_taskToFetcherMap;
    NSTimer *_discardTimer;
}

@property (retain) NSURLSession *session;
@property double discardInterval;
@property (readonly) NSTimer *discardTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_flex_swizzle_2ceed203_URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)_flex_swizzle_b189caeb_URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)_flex_swizzle_9e4590b3_URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (void)_flex_swizzle_e8f2c0ca_URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)_flex_swizzle_230b13aa_URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)_flex_swizzle_e636e9d0_URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)_flex_swizzle_dc9d9471_URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (id)initWithParentService:(id)a0 sessionDiscardInterval:(double)a1;
- (void)startSessionUsage;
- (void)setFetcher:(id)a0 forTask:(id)a1;
- (void)removeFetcher:(id)a0;
- (void)discardTimerFired:(id)a0;
- (void)destroySessionAndTimer;
- (void)destroyDiscardTimer;
- (void)startDiscardTimer;
- (id)fetcherForTask:(id)a0;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didResumeAtOffset:(long long)a2 expectedTotalBytes:(long long)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 willCacheResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 needNewBodyStream:(id /* block */)a2;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (id)init;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)removeTaskFromMap:(id)a0;
- (void)abandon;

@end
