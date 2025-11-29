@interface WCFinderDeleteHistoryLiveCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (nonatomic) unsigned long long objectId;

- (id)initWithObjectId:(unsigned long long)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
