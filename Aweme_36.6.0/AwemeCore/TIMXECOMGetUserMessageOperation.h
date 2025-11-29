@class TIMXSDKInstance, NSObject;
@protocol OS_dispatch_queue, TIMXPullerStatusChangeObserverDelegate;

@interface TIMXECOMGetUserMessageOperation : NSOperation {
    TIMXSDKInstance *_r;
}

@property (nonatomic) long long userID;
@property (nonatomic) int inbox;
@property (nonatomic) long long tryCount;
@property (nonatomic) long long reason;
@property (nonatomic) unsigned int job_id;
@property (retain, nonatomic) id<TIMXPullerStatusChangeObserverDelegate> notifier;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *writableQueue;
@property (nonatomic) double startTime;
@property (nonatomic) double requestSuccessTime;
@property (nonatomic) double dbStartTime;
@property (nonatomic) double dbFinishTime;
@property (nonatomic, getter=isExecuting) BOOL executing;
@property (nonatomic, getter=isFinished) BOOL finished;

- (BOOL)canPullMessage;
- (long long)readInfoVersionFromStore;
- (long long)conversationVersionFromStore;
- (long long)cmdMessageIndexFromStore;
- (BOOL)isInWrongAccount:(id)a0;
- (long long)getUserIDFromResponse:(id)a0;
- (void)pullOfflineMessageSuccess:(id)a0 startingTime:(double)a1 jobId:(unsigned int)a2 pullingDirection:(unsigned long long)a3 tryCount:(long long)a4 reason:(long long)a5;
- (void)pullOfflineMessageFailure:(id)a0 jobId:(unsigned int)a1 tryCount:(long long)a2;
- (long long)dealReadInfo:(id)a0 context:(id)a1;
- (long long)dealConvMessage:(id)a0 context:(id)a1;
- (long long)dealCmdMessage:(id)a0;
- (id)finishCurrentPullWithHasMore:(BOOL)a0 response:(id)a1;
- (void)getConfigsWithNeedCheckConversationIntegrity:(BOOL)a0;
- (void)setConversationVersionToStore:(long long)a0;
- (void)setCmdMessageIndexToStore:(long long)a0;
- (void)setReadInfoVersionToStore:(long long)a0;
- (BOOL)hasInitSuccess;
- (id)initWithRootObject:(id)a0 userID:(long long)a1 inbox:(int)a2 tryCount:(long long)a3 reason:(long long)a4 writableQueue:(id)a5;
- (void)coreProcess;
- (void)sendRequestWithSuccessBlock:(id /* block */)a0 failureBlock:(id /* block */)a1 notStartBlock:(id /* block */)a2;
- (long long)syncDealConvMessage:(id)a0 context:(id)a1;
- (long long)syncDealReadInfo:(id)a0 context:(id)a1;
- (long long)syncDealCmdMessage:(id)a0;
- (void).cxx_destruct;
- (BOOL)isConcurrent;
- (void)finish;
- (void)sendRequest;
- (BOOL)isAsynchronous;
- (void)start;
- (void)cancel;

@end
