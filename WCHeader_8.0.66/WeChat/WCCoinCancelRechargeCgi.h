@class CancelWecoinRechargeRequest;

@interface WCCoinCancelRechargeCgi : WCBaseCgi

@property (retain, nonatomic) CancelWecoinRechargeRequest *request;

- (id)init;
- (void)start;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;

@end
