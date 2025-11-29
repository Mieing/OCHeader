@class NSString, NSArray, NSData, MMFinderLiveTaskId;

@interface WCFinderLiveGetRedPacketInfoCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long finderId;
@property (copy, nonatomic) NSString *finderNonceId;
@property (copy, nonatomic) NSData *liveCookies;
@property (copy, nonatomic) NSArray *redPacketIdList;
@property (copy, nonatomic) NSString *finderUsername;
@property (nonatomic) long long liveScene;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;

- (id)initWithFinderTaskId:(id)a0 liveId:(unsigned long long)a1 finderId:(unsigned long long)a2 finderNonceId:(id)a3 liveCookies:(id)a4 redPacketIdList:(id)a5 finderUsername:(id)a6 liveScene:(long long)a7 successBlock:(id /* block */)a8 failureBlock:(id /* block */)a9;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
