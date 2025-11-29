@protocol WCPayLQTQryUserFundDetailCgiDelegate;

@interface WCPayLQTQryUserFundDetailCgi : WCPayBaseCgi

@property (weak, nonatomic) id<WCPayLQTQryUserFundDetailCgiDelegate> cgiDelegate;
@property (nonatomic) BOOL fromServer;

- (id)initWithDelegate:(id)a0;
- (void)startSendRequestWithTraceInfo:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void)cacheResponse:(id)a0;
- (void).cxx_destruct;

@end
