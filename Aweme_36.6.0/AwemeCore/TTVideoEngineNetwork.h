@class NSString, NSURLSessionDataTask, NSURLSession;

@interface TTVideoEngineNetwork : NSObject <TTVideoEngineNetClient>

@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSURLSessionDataTask *urlRequest;
@property (nonatomic) double timeout;
@property (nonatomic) BOOL useEphemeralSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)evaluateServerTrust:(struct __SecTrust { } *)a0 forDomain:(id)a1;
- (void)configTaskWithURL:(id)a0 params:(id)a1 headers:(id)a2 completion:(id /* block */)a3;
- (void)configTaskWithURL:(id)a0 completion:(id /* block */)a1;
- (void)invalidAndCancel;
- (void)configPostTaskWithURL:(id)a0 params:(id)a1 headers:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithTimeout:(double)a0;
- (void)resume;
- (void)cancel;
- (void)setupSession;

@end
