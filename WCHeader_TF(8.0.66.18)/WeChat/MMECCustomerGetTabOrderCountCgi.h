@interface MMECCustomerGetTabOrderCountCgi : MMECOrderBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithFilteringAppId:(id)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
- (void)didGetResponse:(id)a0;
- (void)orderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
