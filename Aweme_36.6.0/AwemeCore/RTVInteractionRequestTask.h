@class RxDeferred, RTVInteractionOperation, RTVInteractionOperationSection;

@interface RTVInteractionRequestTask : NSObject

@property (readonly, nonatomic) RxDeferred *liftCycleDeferred;
@property (readonly, nonatomic) RxDeferred *replyOperationDeferred;
@property (readonly, nonatomic) RxDeferred *requestResultDeferred;
@property (readonly, nonatomic) RxDeferred *executeDeferred;
@property (readonly, nonatomic) RTVInteractionOperationSection *operationSection;
@property (readonly, nonatomic) RTVInteractionOperation *operation;
@property (readonly, nonatomic) double requestTimeStamp;
@property (readonly, nonatomic) BOOL needReplyOperationWait;

- (BOOL)executeIfNeeded;
- (id)replyOperationResultPromise;
- (id)requestResultPromise;
- (void)markReplyOperationWaitNoNeed;
- (id)taskLifeCycleFinishPromise;
- (id)executePromise;
- (void)resolveRequestResult:(id)a0;
- (void)rejectReplyOperation:(id)a0;
- (void)resolveReplyOperation:(id)a0;
- (void)__resolveValue:(id)a0 forDeferred:(id)a1;
- (id)initWithOperation:(id)a0;
- (void).cxx_destruct;
- (BOOL)cancel;

@end
