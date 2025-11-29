@class NSString, NSURLResponse, NSURLSessionDataTask, NSURLRequest, NSMutableData;

@interface IESForestNSURLSessionFetcher : IESForestBaseFetcher <NSURLSessionDataDelegate, IESForestStreamFetcherProtocol>

@property (weak) NSURLSessionDataTask *task;
@property (copy, nonatomic) id /* block */ redirectHandler;
@property (copy, nonatomic) id /* block */ headerHandler;
@property (copy, nonatomic) id /* block */ dataHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSURLRequest *urlRequest;
@property (retain, nonatomic) NSURLRequest *redirectNewRequest;
@property (retain, nonatomic) NSURLResponse *redirectOldResponse;
@property (retain, nonatomic) NSURLResponse *nsURLResponse;
@property (retain, nonatomic) NSMutableData *receivedData;
@property (nonatomic) BOOL isDataReceived;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *name;

+ (id)sharedDemux;
+ (id)fetcherName;

- (void)URLSession:(id)a0 downloadTask:(SEL)a1 didFinishDownloadingToURL:(void /* unknown type, empty encoding */)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (void)_flex_swizzle_d6bf89c8_URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)_flex_swizzle_fe58ae94_URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)_flex_swizzle_69d25813_URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)_flex_swizzle_672ecf6b_URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)fetchResourceWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)fetchResourceWithRequest:(id)a0 redirectHandler:(id /* block */)a1 headerHandler:(id /* block */)a2 dataHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)invokeCompletionHandler:(id /* block */)a0 response:(id)a1 error:(id)a2;
- (void)processHeader:(id)a0 response:(id)a1 headerHandler:(id /* block */)a2;
- (void)processChunkData:(id)a0 dataHandler:(id /* block */)a1;
- (void)processCompletion:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)_fetchResourceWithRequest:(id)a0;
- (void)processRedirect:(id)a0 oldResponse:(id)a1 redirectHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (id)init;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)cancelFetch;

@end
