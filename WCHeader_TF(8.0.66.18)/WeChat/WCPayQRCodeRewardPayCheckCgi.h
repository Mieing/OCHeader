@protocol WCPayQRCodeRewardPayCheckCgiDelegate;

@interface WCPayQRCodeRewardPayCheckCgi : WCPayBaseCgi

@property (weak, nonatomic) id<WCPayQRCodeRewardPayCheckCgiDelegate> cgiDelegate;

- (id)initWithDelegate:(id)a0 request:(id)a1;
- (void)startRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
