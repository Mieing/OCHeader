@class NSLock, HMDHTTPRequestRecord, NSArray, NSString, NSThread, NSURLResponse, NSMutableArray, NSMutableData;

@interface HMDURLProtocol : NSURLProtocol <NSURLSessionTaskDelegate, NSURLSessionDataDelegate>

@property (retain, nonatomic) NSMutableData *data;
@property (retain, nonatomic) NSURLResponse *response;
@property (retain, nonatomic) HMDHTTPRequestRecord *httpRecord;
@property (retain, nonatomic) NSLock *dataLock;
@property (retain, nonatomic) NSMutableArray *redirectList;
@property (retain) NSThread *clientThread;
@property (copy) NSArray *clientModes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)changeCustomURLCaceheState:(id)a0;
+ (void)updateHMDURLProtocolConfig:(id)a0;
+ (void)enableSwizzleOptimize;
+ (void)doNotRegisterAllProtocols2NSURLSession;
+ (BOOL)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;
+ (void)stop;
+ (void)start;

- (void)URLSession:(id)a0 downloadTask:(SEL)a1 didFinishDownloadingToURL:(void /* unknown type, empty encoding */)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (void)_flex_swizzle_4b25c0c9_URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)_flex_swizzle_3ecdcfd2_URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)_flex_swizzle_4096e9b0_URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)_flex_swizzle_5fc0ef4_URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)didStartRecording;
- (void)performOnSessionQueue:(id /* block */)a0;
- (void)updateNetMonitorRecordForUrlSession;
- (void)__recordTrafficInfoWithRecord:(id)a0;
- (void)updateNetMonitorRecordForSDKWithSuccess:(BOOL)a0;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)startLoading;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)stopLoading;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)didFinishRecording;

@end
