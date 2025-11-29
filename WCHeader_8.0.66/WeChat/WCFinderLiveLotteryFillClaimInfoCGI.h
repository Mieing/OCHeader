@class NSData, NSString, FinderLiveLotteryFillClaimInfoRequest_ClaimInfo;

@interface WCFinderLiveLotteryFillClaimInfoCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSString *lotteryId;
@property (retain, nonatomic) FinderLiveLotteryFillClaimInfoRequest_ClaimInfo *claimInfo;

- (id)initWithLiveLotteryFillClaimInfoWithTaskId:(unsigned long long)a0 objectId:(unsigned long long)a1 liveCookies:(id)a2 lotteryId:(id)a3 claimInfo:(id)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
