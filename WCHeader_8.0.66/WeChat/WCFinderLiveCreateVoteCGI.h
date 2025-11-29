@interface WCFinderLiveCreateVoteCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithFinderTaskId:(id)a0 question:(id)a1 choices:(id)a2 duration:(unsigned int)a3 allowMultipleSelection:(BOOL)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (id)initWithFinderTaskId:(id)a0 votingId:(id)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (void)commonInit;
- (void)createRequestWithVotingId:(id)a0;
- (void)createRequestWithQuestion:(id)a0 choices:(id)a1 duration:(unsigned int)a2 allowMultipleSelection:(BOOL)a3;
- (id)votingRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
