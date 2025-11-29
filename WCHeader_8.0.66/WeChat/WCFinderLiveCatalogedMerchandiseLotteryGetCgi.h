@class NSString, NSData;

@interface WCFinderLiveCatalogedMerchandiseLotteryGetCgi : WCFinderLiveBaseCgi

@property (retain, nonatomic) NSString *activityId;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long objectId;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithTaskId:(id)a0 activityId:(id)a1 liveCookies:(id)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (id)initWithActivityId:(id)a0 objectId:(unsigned long long)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
