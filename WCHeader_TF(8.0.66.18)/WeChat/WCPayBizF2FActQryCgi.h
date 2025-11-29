@protocol WCPayBizF2FActQryCgiDelegate;

@interface WCPayBizF2FActQryCgi : WCPayBaseCgi

@property (weak, nonatomic) id<WCPayBizF2FActQryCgiDelegate> cgiDelegate;

- (id)initActQryCgiWithDelegate:(id)a0 request:(id)a1;
- (void)startSendRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
