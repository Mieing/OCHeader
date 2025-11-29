@protocol WCPayLQTClickRedeemCgiDelegate;

@interface WCPayLQTClickRedeemCgi : WCPayBaseCgi

@property (weak, nonatomic) id<WCPayLQTClickRedeemCgiDelegate> cgiDelegate;
@property BOOL fromServer;

- (id)initWithDelegate:(id)a0 request:(id)a1;
- (void)startRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
