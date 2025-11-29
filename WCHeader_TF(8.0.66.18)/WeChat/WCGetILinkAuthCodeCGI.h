@interface WCGetILinkAuthCodeCGI : WCBaseCgi

@property (copy, nonatomic) id /* block */ successfulBlock;
@property (copy, nonatomic) id /* block */ failedBlock;

- (id)initWithSuccessful:(id /* block */)a0 failed:(id /* block */)a1;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
