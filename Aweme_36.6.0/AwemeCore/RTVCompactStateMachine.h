@class NSRecursiveLock, RTVCompactStateMachineMaker, NSSet, NSOperationQueue, RTVCompactState, NSString;
@protocol RTVMultipleDelegateInterface, RxInjector, RTVCompactStateMachineDelegate;

@interface RTVCompactStateMachine : NSObject <RTVCompactTransitionDelegate>

@property (weak, nonatomic) id<RxInjector> injector;
@property (retain) RTVCompactState *currentState;
@property (readonly, nonatomic) NSRecursiveLock *lock;
@property (readonly, nonatomic) NSOperationQueue *queue;
@property (readonly, nonatomic) RTVCompactStateMachineMaker *maker;
@property (readonly, nonatomic) id<RTVMultipleDelegateInterface, RTVCompactStateMachineDelegate> delegates;
@property (readonly, copy, nonatomic) NSSet *states;
@property (readonly, copy, nonatomic) NSSet *events;
@property (readonly) NSString *graphDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)make:(id /* block */)a0;
- (BOOL)isInState:(unsigned long long)a0;
- (id)__eventTyped:(unsigned long long)a0;
- (id)__stateTyped:(unsigned long long)a0;
- (id)__errorWithDomain:(id)a0 code:(long long)a1 userinfo:(id)a2;
- (void)__updateCurrentState:(id)a0 transition:(id)a1;
- (BOOL)shouldExecuteCompactTransition:(id)a0;
- (void)compactTransition:(id)a0 result:(BOOL)a1;
- (void)makeEvent:(unsigned long long)a0 operation:(id /* block */)a1;
- (id)stateTyped:(unsigned long long)a0;
- (BOOL)canFireEvent:(unsigned long long)a0;
- (id)fireEvent:(unsigned long long)a0 context:(id)a1;
- (void)__setStates:(id)a0;
- (void)__setEvents:(id)a0;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
