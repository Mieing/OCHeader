@interface WCFinderPostRealNameVerifyCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ failedBlock;

- (id)initWithFinderUsername:(id)a0 completionBlock:(id /* block */)a1 failedBlock:(id /* block */)a2;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
