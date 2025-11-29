@class NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface RTVStateActionBaseOperation : NSOperation {
    BOOL _executing;
    BOOL _finished;
}

@property (readonly, nonatomic) NSMutableArray *observers;
@property (readonly, nonatomic) NSMutableArray *conditions;
@property (retain, nonatomic) NSArray *innerError;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (copy, nonatomic) id /* block */ completionCallback;

- (id)executeTask;
- (BOOL)addOperationObserver:(id)a0;
- (void)__notifyExecuteFinishWithError:(id)a0;
- (void)__evaluateConditions;
- (void)__notifyWillExecute;
- (BOOL)addOperationCondition:(id)a0;
- (void).cxx_destruct;
- (void)setExecuting:(BOOL)a0;
- (void)setFinished:(BOOL)a0;
- (int)timeoutInterval;
- (id)initWithCompletionBlock:(id /* block */)a0;
- (id)init;
- (void)start;
- (void)finishWithError:(id)a0;
- (BOOL)isExecuting;
- (void)main;
- (BOOL)isFinished;
- (void)callCompletionWithSuccess:(BOOL)a0 error:(id)a1;

@end
