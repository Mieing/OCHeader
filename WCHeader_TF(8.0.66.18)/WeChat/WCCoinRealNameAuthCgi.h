@class WecoinRealNameAuthRequest;
@protocol WCCoinRealNameAuthCgiDelegate;

@interface WCCoinRealNameAuthCgi : WCBaseCgi

@property (retain, nonatomic) WecoinRealNameAuthRequest *request;
@property (weak, nonatomic) id<WCCoinRealNameAuthCgiDelegate> delegate;

- (id)init;
- (void)start;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
