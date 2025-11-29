@class NSData;

@interface WCFinderLiveAudienceOpFansGroupCGI : WCFinderLiveBaseCgi

@property (nonatomic) unsigned long long opType;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSData *superfanSubscriptionInfo;
@property (copy, nonatomic) id /* block */ joinPrepareSuccessBlock;
@property (copy, nonatomic) id /* block */ joinPrepareFailBlock;
@property (copy, nonatomic) id /* block */ joinSuccessBlock;
@property (copy, nonatomic) id /* block */ joinFailBlock;

- (id)initJoinPrepareWithTaskId:(id)a0 liveCookies:(id)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (id)initJoinFansGroupWithTaskId:(id)a0 liveCookies:(id)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
