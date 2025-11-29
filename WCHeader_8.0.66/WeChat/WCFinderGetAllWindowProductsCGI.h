@interface WCFinderGetAllWindowProductsCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;

- (id)initWithFinderUsername:(id)a0 feedID:(id)a1 scene:(int)a2 reportInfo:(id)a3 lastBuffer:(id)a4 ecSource:(id)a5 successful:(id /* block */)a6 failure:(id /* block */)a7;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
