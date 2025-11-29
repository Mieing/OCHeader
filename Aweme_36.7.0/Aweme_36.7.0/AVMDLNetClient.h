@class NSString;
@protocol TTVideoEngineNetClient;

@interface AVMDLNetClient : NSObject <AVMDLiOSNetClientProtocol>

@property (retain, nonatomic) id<TTVideoEngineNetClient> networkSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setNetClientV1:(id /* block */)a0;

- (void)configTaskWithURL:(id)a0 params:(id)a1 headers:(id)a2 completion:(id /* block */)a3;
- (void)invalidAndCancel;
- (void).cxx_destruct;
- (id)init;
- (void)resume;

@end
