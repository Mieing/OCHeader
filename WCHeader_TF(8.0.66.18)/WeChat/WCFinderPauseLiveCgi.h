@class NSString, MMFinderLiveTaskId;

@interface WCFinderPauseLiveCgi : WCFinderLiveBaseCgi

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (copy, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long finderId;
@property (copy, nonatomic) NSString *finderNonceId;
@property (nonatomic) int action;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;

- (id)initWithTaskId:(id)a0 finderUsername:(id)a1 liveId:(unsigned long long)a2 finderId:(unsigned long long)a3 finderNonceId:(id)a4 action:(int)a5 duration:(double)a6 scene:(unsigned long long)a7 successBlock:(id /* block */)a8 failureBlock:(id /* block */)a9;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
