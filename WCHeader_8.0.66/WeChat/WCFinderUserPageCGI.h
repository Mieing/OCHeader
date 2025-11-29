@class FinderClientStatus, WCFinderUserPageParams;

@interface WCFinderUserPageCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;
@property (retain, nonatomic) FinderClientStatus *clientStatus;
@property (retain, nonatomic) WCFinderUserPageParams *params;

- (id)initWithParams:(id)a0 clientStatus:(id)a1 successful:(id /* block */)a2 failure:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
