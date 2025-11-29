@class NSData;

@interface MMFinderLivePurchaseSuperfanClubCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSData *superfanSubscriptionInfo;
@property (copy, nonatomic) id /* block */ failBlock;
@property (copy, nonatomic) id /* block */ successBlock;
@property (nonatomic) int consumeType;

- (id)initJoinSuperfanWithTaskId:(id)a0 liveCookies:(id)a1 subscrptionType:(unsigned long long)a2 subscriptionInfo:(id)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
