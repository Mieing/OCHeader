@class IESLiveGameOpenPlatformRequestSerializer, NSURLSession, IESLiveGameOpenPlatformResponseSerializer, NSString, NSURLSessionConfiguration;

@interface IESLiveGameOpenPlatformHTTPSessionManager : NSObject <NSURLSessionTaskDelegate>

@property (retain, nonatomic) IESLiveGameOpenPlatformRequestSerializer *requestSerializer;
@property (retain, nonatomic) IESLiveGameOpenPlatformResponseSerializer *responseSerializer;
@property (retain, nonatomic) NSURLSessionConfiguration *sessionConfiguration;
@property (retain, nonatomic) NSURLSession *session;
@property (nonatomic) double globalTimeout;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 downloadTask:(SEL)a1 didFinishDownloadingToURL:(void /* unknown type, empty encoding */)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)_flex_swizzle_fef2b1fd_URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)didSetAttachingDIContext;
- (id)requestWithHTTPMethod:(id)a0 URLString:(id)a1 data:(id)a2 headers:(id)a3 timeout:(double)a4 success:(id /* block */)a5 failure:(id /* block */)a6;
- (void)setupCommonHeader;
- (id)dataTaskWithHTTPMethod:(id)a0 URLString:(id)a1 data:(id)a2 headers:(id)a3 timeout:(double)a4 success:(id /* block */)a5 failure:(id /* block */)a6;
- (id)dataTaskWithHTTPMethod:(id)a0 URLString:(id)a1 data:(id)a2 headers:(id)a3 timeout:(double)a4 completionHandler:(id /* block */)a5;
- (id)requestWithRequestModel:(id)a0;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (id)init;

@end
