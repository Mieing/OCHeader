@class NSString;

@interface MMECCustomerSearchOrderListCGI : MMECOrderBaseCgi

@property (retain, nonatomic) NSString *keyword;
@property (retain, nonatomic) NSString *filteringAppId;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int pageSize;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithKeyword:(id)a0 filteringAppId:(id)a1 offset:(unsigned int)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (id)initWithKeyword:(id)a0 filteringAppId:(id)a1 offset:(unsigned int)a2 pageSize:(unsigned int)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)orderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
