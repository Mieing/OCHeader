@class NSDictionary;

@interface WCFinderCustomCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;
@property (retain, nonatomic) NSDictionary *customReportUDFKV;
@property (copy, nonatomic) id /* block */ errorInterceptor;

- (id)initCustomCGINumber:(unsigned long long)a0 moduleName:(id)a1 request:(id)a2 successful:(id /* block */)a3 failure:(id /* block */)a4;
- (id)initCustomCGINumber:(unsigned long long)a0 moduleName:(id)a1 request:(id)a2 setFinderBaseRequestBlock:(id /* block */)a3 successful:(id /* block */)a4 failure:(id /* block */)a5;
- (id)additionalUdfKVInfo;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
