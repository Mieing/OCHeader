@interface WCFinderLivePrepareIncomeEncashCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ failedBlock;

- (id)initWithEncashScene:(unsigned int)a0 requestId:(id)a1 amount:(unsigned long long)a2 reportSessionId:(id)a3 incomeBizInfo:(id)a4 completionBlock:(id /* block */)a5 failedBlock:(id /* block */)a6;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
