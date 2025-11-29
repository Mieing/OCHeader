@class NSString, BDECIMClientConfig;

@interface BDECIMCloudTIMXNetworkImp : NSObject <TIMXClientProtocol>

@property (retain, nonatomic) BDECIMClientConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendRequestWithMethod:(id)a0 url:(id)a1 timeout:(double)a2 priority:(float)a3 headers:(id)a4 body:(id)a5 withCallback:(id /* block */)a6;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
