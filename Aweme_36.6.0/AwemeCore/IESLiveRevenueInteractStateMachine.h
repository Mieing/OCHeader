@class NSDictionary, NSMutableArray, IESLiveRevenueInteractState;
@protocol IESLiveRevenueInteractStateMachineDelegate;

@interface IESLiveRevenueInteractStateMachine : NSObject

@property (copy, nonatomic) NSDictionary *states;
@property (retain, nonatomic) IESLiveRevenueInteractState *currentState;
@property (weak, nonatomic) IESLiveRevenueInteractState *initialState;
@property (weak, nonatomic) IESLiveRevenueInteractState *finalState;
@property (nonatomic) long long previousState;
@property (retain, nonatomic) NSMutableArray *eventHandleLogs;
@property (weak, nonatomic) id<IESLiveRevenueInteractStateMachineDelegate> delegate;
@property (nonatomic) long long eventLogThreshold;

- (BOOL)isInState:(long long)a0;
- (BOOL)isBetweenState:(long long)a0 toState:(long long)a1;
- (id)currentStateStr;
- (id)eventHandleLogsStr;
- (id)initWithStates:(id)a0 initialState:(id)a1 finalState:(id)a2;
- (long long)currentStateValue;
- (void)monitorEventHandleFailed:(long long)a0;
- (id)transformState:(id)a0;
- (void)logEventHandleResult:(id)a0;
- (void).cxx_destruct;
- (BOOL)fireEvent:(long long)a0;

@end
