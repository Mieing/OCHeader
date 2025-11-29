@interface WCFinderSearchFansCgi : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failedBlock;

- (id)initWithQuery:(id)a0 lastBuf:(id)a1 successful:(id /* block */)a2 failedBlock:(id /* block */)a3;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
