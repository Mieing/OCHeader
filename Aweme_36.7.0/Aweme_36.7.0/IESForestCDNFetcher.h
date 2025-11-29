@class NSURLRequest, NSString, NSURLResponse, NSMutableData, NSMutableArray, TTHttpTask;

@interface IESForestCDNFetcher : IESForestBaseFetcher <IESForestStreamFetcherProtocol>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double startTime;
@property (retain, nonatomic) NSMutableArray *debugMessages;
@property (retain, nonatomic) TTHttpTask *ttHttpTask;
@property (retain, nonatomic) NSURLRequest *redirectNewRequest;
@property (retain, nonatomic) NSURLResponse *redirectOldResponse;
@property (retain, nonatomic) NSURLResponse *nsURLResponse;
@property (retain, nonatomic) NSMutableData *receivedData;
@property (nonatomic) BOOL isDataReceived;

+ (id)fetcherName;
+ (id)canRetryStatusCode;

- (BOOL)_willCallLoadingFailedWithResponse:(id)a0 withError:(id)a1;
- (void)fetchResourceWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)fetchResourceWithRequest:(id)a0 redirectHandler:(id /* block */)a1 headerHandler:(id /* block */)a2 dataHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)invokeCompletionHandler:(id /* block */)a0 response:(id)a1 error:(id)a2;
- (void)_fetchResourceWithRequest:(id)a0 redirectHandler:(id /* block */)a1 headerHandler:(id /* block */)a2 dataHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)appendDebugMessage:(id)a0 error:(id)a1;
- (void)processRedirect:(id)a0 newLocation:(id)a1 oldResponse:(id)a2 redirectHandler:(id /* block */)a3;
- (void)processHeader:(id)a0 response:(id)a1 headerHandler:(id /* block */)a2;
- (void)processChunkData:(id)a0 dataHandler:(id /* block */)a1;
- (void)processCompletion:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchResourceWithURLs:(id)a0 completion:(id /* block */)a1;
- (void)_fetchResourceWithSourceURL:(id)a0 retryTimes:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (id)debugMessage;
- (void)cancelFetch;

@end
