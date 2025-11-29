@class NSObject, NSString, BU_AFHTTPSessionManager;
@protocol OS_dispatch_queue, BUADResponseSerializerProtocol, BUADRequestSerializerProtocol;

@interface BUADServiceRequest : NSObject <BUADRequestProtocol>

@property (retain, nonatomic) BU_AFHTTPSessionManager *httpManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (retain, nonatomic) id<BUADRequestSerializerProtocol> requestSerializer;
@property (retain, nonatomic) id<BUADResponseSerializerProtocol> responseSerializer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)evaluateServerTrust:(struct __SecTrust { } *)a0 forDomain:(id)a1;
- (void)setSessionDidReceiveAuthenticationChallengeBlock:(id /* block */)a0;
- (id)dataTaskWithRequest:(id)a0 uploadProgress:(id /* block */)a1 downloadProgress:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)dataTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setDelegate:(id)a0;
- (void)_setupData;

@end
