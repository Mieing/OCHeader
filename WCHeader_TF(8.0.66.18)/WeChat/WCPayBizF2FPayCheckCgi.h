@protocol WCPayBizF2FPayCheckCgiDelegate;

@interface WCPayBizF2FPayCheckCgi : WCPayBaseCgi

@property (weak, nonatomic) id<WCPayBizF2FPayCheckCgiDelegate> cgiDelegate;

- (id)initPayCheckCgiWithDelegate:(id)a0 request:(id)a1;
- (void)startSendRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
