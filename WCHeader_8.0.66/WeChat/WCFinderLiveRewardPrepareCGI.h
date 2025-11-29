@class WCFinderLiveRewardPrepareParams;

@interface WCFinderLiveRewardPrepareCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) WCFinderLiveRewardPrepareParams *params;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failedBlock;

- (id)initWithFinderTaskId:(id)a0 rewardParams:(id)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
