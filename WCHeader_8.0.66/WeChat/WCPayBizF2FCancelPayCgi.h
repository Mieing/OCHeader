@interface WCPayBizF2FCancelPayCgi : WCPayBaseCgi

- (id)init;
- (void)startBizF2FCancelRequest:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;

@end
