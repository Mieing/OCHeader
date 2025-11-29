@class NSString, MMFinderLiveTaskId;

@interface WCFinderLiveSuspiciousVerifyCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (copy, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) NSString *verificationId;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned int scene;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;

- (id)initWithTaskId:(id)a0 finderUsername:(id)a1 objectId:(unsigned long long)a2 liveId:(unsigned long long)a3 scene:(unsigned int)a4 verificationId:(id)a5 successBlock:(id /* block */)a6 failureBlock:(id /* block */)a7;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
