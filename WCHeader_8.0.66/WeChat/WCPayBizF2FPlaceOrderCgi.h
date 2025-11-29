@protocol WCPayBizF2FPlaceOrderCgiDelegate;

@interface WCPayBizF2FPlaceOrderCgi : WCPayBaseCgi

@property (weak, nonatomic) id<WCPayBizF2FPlaceOrderCgiDelegate> cgiDelegate;

- (id)initPlaceOrderCgiWithDelegate:(id)a0 request:(id)a1;
- (void)startSendRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
