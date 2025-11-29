@interface WCFinderDeleteSockPuppetCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failure;

- (id)initWithSuccessful:(id /* block */)a0 failure:(id /* block */)a1;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
