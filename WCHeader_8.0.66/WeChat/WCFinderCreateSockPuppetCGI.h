@interface WCFinderCreateSockPuppetCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failure;

- (id)initWithNickname:(id)a0 headImageURL:(id)a1 successful:(id /* block */)a2 failure:(id /* block */)a3;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
