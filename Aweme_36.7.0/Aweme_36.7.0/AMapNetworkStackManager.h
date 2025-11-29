@class NSSet, NSMutableArray, NSOperationQueue;

@interface AMapNetworkStackManager : NSObject

@property (retain, nonatomic) NSMutableArray *waitingStack;
@property (retain, nonatomic) NSSet *runloopModes;
@property (nonatomic) long long runningCount;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;

+ (void)networkStackManagerEntry:(id)a0;
+ (id)networkStackManagerThread;
+ (id)defaultManager;

- (id)startOperationWithRequestReformer:(id)a0 completionBlock:(id /* block */)a1;
- (void)deallocOperation;
- (void)handleOperationFinish;
- (void)tryPopWaitingStack;
- (void)pushOperation:(id)a0;
- (void)pushOperationsToQueue;
- (void).cxx_destruct;
- (void)cancelAllOperations;
- (id)init;
- (void)startOperation:(id)a0;
- (void)dealloc;

@end
