@class NSString, NSURLSessionDataTask;
@protocol BDWebURLSchemeTask;

@interface BDWebDefaultURLSchemaHandler : NSObject <NSURLSessionDataDelegate, BDWebURLSchemeTaskHandler>

@property (retain) id<BDWebURLSchemeTask> schemaTask;
@property (retain) NSURLSessionDataTask *task;
@property (nonatomic) double httpTaskStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)falconMonitorResponseHeaders;
+ (BOOL)useRecursiveRequestFlagCheck;
+ (id)sharedDemux;
+ (id)httpURLResponseHeaders:(id)a0;
+ (id)responseHeaderStringFromDic:(id)a0;
+ (id)sharedCallbackQueue;
+ (BOOL)bdw_canHandleRequest:(id)a0;

- (void)URLSession:(id)a0 downloadTask:(SEL)a1 didFinishDownloadingToURL:(void /* unknown type, empty encoding */)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (void)_flex_swizzle_7c006e71_URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)_flex_swizzle_266cce34_URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)_flex_swizzle_be05e61b_URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)_flex_swizzle_f5d94454_URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (id)initWithWebView:(id)a0 schemeTask:(id)a1;
- (void)recordURLSession:(id)a0 task:(id)a1 finishWithError:(id)a2;
- (void)bdw_startURLSchemeTask;
- (void)bdw_stopURLSchemeTask;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;

@end
