@class NSData, NSString;

@interface WCFinderLivePrepayCgi : WCFinderLiveBaseCgi

@property (nonatomic) unsigned int rewardType;
@property (retain, nonatomic) NSData *rewardExtInfo;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithRewardType:(unsigned int)a0 rewardExtInfo:(id)a1 liveCookies:(id)a2 taskId:(id)a3 sessionBuffer:(id)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
