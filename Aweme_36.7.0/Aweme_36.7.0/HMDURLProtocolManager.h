@class NSURLSession, NSString, HMDThreadSafeDictionary, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface HMDURLProtocolManager : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *session_queue;
@property (retain, nonatomic) HMDThreadSafeDictionary *taskDict;
@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSOperationQueue *delegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)URLSession:(id)a0 downloadTask:(SEL)a1 didFinishDownloadingToURL:(void /* unknown type, empty encoding */)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (void)_flex_swizzle_6f624fda_URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)_flex_swizzle_b5d5ed71_URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)_flex_swizzle_87ddc563_URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)_flex_swizzle_466dbfb5_URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (id)generateDataTaskWithURLRequest:(id)a0 underlyingDelegate:(id)a1;
- (id)underlyingDelgateForTaskIdentifier:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (id)init;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;

@end
