@class NSString, WKWebView, NSURLSessionDataTask, NSDate, IESFalconStatModel;
@protocol BDWebURLSchemeTask;

@interface BDWebFalconURLSchemaHandler : NSObject <NSURLSessionDataDelegate, BDWebURLSchemeTaskHandler>

@property (retain) id<BDWebURLSchemeTask> schemaTask;
@property (retain) NSURLSessionDataTask *task;
@property (retain) NSDate *onlineStartDate;
@property (retain) IESFalconStatModel *onlineStatModel;
@property (weak) WKWebView *webview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDemux;
+ (BOOL)bdw_canHandleRequest:(id)a0;
+ (BOOL)bdw_canHandleRequest:(id)a0 webview:(id)a1;
+ (id)falconFixedRequest:(id)a0;

- (void)URLSession:(id)a0 downloadTask:(SEL)a1 didFinishDownloadingToURL:(void /* unknown type, empty encoding */)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (void)_flex_swizzle_cc890a3d_URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)_flex_swizzle_1959287_URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)_flex_swizzle_2c1e13f0_URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)_flex_swizzle_bdf3d974_URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (id)initWithWebView:(id)a0 schemeTask:(id)a1;
- (void)bdw_startURLSchemeTask;
- (void)bdw_stopURLSchemeTask;
- (void)recordOnlineStatIfNeeded;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;

@end
