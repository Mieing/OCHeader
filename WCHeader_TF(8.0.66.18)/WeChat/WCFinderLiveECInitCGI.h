@interface WCFinderLiveECInitCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ success;
@property (copy, nonatomic) id /* block */ failure;

- (id)initWithTypes:(id)a0 success:(id /* block */)a1 failure:(id /* block */)a2;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
