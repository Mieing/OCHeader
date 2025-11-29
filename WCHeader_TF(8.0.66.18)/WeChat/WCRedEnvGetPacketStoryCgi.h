@protocol WCRedEnvGetPacketStoryCgiDelegate;

@interface WCRedEnvGetPacketStoryCgi : WCPayBaseCgi

@property (weak, nonatomic) id<WCRedEnvGetPacketStoryCgiDelegate> cgiDelegate;

- (id)initWithDelegate:(id)a0;
- (void)startWithRequest:(id)a0;
- (void)didGetLocalResponse:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void)saveStoryInfo:(id)a0;
- (id)getLocalStoryInfo:(id)a0;
- (unsigned long long)getCgiNewDNSBusinessType;
- (void).cxx_destruct;

@end
