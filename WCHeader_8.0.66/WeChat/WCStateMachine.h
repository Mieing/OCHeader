@class WCState, NSMutableSet, NSRecursiveLock;
@protocol WCStateMachineDelegate;

@interface WCStateMachine : MMObject {
    NSRecursiveLock *_lock;
}

@property (weak, nonatomic) id<WCStateMachineDelegate> delegate;
@property (retain, nonatomic) WCState *initialState;
@property (retain, nonatomic) WCState *currentState;
@property (readonly, nonatomic) NSMutableSet *states;
@property (readonly, nonatomic) NSMutableSet *events;
@property (readonly, nonatomic) BOOL active;

- (id)init;
- (int)activate;
- (int)addState:(id)a0;
- (int)addEvent:(id)a0;
- (BOOL)canFireEvent:(id)a0;
- (int)fireEvent:(id)a0 userInfo:(id)a1;
- (id)eventNamed:(id)a0;
- (id)stateNamed:(id)a0;
- (void).cxx_destruct;

@end
