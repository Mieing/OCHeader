@interface WCFinderLiveVoipStreamStatusCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithLiveStreamStatus:(id)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
- (BOOL)ignoreError;
- (void)createRequestWithLiveStreamStatus:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
