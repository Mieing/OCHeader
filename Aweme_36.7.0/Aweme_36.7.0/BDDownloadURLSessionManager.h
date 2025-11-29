@class NSURLSession, NSString, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface BDDownloadURLSessionManager : BDDownloadManager <NSURLSessionDownloadDelegate, NSURLSessionDataDelegate, BDDownloadTaskDelegate> {
    NSObject<OS_dispatch_queue> *_session_queue;
}

@property (retain, nonatomic) NSOperationQueue *delegateQueue;
@property (retain, nonatomic) NSURLSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_flex_swizzle_85a2fc57_URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)_flex_swizzle_93e6d123_URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (void)_flex_swizzle_19699267_URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)_flex_swizzle_3f0c1a24_URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)_flex_swizzle_6bbdb256_URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)downloadTask:(id)a0 didReceiveData:(id)a1 finished:(BOOL)a2;
- (id)_creatTaskWithURL:(id)a0 identifier:(id)a1 timeout:(double)a2;
- (Class)downloadTaskClass;
- (id)taskWithTaskIdentifier:(long long)a0;
- (id)_taskWithTaskStringIdentifier:(id)a0;
- (id)_bdTaskWithSessionTask:(id)a0;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didResumeAtOffset:(long long)a2 expectedTotalBytes:(long long)a3;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (id)init;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;

@end
