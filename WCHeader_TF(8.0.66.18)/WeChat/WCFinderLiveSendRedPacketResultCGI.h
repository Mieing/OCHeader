@class NSString, NSData, MMFinderLiveTaskId;

@interface WCFinderLiveSendRedPacketResultCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long finderId;
@property (copy, nonatomic) NSString *finderNonceId;
@property (copy, nonatomic) NSData *liveCookies;
@property (copy, nonatomic) NSString *redPacketId;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;

- (id)initWithFinderTaskId:(id)a0 liveId:(unsigned long long)a1 finderId:(unsigned long long)a2 finderNonceId:(id)a3 liveCookies:(id)a4 redPacketId:(id)a5 successBlock:(id /* block */)a6 failureBlock:(id /* block */)a7;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
