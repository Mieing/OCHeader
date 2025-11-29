@class MMFinderLiveTaskId;

@interface WCFinderLiveModConsumptionQuotaCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (nonatomic) BOOL enableNotice;
@property (nonatomic) unsigned long long rewardQuota;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithFinderTaskId:(id)a0 enableNotice:(BOOL)a1 rewardQuota:(unsigned long long)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
