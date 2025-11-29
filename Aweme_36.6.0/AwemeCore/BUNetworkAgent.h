@class NSString, NSMutableDictionary, NSObject;
@protocol BUADServiceNetProtocol, BUADRequestProtocol, BUADJsonResponseSerializerProtocol, OS_dispatch_queue;

@interface BUNetworkAgent : NSObject <NSURLSessionTaskDelegate> {
    NSMutableDictionary *_requestsRecord;
    NSObject<OS_dispatch_queue> *_processingQueue;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) id<BUADServiceNetProtocol> netProtocolImp;
@property (retain, nonatomic) id<BUADJsonResponseSerializerProtocol> jsonResponseSerializer;
@property (retain, nonatomic) id<BUADRequestProtocol> httpRequestManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)openNetWorkDebug;
+ (id)sharedAgent;

- (BOOL)evaluateServerTrust:(struct __SecTrust { } *)a0 forDomain:(id)a1;
- (id)buildRequestUrl:(id)a0;
- (id)requestSerializerForRequest:(id)a0;
- (id)dataTaskWithHTTPMethod:(id)a0 requestSerializer:(id)a1 URLString:(id)a2 parameters:(id)a3 useHTTP3:(BOOL)a4 error:(id *)a5;
- (id)dataTaskWithHTTPMethod:(id)a0 requestSerializer:(id)a1 URLString:(id)a2 httpBody:(id)a3 parameters:(id)a4 useHTTP3:(BOOL)a5 error:(id *)a6;
- (id)sessionTaskForRequest:(id)a0 error:(id *)a1;
- (void)requestDidFailWithRequest:(id)a0 error:(id)a1 fromRequest:(BOOL)a2;
- (void)addRequestToRecord:(id)a0;
- (void)removeRequestFromRecord:(id)a0;
- (unsigned long long)stringEncodingWithRequest:(id)a0;
- (void)requestDidSucceedWithRequest:(id)a0;
- (void)handleRequestResult:(id)a0 responseObject:(id)a1 error:(id)a2;
- (void)setSessionDidReceiveAuthenticationChanllengeBlock:(id /* block */)a0;
- (void)cancelAllRequests;
- (void).cxx_destruct;
- (id)init;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)cancelRequest:(id)a0;
- (void)addRequest:(id)a0;

@end
