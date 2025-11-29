@class NSMutableDictionary, BDStateMachineTransitionContext, NSDictionary, BDStateMachineState, NSMutableArray, NSArray;
@protocol BDStateMachineDelegate;

@interface BDStateMachine : NSObject

@property (retain, nonatomic) BDStateMachineTransitionContext *currentTransitionContext;
@property (retain, nonatomic) NSMutableArray *mutableTransitions;
@property (retain, nonatomic) NSMutableDictionary *mutableStates;
@property (retain, nonatomic) BDStateMachineState *currentState;
@property (nonatomic) BOOL isActive;
@property (readonly, nonatomic) NSDictionary *states;
@property (weak, nonatomic) id<BDStateMachineDelegate> delegate;
@property (readonly, nonatomic) NSArray *transitions;

- (void)addTransitions:(id)a0;
- (id)stateWithID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)activate;
- (void)addTransition:(id)a0;
- (void)addState:(id)a0;
- (void)addStates:(id)a0;
- (void)fireEvent:(id)a0;

@end
