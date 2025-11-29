@class NSMutableOrderedSet, RTVCompactStateMachine;

@interface RTVCompactStateMachineMaker : NSObject

@property (readonly, weak, nonatomic) RTVCompactStateMachine *stateMachine;
@property (readonly, nonatomic) NSMutableOrderedSet *mutableStates;
@property (readonly, nonatomic) NSMutableOrderedSet *mutableEvents;

- (id)initWithCompactStateMachine:(id)a0;
- (id)__eventTyped:(unsigned long long)a0;
- (id)__stateTyped:(unsigned long long)a0;
- (void)__addStateWithType:(unsigned long long)a0;
- (void)__addStatesWithTypes:(id)a0;
- (void)__whenEvent:(unsigned long long)a0 thenFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (void)__whenEvent:(unsigned long long)a0 thenFromStates:(id)a1 toState:(unsigned long long)a2;
- (void)addStateWithType:(unsigned long long)a0;
- (void)addStatesWithTypes:(id)a0;
- (void)whenEvent:(unsigned long long)a0 thenFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (void)whenEvent:(unsigned long long)a0 thenFromStates:(id)a1 toState:(unsigned long long)a2;
- (void)event:(unsigned long long)a0 withOperation:(id /* block */)a1;
- (void)event:(unsigned long long)a0 shouldFire:(id /* block */)a1;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)addDelegate:(id)a0;
- (void).cxx_destruct;
- (void)done;

@end
