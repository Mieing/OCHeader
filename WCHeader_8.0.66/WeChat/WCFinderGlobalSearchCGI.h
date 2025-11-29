@interface WCFinderGlobalSearchCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successfulBlock;
@property (copy, nonatomic) id /* block */ failedBlock;

- (id)initWithJsonParams:(id)a0 successfulBlock:(id /* block */)a1 failedBlock:(id /* block */)a2;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
