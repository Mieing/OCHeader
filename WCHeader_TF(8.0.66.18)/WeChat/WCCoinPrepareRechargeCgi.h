@class PrepareWecoinRechargeRequest, PrepareWecoinRechargeResponse;
@protocol WCCoinPrepareRechargeCgiDelegate;

@interface WCCoinPrepareRechargeCgi : WCBaseCgi

@property (retain, nonatomic) PrepareWecoinRechargeRequest *request;
@property (retain, nonatomic) PrepareWecoinRechargeResponse *response;
@property (weak, nonatomic) id<WCCoinPrepareRechargeCgiDelegate> delegate;

- (id)init;
- (void)start;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
