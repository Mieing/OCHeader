@protocol BDHMXNetworkProtocol;

@interface BDHMXNetworkManager : NSObject

@property (retain, nonatomic) id<BDHMXNetworkProtocol> activeManager;
@property (retain, nonatomic) id<BDHMXNetworkProtocol> urlSessionManager;
@property (nonatomic) BOOL forceUseURLSession;
@property (nonatomic) BOOL disableNetworkRequest;

+ (id)sharedInstance;

- (id)validManager;
- (void)requestWithURL:(id)a0 method:(id)a1 headerField:(id)a2 params:(id)a3 useAutoTagInfo:(BOOL)a4 callBack:(id /* block */)a5;
- (void).cxx_destruct;
- (id)init;

@end
