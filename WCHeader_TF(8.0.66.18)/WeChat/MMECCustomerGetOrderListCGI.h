@class NSString;

@interface MMECCustomerGetOrderListCGI : MMECOrderBaseCgi

@property (nonatomic) unsigned int orderType;
@property (nonatomic) unsigned int evaluationStatus;
@property (retain, nonatomic) NSString *filteringAppId;
@property (retain, nonatomic) NSString *lastIndex;
@property (nonatomic) unsigned int pageSize;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithOrderType:(unsigned int)a0 evaluationStatus:(unsigned int)a1 filteringAppId:(id)a2 lastIndex:(id)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (id)initWithOrderType:(unsigned int)a0 evaluationStatus:(unsigned int)a1 filteringAppId:(id)a2 lastIndex:(id)a3 pageSize:(unsigned int)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)orderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
