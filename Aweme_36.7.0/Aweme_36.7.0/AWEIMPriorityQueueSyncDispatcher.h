@class NSRecursiveLock, AWEIMSyncDispatchRaceContext, NSObject, AWEIMSafePriorityQueue;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AWEIMPriorityQueueSyncDispatcher : NSObject

@property (retain, nonatomic) AWEIMSafePriorityQueue *queue;
@property (nonatomic) BOOL dispatching;
@property (nonatomic) BOOL finished;
@property (nonatomic) BOOL locked;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) AWEIMSafePriorityQueue *raceQueue;
@property (retain, nonatomic) AWEIMSyncDispatchRaceContext *raceContext;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (retain, nonatomic) NSRecursiveLock *replaceLock;
@property (nonatomic) BOOL alwaysDispatch;
@property (nonatomic) BOOL replace;

- (id)currentPriorityObject;
- (void)toUnlcok;
- (void)registerPriority:(unsigned long long)a0 forObject:(id)a1;
- (BOOL)isInvalidWithNode:(id)a0;
- (id)preRemoveEnable:(id)a0;
- (id)preContinueEnable:(id)a0;
- (void)toLock;
- (BOOL)preEnableRegister;
- (void)purgeRaceQueueInvalidNodesBeforeRegisterNew;
- (id)toRemoveOrNot:(id)a0;
- (BOOL)preEnableDispatch;
- (id)priorityRaceResultWithNode:(id)a0;
- (void)removeOtherWhenReversalPriorityIfNeed:(id)a0;
- (void)toContinueOrNotWithObj:(id)a0 completion:(id /* block */)a1;
- (id)toContinueOrNot:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (void)dealloc;
- (void)dispatch;

@end
