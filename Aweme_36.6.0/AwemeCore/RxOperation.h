@class NSLock, RxOperationQueue, NSMutableArray;

@interface RxOperation : NSOperation {
    NSMutableArray *_internalErrors;
    NSLock *_stateLock;
    struct State { int _v; } _state;
    BOOL _hasFinishedAlready;
}

@property (weak) RxOperationQueue *operationQueue;
@property (nonatomic) struct State { int x0; } state;
@property (nonatomic) struct SharedPtr<Rx::Array<Rx::SharedPtr<Rx::OperationConditionInterface, Rx::ESPMode::Fast> >, Rx::ESPMode::Fast> { struct Array<Rx::SharedPtr<Rx::OperationConditionInterface, Rx::ESPMode::Fast> > *Object; struct SharedReferencer<Rx::ESPMode::Fast> { struct ReferenceControllerBase *ReferenceController; } SharedReferenceCount; } conditions;
@property (retain, nonatomic) NSMutableArray *observers;

+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsReady;

- (void)_evaluatingConditions;
- (void)produceOperation:(id)a0;
- (void)willEnqueue;
- (void)addCondition:(struct SharedPtr<Rx::OperationConditionInterface, Rx::ESPMode::Fast> { struct OperationConditionInterface *x0; struct SharedReferencer<Rx::ESPMode::Fast> { struct ReferenceControllerBase *x0; } x1; })a0;
- (void)finish:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)userInitiated;
- (void)execute;
- (BOOL)isReady;
- (void)addObserver:(id)a0;
- (id)init;
- (void)setUserInitiated:(BOOL)a0;
- (void)cancelWithError:(id)a0;
- (id).cxx_construct;
- (void)start;
- (void)finishWithError:(id)a0;
- (BOOL)isExecuting;
- (void)dealloc;
- (void)main;
- (BOOL)isFinished;
- (void)addDependency:(id)a0;
- (void)finished:(id)a0;

@end
