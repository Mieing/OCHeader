@interface WCFinderGetCurLocationCGI : WCBaseCgi

@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ failedBlock;

- (id)initWithLocation:(id)a0 completionBlock:(id /* block */)a1 failed:(id /* block */)a2;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
