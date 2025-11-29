@interface WCFinderContactOptionCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;

- (id)initWithModTypeInfoCount:(unsigned long long)a0 modTypeInfoList:(id)a1 successful:(id /* block */)a2 failure:(id /* block */)a3;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
