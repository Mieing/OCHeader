@interface WCFinderBizLiveQrCodeCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successCompletion;
@property (copy, nonatomic) id /* block */ failedCompletion;

- (id)initWithUrl:(id)a0 successCompletion:(id /* block */)a1 failedCompletion:(id /* block */)a2;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
