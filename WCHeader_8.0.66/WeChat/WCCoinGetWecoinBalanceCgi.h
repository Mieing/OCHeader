@interface WCCoinGetWecoinBalanceCgi : WCBaseCgi

@property (copy, nonatomic) id /* block */ callback;

- (id)init;
- (void)getWecoinBalance:(id /* block */)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
