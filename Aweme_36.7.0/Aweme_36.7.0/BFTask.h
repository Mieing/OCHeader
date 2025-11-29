@class NSCondition, NSError, NSMutableArray, NSObject;

@interface BFTask : NSObject {
    id _result;
    NSError *_error;
}

@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (nonatomic, getter=isFaulted) BOOL faulted;
@property (nonatomic, getter=isCompleted) BOOL completed;
@property (retain, nonatomic) NSObject *lock;
@property (retain, nonatomic) NSCondition *condition;
@property (retain, nonatomic) NSMutableArray *callbacks;
@property (readonly, nonatomic) id result;
@property (readonly, nonatomic) NSError *error;

+ (id)taskForCompletionOfAllTasks:(id)a0;
+ (id)cancelledTask;
+ (id)taskForCompletionOfAllTasksWithResults:(id)a0;
+ (id)taskForCompletionOfAnyTask:(id)a0;
+ (id)taskWithDelay:(int)a0;
+ (id)taskWithDelay:(int)a0 cancellationToken:(id)a1;
+ (id)taskFromExecutor:(id)a0 withBlock:(id /* block */)a1;
+ (id)taskWithResult:(id)a0;
+ (id)taskWithError:(id)a0;

- (id)continueWithSuccessBlock:(id /* block */)a0;
- (id)continueWithExecutor:(id)a0 withSuccessBlock:(id /* block */)a1;
- (id)continueWithExecutor:(id)a0 withBlock:(id /* block */)a1;
- (void)runContinuations;
- (id)continueWithExecutor:(id)a0 block:(id /* block */)a1 cancellationToken:(id)a2;
- (id)continueWithExecutor:(id)a0 successBlock:(id /* block */)a1 cancellationToken:(id)a2;
- (void)warnOperationOnMainThread;
- (id)continueWithBlock:(id /* block */)a0 cancellationToken:(id)a1;
- (id)continueWithSuccessBlock:(id /* block */)a0 cancellationToken:(id)a1;
- (BOOL)trySetResult:(id)a0;
- (BOOL)trySetError:(id)a0;
- (BOOL)trySetCancelled;
- (id)continueWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)waitUntilFinished;
- (id)description;
- (id)initWithError:(id)a0;
- (id)init;
- (id)initWithResult:(id)a0;
- (id)initCancelled;

@end
