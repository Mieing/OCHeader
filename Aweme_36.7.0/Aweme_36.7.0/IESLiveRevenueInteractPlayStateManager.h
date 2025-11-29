@class NSString, IESLiveRevenueInteractStateMachine;

@interface IESLiveRevenueInteractPlayStateManager : NSObject <IESLiveRevenueInteractStateMachineDelegate>

@property (retain, nonatomic) IESLiveRevenueInteractStateMachine *stateMachine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (BOOL)isInState:(unsigned long long)a0;
- (void)setupStateMachine;
- (id)currentStateStr;
- (id)initializeNoneState;
- (void)logInfoWithEvent:(id)a0 extra:(id)a1;
- (void)logErrorWithEvent:(id)a0 extra:(id)a1;
- (void)monitorWithBusinessName:(id)a0 extra:(id)a1;
- (id)initializePlayingState;
- (id)initializeResultState;
- (id)initializeFinishState;
- (id)extraWithCommonParams:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)currentState;
- (unsigned long long)previousState;
- (BOOL)fireEvent:(unsigned long long)a0;

@end
