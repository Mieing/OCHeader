@class NSDate, NSString, NSArray, IESFalconStatModel, TTHttpTask, BDWebViewPreloadTask, NSURLRequest, NSURLSessionDataTask;
@protocol BDWebURLProtocolTask;

@interface IESFalconURLProtocol : NSURLProtocol <NSURLSessionDataDelegate, BDWebURLSchemeProtocolClass>

@property (retain, nonatomic) TTHttpTask *httpTask;
@property (copy, nonatomic) NSURLRequest *fixedRequest;
@property (nonatomic) BOOL hasReceivedData;
@property (retain) id<BDWebURLProtocolTask> urlProtocolTask;
@property (nonatomic) double httpTaskStartTime;
@property (retain, nonatomic) BDWebViewPreloadTask *preloadTask;
@property (retain) NSURLSessionDataTask *task;
@property (copy) NSArray *modes;
@property (retain) NSDate *onlineStartDate;
@property (retain) IESFalconStatModel *onlineStatModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)falconMonitorResponseHeaders;
+ (id)sharedDemux;
+ (id)httpURLResponseHeaders:(id)a0;
+ (id)responseHeaderStringFromDic:(id)a0;
+ (id)falconFixedRequest:(id)a0;
+ (BOOL)canInitWithSchemeTask:(id)a0;
+ (id)ttnetResponseTimingInfo:(id)a0;
+ (id)ttnetResponseHeaders:(id)a0;
+ (id)temporaryResponseDataHash;
+ (BOOL)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;

- (void)URLSession:(id)a0 downloadTask:(SEL)a1 didFinishDownloadingToURL:(void /* unknown type, empty encoding */)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (void)_flex_swizzle_358aa259_URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)_flex_swizzle_ec26ffb4_URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)_flex_swizzle_aa76a986_URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)_flex_swizzle_141035e6_URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)recordURLSession:(id)a0 task:(id)a1 finishWithError:(id)a2;
- (void)recordOnlineStatIfNeeded;
- (void)startLoadingWithWebView:(id)a0;
- (void)webView:(id)a0 willRecordMainFrameModel:(id)a1;
- (void)handleTTNetworkHeaderResponse:(id)a0;
- (void)handleTTNetworkDataResponse:(id)a0;
- (void)handleTTNetworkFinishResponse:(id)a0 withObj:(id)a1 withError:(id)a2;
- (void)handleTTNetworkRedrectResponse:(id)a0 withNewLocation:(id)a1;
- (BOOL)_willCallLoadingFailedWithResponse:(id)a0 withError:(id)a1;
- (void)recordTTNetResponse:(id)a0 withError:(id)a1;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)startLoading;
- (void)stopLoading;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;

@end
