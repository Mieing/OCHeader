@interface WCFinderLiveStreamCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successfulBlock;
@property (copy, nonatomic) id /* block */ failureBlock;

- (id)initWithLastBuffer:(id)a0 location:(id)a1 tabType:(int)a2 successfulBlock:(id /* block */)a3 failureBlock:(id /* block */)a4;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
