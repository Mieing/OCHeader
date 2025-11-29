@interface WCFinderLiveComplainReplayMsgCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithFinderTaskId:(id)a0 frameId:(id)a1 msgSeq:(unsigned long long)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (id)initWithObjectId:(unsigned long long)a0 liveId:(unsigned long long)a1 frameId:(id)a2 msgSeq:(unsigned long long)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (void)createRequestWithObjectId:(unsigned long long)a0 liveId:(unsigned long long)a1 frameId:(id)a2 seq:(unsigned long long)a3;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
