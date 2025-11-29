@class NSString, NSURLSessionDataTask, NSURLSession;

@interface AVMDLiOSNetwork : NSObject <NSURLSessionDelegate, AVMDLiOSNetClientProtocol>

@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSURLSessionDataTask *urlRequest;
@property (nonatomic) BOOL didCallCancel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)evaluateServerTrust:(struct __SecTrust { } *)a0 forDomain:(id)a1;
- (void)configTaskWithURL:(id)a0 params:(id)a1 headers:(id)a2 completion:(id /* block */)a3;
- (void)invalidAndCancel;
- (id)_splitUrl:(id)a0 params:(id)a1;
- (BOOL)cancelled;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithTimeout:(double)a0;
- (void)resume;
- (void)dealloc;
- (void)cancel;

@end
