@interface WCFinderLiveGetKtvResourcesCgi : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithTaskId:(id)a0 resourceTypes:(unsigned int)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (id)initWithObjectId:(unsigned long long)a0 liveId:(unsigned long long)a1 anchorFinderUsername:(id)a2 resourceTypes:(unsigned int)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
